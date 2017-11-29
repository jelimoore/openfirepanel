#include <Password.h>
#include <LiquidCrystal.h>

//////////////////////////////////////////////////
// Config file
//////////////////////////////////////////////////

/*
 * General config
 */
 
String panelName = "OpenFirePanel";
String customMessage = "#firepanel";
Password elevatePasscode = Password("1234");

//////////////////////////////////////////////////

/*
 * NAC config
 * 
 * in my case 21 is strobes, 22 is horns
*/

int numNacs = 2;
int nacs[] = {21,22};
int silencableNacs[] = {0,1}; // if i hit silence button it will silence the horns but not the strobes

/*
 * WIP, doesn't have any function yet

// 1 = continuous
// 2 = code3 temporal
// any other value = march time with that number as millisecond delay of time between on/off
// different types of alarms can have different codings
// e.g. sup alarm can be march time but fire alarm can be code3

// same order as above
int nacFireCoding[] = [1,2];
int nacWeatherCoding[] = [1,250]; // march time, 250ms on, 250ms off, 250ms on, etc...
int nacSupCoding[] = [1,1];

*/

//////////////////////////////////////////////////

/*
 * Zone config
 */

int numZones = 3;
int zonePins[] = {30,31,32};

// 1 = smoke
// 2 = co [generates fire alarm]
// 3 = pull station
// 4 = sup alarm [general]
// 5 = water [generates sup alarm]
// 6 = weather [generates weather alarm]
// 7 = hazard [generates sup alarm]
// 8 = remote reset
// 9 = remote drill (constant; turn switch back to normal to end drill)
// 10 = remote drill (momentary; need to reset panel after drill is over)
// 11 = remote ack
 
int zoneType[] = {3,5,6};
int zoneDelay[] = {0,0,0}; // there is a 1.5 second delay by default; this is extra for smoke alarms and other "fluttery" sensors


