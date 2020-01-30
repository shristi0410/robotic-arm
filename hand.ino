
#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
int servopos=0;



#include <Keypad.h> // Installing Library

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns

char keys[ROWS][COLS] = {
{'1','2','3'},
{'4','5','6'},
{'7','8','9'},
{'*','0','#'}
};

byte rowPins[ROWS] = {2, 3, 4, 5}; //connect to the row R1-R4 pinouts of the keypad
byte colPins[COLS] = {6, 7, 8}; //connect to the column C1-C3 pinouts of the keypad

// Create the Keypad

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS );
void setup() {
    servo1.attach(3);
    servo2.attach(9);
    servo3.attach(5);
    servo4.attach(6);
    servo5.attach(11);
    Serial.begin(9600);
}
void loop() {
  char key = keypad.getKey();
  if (key == '1')
  {
  for(servopos=0 ; servopos<=180; servopos++)
 {
  servo1.write(servopos); 
  delay(100); 
 
 }
 for(servopos= 180; servopos>=0; servopos--)
 {
  servo1.write(servopos);
  delay(100); 
 
 } 
  }
  if (key=='2')
  {
 for(servopos=0 ; servopos<=180; servopos++)
 {
  servo1.write(servopos); 
  servo2.write(servopos); 
  delay(100);
 }
  }  
  if (key=='3')
  {
 for(servopos= 180; servopos>=0; servopos--)
 {
  servo1.write(servopos); 
  servo2.write(servopos); 
  delay(100);
 }
  }
  if (key=='4')
  {
 for(servopos=0 ; servopos<=180; servopos++)
 {
  servo1.write(servopos); 
  servo2.write(servopos); 
  servo3.write(servopos); 
  servo4.write(servopos); 
  servo5.write(servopos);
  delay(100); 
 
 }
  }
  if (key=='5')
  {
  for(servopos= 180; servopos>=0; servopos--)
 {
  servo1.write(servopos); 
  servo2.write(servopos); 
  servo3.write(servopos); 
  servo4.write(servopos); 
  servo5.write(servopos);
  delay(100); 
 
 }
 }
    
  // put your main code here, to run repeatedly:
}
