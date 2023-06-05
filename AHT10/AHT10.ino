 
#include <Wire.h>
#include <Thinary_AHT10.h>
 
AHT10Class AHT10;
 
void setup(){
  Serial.begin(9600);
  if (AHT10.begin(0x38)) {
    Serial.println("Init AHT10 Sucess.");
 
  } else {
    Serial.println("Init AHT10 Failure.");
 
  }
}
 

 
void loop(){
  Serial.println(String("Humidity(%RH):") + String(String(AHT10.GetHumidity()) + String("%")));
  Serial.println(String("Temperature(℃):") + String(String(AHT10.GetTemperature()) + String("℃")));
  Serial.println(String("Dewpoint(℃):") + String(String(AHT10.GetDewPoint()) + String("℃")));
  Serial.println(AHT10.readStatus());
  Serial.println("");
  delay(500);
 
}