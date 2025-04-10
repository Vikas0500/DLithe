#include <Ultrasonic.h>

int led=13;
int buzzer=35;

Ultrasonic ultrasonic(11,12);
int distance;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int distance = ultrasonic.read();
  if(distance<5){
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,LOW);
  delay(2000);

  digitalWrite(led,LOW);
  digitalWrite(buzzer,HIGH);
  delay(2000);
  }

  Serial.print("Distance in CM: ");
  Serial.println(distance);
  delay(1000);
}