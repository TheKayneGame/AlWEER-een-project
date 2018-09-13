// Include the lib

#include <MySQL_Connection.h>
#include <MySQL_Cursor.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>

// Netwerk stuff
char ssid[] = "Netgear-berk";                 // Network Name
char pass[] = "berk462993";                 // Network Password
byte mac[6];

// De server opzetten voor het sturen van de MySQL insert
WiFiServer server(80);
IPAddress ip(192, 168, 137, 159);
IPAddress gateway(192, 168, 137, 1);
IPAddress subnet(255, 255, 255, 0);

WiFiClient client;
MySQL_Connection conn((Client *)&client);


char INSERT_SQL[] = "INSERT INTO `alWeer`.`weer` (`Bightness`, `Humidity`, `Windsnelheid`, `Temp`) VALUES (%d ,%d , %d, %d)";
char query[128];

IPAddress server_addr(54,36,191,190);         // MySQL server IP
char user[] = "weer";           // MySQL user
char password[] = "admin";       // MySQL password

void setup() {

  Serial.begin(9600);
  randomSeed(analogRead(0));

  Serial.println("Initialising connection");
  Serial.print(F("Setting static ip to : "));
  Serial.println(ip);

  Serial.println("");
  Serial.println("");
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.config(ip, gateway, subnet);
  WiFi.begin(ssid, pass);

  while (WiFi.status() != WL_CONNECTED) {
    delay(200);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi Connected");

  WiFi.macAddress(mac);
  Serial.print("MAC: ");
  Serial.print(mac[5], HEX);
  Serial.print(":");
  Serial.print(mac[4], HEX);
  Serial.print(":");
  Serial.print(mac[3], HEX);
  Serial.print(":");
  Serial.print(mac[2], HEX);
  Serial.print(":");
  Serial.print(mac[1], HEX);
  Serial.print(":");
  Serial.println(mac[0], HEX);
  Serial.println("");
  Serial.print("Assigned IP: ");
  Serial.print(WiFi.localIP());
  Serial.println("");

  Serial.println("Connecting to database");

  while (conn.connect(server_addr, 3306, user, password) != true) {
    delay(200);
    Serial.print ( "." );
  }
  Serial.println("Connected to SQL Server!");

}

void loop() {

  // Data binnnen krijgen
  
  int Bightness = random(15, 35);
  int Humidity = random(25, 45);
  int Windsnelheid = random(35, 55);
  int Temp = random(45, 65);


  // Het wachten van de micro controller
  delay(10000);

  
  // Het binnen krijgen van de variablenen zodat het systeem ze kan versturen.
  sprintf(query, INSERT_SQL, Bightness, Humidity, Windsnelheid, Temp);

  Serial.println("Recording data.");
  Serial.println(query);

  MySQL_Cursor *cur_mem = new MySQL_Cursor(&conn);

  cur_mem->execute(query);

  delete cur_mem;

  

}
