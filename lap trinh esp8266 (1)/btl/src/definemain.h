#define BLYNK_TEMPLATE_ID "TMPL6-5nBkIgm"
#define BLYNK_TEMPLATE_NAME "BTL"
#define BLYNK_AUTH_TOKEN "KYdJ2vhCdPg_Mq08NyWKz4wUMP2Am6L_"
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define RL1 D0
#define RL2 D1
char ssid[] = "POCO F3";
char pass[] = "0774758648";

int pinValue1,pinValue2,pinValue3;
BLYNK_WRITE(V0) {
  pinValue1 = param.asInt(); 
}
BLYNK_WRITE(V1) {
  pinValue2 = param.asInt(); 
}
BLYNK_WRITE(V2) {
  pinValue3 = param.asInt(); 
}
BLYNK_CONNECTED(){
  Blynk.syncVirtual(V0);
  Blynk.syncVirtual(V1);
  Blynk.syncVirtual(V2);
}