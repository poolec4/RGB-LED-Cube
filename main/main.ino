#include "Tlc5940.h"
#include "definitions.h"
#include "functions.h"

void setup() {
    Tlc.init(0);
    pinMode(l_0, OUTPUT);
    pinMode(l_1, OUTPUT);
    pinMode(l_2, OUTPUT);
    pinMode(l_3, OUTPUT);

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            setState(i,j,0,4095,0,0);
            setState(i,j,1,0,4095,0);
            setState(i,j,2,0,0,4095);
            setState(i,j,3,4095,4095,1800);
        }
    }
 }

void loop() {

    updateCube();

}
