int LED=42;
int BUZZER=6;

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(BUZZER,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(LED,HIGH);
  digitalWrite(BUZZER,LOW);
  Serial.println("LED turn ON");
  delay(1000);

  digitalWrite(LED,LOW);
  digitalWrite(BUZZER,HIGH);
  Serial.println("BUZZER turn OFF");
  delay(2000);
}