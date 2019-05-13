#include "FastLED.h"
#define LJXPin A1
#define LJYPin A2
#define RJXPin A0
#define RJYPin A3
#define LKPin A5
#define RKPin A4
#define LEDPin 13
#define RTPin 11
#define LTPin 12
#define ETPin 10
#define TBATMPin 9
#define RBPin 5
#define LBPin 6
CRGB ledCA[10];
#define ledStatOneID 5
#define ledStatTwoID 4
#define ledLeftID 9
#define ledRightID 8
#define ledConnID 6
#define ledBatStatBotID 3
#define ledBatStatMidID 2
#define ledBatStatTopID 1
#define ledTranBatStatID 0
#define ledTogLightID 7
byte LJXBVal = 0;
byte LJYBVal = 0;
byte RJXBVal = 0;
byte RJYBVal = 0;
byte LKBVal = 0;
byte RKBVal = 0;

int LJXIVal = 0;
int LJYIVal = 0;
int RJXIVal = 0;
int RJYIVal = 0;
int LKIVal = 0;
int RKIVal = 0;
boolean RTVal = false;
boolean LTVal = false;
boolean ETVal = false;
boolean RBVal = false;
boolean LBVal = false;
float TBatVVal = 0.000;
