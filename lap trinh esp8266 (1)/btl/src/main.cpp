/*#define BLYNK_TEMPLATE_ID "TMPL6-5nBkIgm"
#define BLYNK_TEMPLATE_NAME "BTL"
#define BLYNK_AUTH_TOKEN "KYdJ2vhCdPg_Mq08NyWKz4wUMP2Am6L_"
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "POCO F3";
char pass[] = "0774758648";

#define RL1 D0
#define RL2 D1
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
}*/
/*#include <definemain.h>
#define RL1 D0
#define RL2 D1
void CTRL1()
{
  if (pinValue1 == 1 || pinValue3 == 1 ){
    digitalWrite(RL1, LOW);
  }
  else{
    digitalWrite(RL1, HIGH);
  }
}
void CTRL2()
{
  if (pinValue2 == 1 || pinValue3 == 1){
    digitalWrite(RL2, LOW);
  }
  else{
    digitalWrite(RL2, HIGH);
  }
}*/
#include <definemain.h>
void CTRL()
{
  //Control Relay1
  if (pinValue1 == 1 || pinValue3 == 1 ){
    digitalWrite(RL1, LOW);
  }
  else{
    digitalWrite(RL1, HIGH);
  }
  //Control Relay2
  if (pinValue2 == 1 || pinValue3 == 1){
    digitalWrite(RL2, LOW);
  }
  else{
    digitalWrite(RL2, HIGH);
  }
}
void setup() {
  pinMode(RL1, OUTPUT);  
  digitalWrite(RL1, HIGH);
  pinMode(RL2, OUTPUT);  
  digitalWrite(RL2, HIGH);
  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() { 
  Blynk.run();
  CTRL();
}
   





