#include "DHT.h"

DHT dht(11, DHT11);
int Fan=6;
int blue_LED=8;
int red_LED=3;


void setup() {
  dht.begin();
  pinMode(Fan, OUTPUT);
  pinMode(blue_LED, OUTPUT);
  pinMode(red_LED, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  float hum=dht.readHumidity();
  float temp=dht.readTemperature();
  if (temp > 35) {
    analogWrite(Fan, 255);
  }
  else if (temp <= 35) {
    analogWrite(Fan, 0);
  }
  if (hum > 70 || hum < 60) {
    digitalWrite(blue_LED, LOW);
    digitalWrite(red_LED, HIGH);

  }
  else if (hum >= 60 && hum <=70) {
    digitalWrite(blue_LED, HIGH);
    digitalWrite(red_LED, LOW);
  }
  // put your main code here, to run repeatedly:

}
