int ir=12;
int led=42;
int buzzer=6;
void setup(){
  pinMode(ir,INPUT);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int irvalue=digitalRead(ir);
  if(irvalue==HIGH)
  {
    Serial.println("Obejct is detected");
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,LOW);
    delay(1000);
  }
  else{
    Serial.println("Object is not detected");
    digitalWrite(buzzer,HIGH);
    digitalWrite(led,LOW);
    delay(1000);
  }
}