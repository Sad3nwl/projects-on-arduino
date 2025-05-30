/*
name :sadeen abdelalrahman
date:30/5/2025
you can make a any color you want need the 3 colores :red ,green,blue
*/
const int redpin = 9;
const int greenpin = 10;
const int bluepin = 12;

void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);  
  pinMode(bluepin, OUTPUT);
}

void loop() {
    analogWrite(redpin,255);
    analogWrite(greenpin,0);
   analogWrite(bluepin,0);
   delay(1000); 
    analogWrite(redpin,0);
    analogWrite(greenpin,255);
   analogWrite(bluepin,0);
   delay(1000); 
    analogWrite(redpin,0);
    analogWrite(greenpin,0);
   analogWrite(bluepin,255);
   delay(1000);
 
}

 