int LED=42;
int BUZZER=6;
int RELAY=5;

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(BUZZER,OUTPUT);
  pinMode(RELAY,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(LED,HIGH);
  digitalWrite(BUZZER,LOW);
  digitalWrite(RELAY,HIGH);
  Serial.println("LED turn ON");
  delay(1000);

  digitalWrite(LED,LOW);
  digitalWrite(BUZZER,HIGH);
  digitalWrite(RELAY,LOW);
  Serial.println("LED turn OFF");
  delay(2000);
}