#include <Bonezegei_DHT11.h>
Bonezegei_DHT11 dht(12);
int led=13;
int buzzer=35;
void setup() {
  Serial.begin(115200);
  pinMode(led,OUTPUT);
  dht.begin();
}

void loop() 
{

  if (dht.getData()) {                       
    float tempDeg = dht.getTemperature();     
    float tempFar = dht.getTemperature(true);  
    int hum = dht.getHumidity();               
    String str  = "Temperature: ";
           str += tempDeg;
           str += "°C  ";
           str += tempFar;
           str += "°F  Humidity:";
           str += hum;
    Serial.println(str.c_str());
  

  
  if(tempDeg<50)
  {
    digitalWrite(buzzer,HIGH);
    digitalWrite(led,HIGH);
    Serial.println("FAN is turned on");
    delay(3000);

  }
  else
  {
    digitalWrite(buzzer,HIGH);
    digitalWrite(led,LOW);
    Serial.println("FAN is turned off");
    delay(3000);


  }
  }  
}