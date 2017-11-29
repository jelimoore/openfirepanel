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

  pinMode(
}

void loop() {
  // put your main code here, to run repeatedly:

}
