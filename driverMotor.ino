void setMotor()
{
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(nc_atas, INPUT);
  pinMode(nc_bawah, INPUT);
}

void kalibrasiPintu()
{
  while (1)
  {
    atas();
    if (digitalRead(nc_atas) == LOW); break;
  }

  while(1)
  {
    bawah();
    if (digitalRead(nc_bawah) == LOW); break;
  }
}

void atas()
{
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);
   digitalWrite(int1, 0);
  pintu = "Open";
}

void bawah()
{
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);
   digitalWrite(in1, 1);
  pintu = "Close";
}

void stop()
{
  digitalWrite(in3, 0);
  digitalWrite(in4, 0);
}
