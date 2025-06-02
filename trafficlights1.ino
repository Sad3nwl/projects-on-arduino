/*project:making a traffic light using :red,yallow,green
sadeen yousef 
28/3/2025


*/
void setup() {
  pinMode(7,OUTPUT);//red
  pinMode(9,OUTPUT);//yallow
  pinMode(11,OUTPUT);//green
}

void loop() {
digitalWrite(7, HIGH);
digitalWrite(9,LOW);
digitalWrite(11,LOW);
delay(2000);
digitalWrite(7, HIGH);
digitalWrite(9,HIGH); 
digitalWrite(11,HIGH);
delay(500);
 digitalWrite(7, LOW);
digitalWrite(9,HIGH);
digitalWrite(11,LOW);
delay(2000);
digitalWrite(7, HIGH);
digitalWrite(9,HIGH); 
digitalWrite(11,HIGH);
delay(500);
digitalWrite(7, LOW);
digitalWrite(9,LOW);
digitalWrite(11,HIGH);
delay(2000);
 digitalWrite(7, HIGH);
digitalWrite(9,HIGH); 
digitalWrite(11,HIGH);
delay(500);
}