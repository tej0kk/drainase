void setDisplay()
{
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);lcd.print("   Lab. TRBU    ");
  lcd.setCursor(0,1);lcd.print(" Sistem Drainase");
}

void display()
{
  lcd.setCursor(0,0);lcd.print("Pintu : ");lcd.print(pintu);lcd.print("   ");
  lcd.setCursor(0,1);lcd.print("Tinggi Air : ");lcd.print("distance");lcd.print("   ");
}
