const int ir=12;
const int relay=5;

void setup(){
  pinMode(ir,INPUT);
  pinMode(relay,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(ir,HIGH);
  digitalWrite(relay,HIGH);
  delay(5000);
  
  digitalWrite(ir,LOW);
  digitalWrite(relay,LOW);
  delay(5000);
}