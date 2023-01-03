#include <DHT.h>
#define DHTPIN A1
#define DHTTYPE DHT11
DHT dht (DHTPIN, DHTTYPE) ;



void setup() {
  Serial.begin (9600) ;
  dht.begin();

}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("humidity : ");
  Serial.println(h);
  Serial.print("temperature : ");
  Serial.println(t);
  delay(1000);

}
