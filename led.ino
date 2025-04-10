int LED = 13;
void setup()
{
  pinMode(LED,OUTPUT);
  Serial.begin(9600);

}
void loop()
{
  digitalWrite(LED,HIGH);
  Serial.println("The LED is turn ON");
  delay(1000);


  digitalWrite(LED,LOW);
  Serial.println("The LED is turn OFF");
  delay(2000);
}
