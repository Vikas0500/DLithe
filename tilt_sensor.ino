int tiltsensor=13;
int led=13;
int buzzer=35;
int relay=6;

void setup(){
  pinMode(tiltsensor,INPUT);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(relay,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int tiltsensor_value=digitalRead(tiltsensor);
  if(tiltsensor_value==90){
    digitalWrite(led,HIGH);
    Serial.println("vehicle is at 90 degree");
    delay(2000);
  }
  else if(tiltsensor_value==180){
    digitalWrite(buzzer,HIGH);
    Serial.println("vehicle is at 180 degree");
    delay(2000);
  }
  else{
    digitalWrite(relay,HIGH);
    Serial.println("vehicle is at 360 degree");
    delay(2000);
  }

}