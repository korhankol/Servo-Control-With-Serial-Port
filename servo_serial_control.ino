#include<Servo.h>
Servo motor;
const int bekle=1500;
char karakter;

void setup() {
Serial.begin(9600);  
motor.attach(5);
}

void loop() {


if(Serial.available()>0){
  
char karakter=Serial.read();
Serial.print("Gelen karakter=");
Serial.println(karakter);

if(karakter=='1'){
motor.write(90);
delay(bekle);
Serial.println("motor 90 derecede");}

if(karakter=='2'){
motor.write(180);
delay(bekle);
Serial.println("motor 180 derecede");}

if(karakter=='3'){
motor.write(0);
delay(bekle);
Serial.println("motor 0 derecede");}

}
}
