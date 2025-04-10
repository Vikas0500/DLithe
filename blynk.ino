#define BLYNK_TEMPLATE_ID "TMPL3z6fbDfIk"
#define BLYNK_TEMPLATE_NAME "rekhaled"
#define BLYNK_AUTH_TOKEN "gOvvZyC3Ww9un_5z_NdbalgIHQ-HKpFs"
#define BLYNK_PRINT Serial
#include<WiFi.h>
#include<BlynkSimpleEsp32.h>

char auth[] = "gOvvZyC3Ww9un_5z_NdbalgIHQ-HKpFs";
char ssid[] = "REKHA";
char pass[] = "12345678";

BLYNK_WRITE(V3){
  int pinvalue=param.asInt();
  digitalWrite(13,pinvalue);
}
void setup() {
 Serial.begin(9600);
 pinMode(13,OUTPUT);
 WiFi.begin(ssid,pass);
 while(WiFi.status() != WL_CONNECTED){
  delay(500);
  Serial.println("Not connected");
 }
 Serial.println("Connected");
 Blynk.begin(auth,ssid,pass);

}

void loop() {
  Blynk.run();
}