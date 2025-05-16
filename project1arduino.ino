 /*
 project for enter number of ur birth:
  1)if ur birthday in 1,2,3,4 the led red will light 
2)if ur birthday in 5,6,7,8 the led green will light 
 3)if ur birthday in 9,10,11,12 the led yallow will light 
 AUTHOR:SADEEN ABDELALRAHMAN
 DATE:3/4/2025 IN 9:33
 */
 int num; 
#define ledr  13
#define ledg 12 
#define ledy  10

void setup() {
  Serial.begin(9600);
  Serial.println("Enter a number to light the lamp (0-12):");
  pinMode(ledr, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(ledy, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    //num = Serial.parseInt(); // Use parseInt to read an integer value
    
    // Turn off all LEDs before checking the range
    digitalWrite(ledr, LOW);
    digitalWrite(ledg, LOW);
    digitalWrite(ledy, LOW);
    num = Serial.parseInt(); 
    switch(num){
      case 1:
      case 2:
      case 3:
      case 4:
      digitalWrite(ledr, HIGH);
      digitalWrite(ledg, LOW); 
      digitalWrite(ledy, LOW); 
       delay(2000);
      break;
      case 5:
      case 6:
      case 7:
      case 8:
      digitalWrite(ledr, LOW);
    digitalWrite(ledg, HIGH);
    digitalWrite(ledy, LOW);
    delay(2000);
      break;
      case 9:
      case 10:
      case 11:
      case 12:
    digitalWrite(ledr, LOW);
    digitalWrite(ledg, LOW);
    digitalWrite(ledy, HIGH); 
     delay(2000);
      break;
      default:
    digitalWrite(ledr, LOW);
    digitalWrite(ledg, LOW);
    digitalWrite(ledy, LOW);
      break;

    }
    
  }
}