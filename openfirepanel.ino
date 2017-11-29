/*
 * OpenFirePanel
 * 
 * Written by Jack Moore
 * 
 * How to use:
 * 1. Modify settings.h with your options
 * 2. Compile and upload
 * 
 * REVISIONS
 * 11-28-17: Starting to play with some basic code
 * 
 */

#include "settings.h"

String sysver = "0.1a";

LiquidCrystal lcd(53,52,51,50,49,48);

int silenced = 0;

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {21,23,25,27};
byte colPins[COLS] = {22,24,26,28};

void setup() {
  lcd.begin(20,4);
  lcd.print("OpenFirePanel");
  lcd.setCursor(0,1);
  lcd.print("Ver: ");
  lcd.setCursor(5,1);
  lcd.print(sysver);
  lcd.setCursor(0,2);
  lcd.print("Booting...");
  delay(1000);

  for (int i=0; i<numNacs-1; i++) {
    pinMode(nacs[i], OUTPUT);
  }

  for (int i=0; i<numZones-1; i++) {
    pinMode(zones[i], INPUT);
  }

  lcd.clear();
  lcd.setCursor(0,0);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void silence() {
  for (int i=0; i<numNacs-1; i++) {
    if (silencableNacs[i] == 1) {
      digitalWrite(i, LOW);
      silenced = 1;
    }
  }
}

void reset() {
  
}

