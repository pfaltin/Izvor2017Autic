
#include <NewPing.h>

#define MAX_DISTANCE 100 // najveća mjerena udaljenost 
NewPing sonar1(12, 11, MAX_DISTANCE); // trig, echo, dist
NewPing sonar2(10, 9, MAX_DISTANCE); // trig, echo, dist
int udaljenost1, udaljenost2;


void setup() {
  Serial.begin(9600);
    pinMode(6, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(3, OUTPUT);
}

void loop() {
  Serial.print("Ping1: ");
  udaljenost1=sonar1.ping_cm();
    if (udaljenost1 < 15) {
    digitalWrite(4, HIGH);
    }
    else{
      digitalWrite(4, LOW);
      }
if (udaljenost1 < 7) {
    digitalWrite(3, HIGH);
    } 
     else{
     digitalWrite(3, LOW);
     } 
  Serial.print(udaljenost1); // 
  Serial.print("cm");
  
    delay(50);  // 
  
  Serial.print("\tPing2: ");
  udaljenost2=sonar2.ping_cm();
  if (udaljenost2 < 15) {
    digitalWrite(6, HIGH);
    }
    else{
      digitalWrite(6, LOW);
      }
if (udaljenost2 < 7) {
    digitalWrite(5, HIGH);
    } 
     else{
     digitalWrite(5, LOW);
     } 
  Serial.print(udaljenost2); // 
  Serial.println("cm");
    delay(50);  // 
  
}
