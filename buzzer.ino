int BUZZER = 6;
void setup()
{
  pinMode(BUZZER,OUTPUT);
  Serial.begin(9600);

}
void loop()
{
  digitalWrite(BUZZER,HIGH);
  Serial.println("The BUZZER is turn ON");
  delay(1000);


  digitalWrite(BUZZER,LOW);
  Serial.println("The BUZZER is turn OFF");
  delay(2000);
}c:\Users\Rekha M Hanchinamani\Desktop\led_buzzer_relay\led_buzzer_relay.ino
