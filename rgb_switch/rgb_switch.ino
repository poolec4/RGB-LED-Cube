#include "Tlc5940.h"
#include "definitions.h"

#define LayerThree 17
#define LayerTwo 4
#define LayerOne 2
#define LayerFour 15
#define DELAY 750
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
  digitalWrite(LayerThree, LOW);
  digitalWrite(LayerFour, LOW);

  Serial.begin(9600);
 }

void loop() {
    Tlc.set(b_00,4095);
    Tlc.set(b_01,4095);
    Tlc.set(b_02,4095);
    Tlc.set(b_03,4095);
    Tlc.set(b_10,4095);
    Tlc.set(b_11,4095);
    Tlc.set(b_12,4095);
    Tlc.set(b_13,4095);
    Tlc.set(b_20,4095);
    Tlc.set(b_21,4095);
    Tlc.set(b_22,4095);
    Tlc.set(b_23,4095);
    Tlc.set(b_30,4095);
    Tlc.set(b_31,4095);
    Tlc.set(b_32,4095);
    Tlc.set(b_33,4095);
    Tlc.update();

    delay(DELAY);
    Tlc.clear();

    Tlc.set(r_00,4095);
    Tlc.set(r_01,4095);
    Tlc.set(r_02,4095);
    Tlc.set(r_03,4095);
    Tlc.set(r_10,4095);
    Tlc.set(r_11,4095);
    Tlc.set(r_12,4095);
    Tlc.set(r_13,4095);
    Tlc.set(r_20,4095);
    Tlc.set(r_21,4095);
    Tlc.set(r_22,4095);
    Tlc.set(r_23,4095);
    Tlc.set(r_30,4095);
    Tlc.set(r_31,4095);
    Tlc.set(r_32,4095);
    Tlc.set(r_33,4095);
    Tlc.update();

    delay(DELAY);
    Tlc.clear();

    Tlc.set(g_00,4095);
    Tlc.set(g_01,4095);
    Tlc.set(g_02,4095);
    Tlc.set(g_03,4095);
    Tlc.set(g_10,4095);
    Tlc.set(g_11,4095);
    Tlc.set(g_12,4095);
    Tlc.set(g_13,4095);
    Tlc.set(g_20,4095);
    Tlc.set(g_21,4095);
    Tlc.set(g_22,4095);
    Tlc.set(g_23,4095);
    Tlc.set(g_30,4095);
    Tlc.set(g_31,4095);
    Tlc.set(g_32,4095);
    Tlc.set(g_33,4095);
    Tlc.update();

    delay(DELAY);
    Tlc.clear();
}
