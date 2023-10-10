#define LED 13
#define pinSensor 2
int obstaculo = HIGH;
void setup() 
{
  pinMode(LED, OUTPUT);
  pinMode(pinSensor, INPUT);
  Serial.begin(9600);  
}
void loop() 
{
  obstaculo = digitalRead(pinSensor);
  if (obstaculo == LOW)
  {
    Serial.println("OBSTACULO!!, OBSTACULO!!");
    digitalWrite(LED, HIGH);
  }
  else
  {
    Serial.println("Libre");
    digitalWrite(LED, LOW);
  }
  delay(200);
}
