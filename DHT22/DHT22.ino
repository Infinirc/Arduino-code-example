d#include "DHT.h"
#define DHTPIN 2     
#define DHTTYPE DHT22  
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}
void loop() {
  delay(1000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(h) || isnan(t) ) {
    Serial.println(F("感測器讀取失敗"));
    return;
  }
  Serial.print(F("濕度: "));
  Serial.print(h);
  Serial.print(F("% 溫度: "));
  Serial.print(t);
  Serial.println("°C");
}