int ir=12;
int buzzer=35;
void setup(){
  pinMode(ir,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int irvalue=digitalRead(ir);
  if(irvalue==HIGH)
  {
    digitalWrite(buzzer,HIGH);
    Serial.println("Object is detected");
    delay(1000);
  }
  else{
    digitalWrite(buzzer,LOW);
    Serial.println("Object is not detected");
    delay(1000);
  }
}