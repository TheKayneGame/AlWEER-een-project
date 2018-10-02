// Include the lib

#include <MySQL_Connection.h>
#include <MySQL_Cursor.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>

// Netwerk stuff
char ssid[] = "alleenVoorRoen";                 // Network Name
char pass[] = "roenislekker";                 // Network Password
byte mac[6];

// De server opzetten voor het sturen van de MySQL insert
WiFiServer server(80);
IPAddress ip(192, 168, 137, 159);
IPAddress gateway(192, 168, 43, 190);
IPAddress subnet(255, 255, 255, 0);

WiFiClient client;
MySQL_Connection conn((Client *)&client);

char INSERT_SQL[] = "INSERT INTO `alWeer`.`weer` (`Bightness`, `Humidity`, `Windsnelheid`, `Temp`) VALUES (%d ,%d , %d, %d)";
char query[128];

IPAddress server_addr(54,36,191,190);         // MySQL server IP
char user[] = "weer";           // MySQL user
char password[] = "admin";       // MySQL password


void setup() {
  // The LED
  pinMode(LED_BUILTIN, OUTPUT); 
  digitalWrite(LED_BUILTIN, LOW);
  WiFi.config(ip, gateway, subnet);
  WiFi.begin(ssid, pass);

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
  // Data binnnen krijgen
  int Bightness = 333;
  int Humidity = 333;
  int Windsnelheid = 333;
  int Temp = 333;

  // Het wachten van de micro controller
  delay(10000);

  
  // Het binnen krijgen van de variablenen zodat het systeem ze kan versturen.
  sprintf(query, INSERT_SQL, Bightness, Humidity, Windsnelheid, Temp);

  MySQL_Cursor *cur_mem = new MySQL_Cursor(&conn);

  cur_mem->execute(query);

  delete cur_mem;
}
