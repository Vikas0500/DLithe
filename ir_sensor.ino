const int ir=12;
void setup(){
  pinMode(ir,INPUT);
  Serial.begin(9600);
}
void loop(){
  int irvalue=digitalRead(ir);
  if(irvalue==HIGH)
  {
   Serial.println("Obejct is detected");
  }
  else{
   
    Serial.println("Object is not detected");
  }
}