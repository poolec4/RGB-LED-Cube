#include "Tlc5940.h"

#define LayerThree 17
#define LayerTwo 4
#define LayerOne 2
#define LayerFour 15

bool print = true;

int i=0;

void setup() {
  Tlc.init(0);
  pinMode(LayerOne, OUTPUT);
  pinMode(LayerTwo, OUTPUT);
  pinMode(LayerThree, OUTPUT);
  pinMode(LayerFour, OUTPUT);

  digitalWrite(LayerOne, LOW);
  digitalWrite(LayerTwo, LOW);
  digitalWrite(LayerThree, HIGH);
  digitalWrite(LayerFour, LOW);

  Serial.begin(9600);
 }

void loop() {
    
    Tlc.set(i, 200);
    Tlc.update();

    char inchar = Serial.read();
    if(inchar == ' ')
     {  i++;
     Serial.println(i);
       Tlc.clear();
    Tlc.update();
      }
  
   if(i==48)
    i=0;  
}
