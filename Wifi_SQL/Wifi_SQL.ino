// Include the lib
#include <MySQL_Connection.h>
#include <MySQL_Cursor.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>

// Netwerk
// char ssid[] = "RINKE-LENOVO";                 // Network Name
char ssid[] = "Esp";                 // Network Name
char pass[] = "12345678";                 // Network Password
byte mac[6];

// De server opzetten voor het sturen van de MySQL insert
WiFiServer server(80);
IPAddress ip(192, 168, 137, 160);
IPAddress gateway(192, 168, 137, 1);
IPAddress subnet(255, 255, 255, 0);

WiFiClient client;
MySQL_Connection conn((Client *)&client);

char INSERT_SQL[] = "INSERT INTO `alWeer`.`weer` (`Bightness`, `Humidity`, `Windsnelheid`, `Temp`) VALUES (%s ,%s , %s, %s)";
char query[128];

IPAddress server_addr(54, 36, 191, 190);      // MySQL server IP
char user[] = "weer";           // MySQL user
char password[] = "admin";       // MySQL password

// The incomming bytes
char incomingByte[8];
short input[4];
float inputf[4];

float tempf = 0;
float humf = 0;
float airf = 0;
float bightf = 0;

char temp[25];
char hum[25];
char air[25];
char bight[25];

void setup() {
  // Begin serial
  Serial.begin(9600);

  // The LED
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  // Set the config for the Wifi connection
  //WiFi.config(ip, gateway, subnet);
  // Start the WIFI connection
  WiFi.begin(ssid, pass);

  // Wait until there is a connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(200);
  }

  WiFi.macAddress(mac);
  // If it not works than you need to check the gatway. THE GAYWAY!!!!!!!!!
  while (conn.connect(server_addr, 3306, user, password) != true) {
    delay(200);
  }
  digitalWrite(LED_BUILTIN, HIGH);
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    Serial.readBytes(incomingByte, 8);
    int j = 0;
    for (int i = 0; i < 4; i++) {
      input[i] = incomingByte[j + 1] << 8 | incomingByte[j];
      j += 2;
    }
    for (int i = 0; i < 4; i++) {
      Serial.println(input[i]);
      inputf[i] = input[i];
    }
    // Delen alles door 100
    tempf = (inputf[3] / 100);
    humf = (inputf[1] / 100);
    Serial.println(inputf[2]);
    airf = (inputf[2]);
    bightf = (inputf[0] / 100);
    Serial.println(inputf[2]);
    // Convert to string
    gcvt(tempf, 4, temp);
    gcvt(humf, 4, hum);
    gcvt(airf, 4, air);
    gcvt(bightf, 4, bight);

    // Het binnen krijgen van de variablenen zodat het systeem ze kan versturen.
    sprintf(query, INSERT_SQL, temp, hum, air, bight);
    Serial.println(query);
    MySQL_Cursor *cur_mem = new MySQL_Cursor(&conn);

    cur_mem->execute(query);

    delete cur_mem;
  }

}
