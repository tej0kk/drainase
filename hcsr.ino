void setUltra()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, OUTPUT);
}

void bacaUltra()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration / 58.2;
  distance = constrain(distance, 3, 40);
}
