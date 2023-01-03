#include <Servo.h>
Servo servo;

int ir_sensor=8;
int val;

void setup() {
  // put your setup code here, to run once:
  pinMode(ir_sensor, INPUT);
  servo.attach(10);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(ir_sensor);
  if (val==0) {
    servo.write(180);
  }
  else{
    servo.write(90);
  }
}
