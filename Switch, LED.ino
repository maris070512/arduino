int led = 8;
int swh = 11;





void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(swh, INPUT_PULLUP);



}

void loop() {
  int readValue = digitalRead(swh);

  // put your main code here, to run repeatedly;
  if (readValue == LOW) {
    digitalWrite(led, HIGH) ;
  }
  else {
    digitalWrite (led, LOW) ;

  }
}
