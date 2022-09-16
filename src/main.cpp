#include <Arduino.h>


void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("\n \nHello, World");
  Serial.println("\n Yongxing Zhang, student NO.000766325");
  Serial.printf("\n Chip ID: %d", ESP.getChipId());
  Serial.printf("\n Flash Chip id: %d ", ESP.getFlashChipId());
}

void loop()
{
  // put your main code here, to run repeatedly:
  Serial.printf("\n \n \t Time since board began: %d", millis() );
  delay(2000);
}