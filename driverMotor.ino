void setMotor()
{
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(in1, OUTPUT);
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
  //  digitalWrite(int1, 1);
  pintu = "Close";
}

void bawah()
{
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);
  //  digitalWrite(in1, 0);
  pintu. = "Open";
}

void stop()
{
  digitalWrite(in3, 0);
  digitalWrite(in4, 0);
}
