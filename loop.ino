obstaculo = digitalRead(pinSensor);
if (obstacle == LOW)
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
