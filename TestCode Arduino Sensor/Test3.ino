#define ADDRESS      0x40
#define TEMP_MEASURE_NOHOLD  0xF3
#define HUMD_MEASURE_NOHOLD  0xF5

#include <Wire.h>

float humidity = 0;
float tempf = 0;

//---------------------------------------------------------------
void setup()
{
  Serial.begin(9600);   // open serial over USB at 9600 baud

  Wire.begin();
  uint8_t ID_1;

  // Check device ID
  Wire.beginTransmission(ADDRESS);
  Wire.write(0xFC);
  Wire.write(0xC9);
  Wire.endTransmission();

  Wire.requestFrom(ADDRESS, 1);
  uint8_t ID_Temp_Hum = Wire.read();;

  int x = 0;

  if (ID_Temp_Hum == 0x15) //Ping CheckID register
    x = 1;
  else if (ID_Temp_Hum == 0x32)
    x = 2;
  else
    x = 0;

  if (x == 1)
  {
    Serial.println("Si7021 Found");
    //Serial.println(ID_Temp_Hum, HEX);
  }
  else if (x == 2)
  {
    Serial.println("HTU21D Found");
    //Serial.println(ID_Temp_Hum, HEX);
  }
  else
    Serial.println("No Devices Detected");
  //Serial.println(ID_Temp_Hum, HEX);

}
//---------------------------------------------------------------
void loop()
{
  //Get readings from all sensors
  // Measure Relative Humidity from the HTU21D or Si7021
  uint16_t RH_Code = makeMeasurment(HUMD_MEASURE_NOHOLD);
  float result = (125.0 * RH_Code / 65536) - 6;
  humidity = result;

  // Measure Temperature from the HTU21D or Si7021
  // Measure temperature
  uint16_t temp_Code = makeMeasurment(TEMP_MEASURE_NOHOLD);
  result = (175.72 * temp_Code / 65536) - 46.85;
  tempf = result;
  // Temperature is measured every time RH is requested.
  // It is faster, therefore, to read it from previous RH
  // measurement with getTemp() instead with readTemp()
  Serial.print("Temp:");
  Serial.print(tempf);
  Serial.print("F, ");

  Serial.print("Humidity:");
  Serial.print(humidity);
  Serial.println("%");
  delay(1000);

}


uint16_t makeMeasurment(uint8_t command)
{
  // Take one ADDRESS measurement given by command.
  // It can be either temperature or relative humidity
  // TODO: implement checksum checking

  uint16_t nBytes = 3;
  // if we are only reading old temperature, read olny msb and lsb
  if (command == 0xE0) nBytes = 2;

  Wire.beginTransmission(ADDRESS);
  Wire.write(command);
  Wire.endTransmission();
  // When not using clock stretching (*_NOHOLD commands) delay here
  // is needed to wait for the measurement.
  // According to datasheet the max. conversion time is ~22ms
  delay(100);

  Wire.requestFrom(ADDRESS, nBytes);
  if (Wire.available() != nBytes)
    return 100;

  unsigned int msb = Wire.read();
  unsigned int lsb = Wire.read();
  // Clear the last to bits of LSB to 00.
  // According to datasheet LSB of RH is always xxxxxx10
  lsb &= 0xFC;
  unsigned int mesurment = msb << 8 | lsb;

  return mesurment;
}

