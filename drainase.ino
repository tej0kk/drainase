#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

#define in3 D3
#define in4 D4
#define trig D7
#define echo D6
#define in1 D5
#define nc_atas D0
#define nc_bawah D8

long duration, distance; // Duration used to calculate distance
String pintu = "Close";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  setDisplay();
  setUltra();
  setMotor();
  kalibrasiPintu();
  delay(2500);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  bacaUltra();
  display();
  if (distance < 5) {
    while (1)
    {
      atas();
      if(digitalRead(nc_atas) == HIGH);break;
    }
  }
  else if (distance > 5) {
    while (1)
    {
      bawah();
      if(digitalRead(nc_bawah) == HIGH);break;
    }
  }
  else {
    stop();
  }
}
