void setMotor()
{
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(relay, OUTPUT);
  pinMode(nc_atas, INPUT_PULLUP);
  pinMode(nc_bawah, INPUT_PULLUP);
}

void kalibrasiPintu()
{
  while (1)
  {
    atas();
    if (digitalRead(nc_atas) == HIGH); break;
  }

  while(1)
  {
    bawah();
    if (digitalRead(nc_bawah) == HIGH); break;
  }
}

void atas()
{
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);
  //  digitalWrite(relay, 1);
}

void bawah()
{
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);
  //  digitalWrite(relay, 0);
}

void stop()
{
  digitalWrite(in3, 0);
  digitalWrite(in4, 0);
}
