#include "fscmTFunctions.h"
#include "fscmT_HIDController.h"
void setup() {
  fscmTFSetupIO();
  fscmTFSetupJoystick(10);
  pinMode(8, OUTPUT);  digitalWrite(8, HIGH); //disable radio for HID only program
}
void loop() {
  fscmTFSetStatLed(ledConnID, CRGB(255, 255, 255));
  fscmTFReadInputs();
  fscmTFRunJoystick();
  fscmTFSetStatLed(ledConnID, CRGB(0, 0, 0));
  fscmTFSetStatLed(ledLeftID, CRGB(LKBVal, LTVal * 255, LBVal * 255));
  fscmTFSetStatLed(ledRightID, CRGB(RKBVal, RTVal * 255, RBVal * 255));
  fscmTFSetStatLed(ledTranBatStatID, CRGB(50, 0, 90));
  fscmTFSetStatLed(ledBatStatBotID, CRGB(50, 0, 90));
  fscmTFSetStatLed(ledBatStatMidID, CRGB(50, 0, 90));
  fscmTFSetStatLed(ledBatStatTopID, CRGB(50, 0, 90));
  fscmTFSetStatLed(ledTogLightID, CRGB(ETVal * 155, ETVal * 155, ETVal * 155));
  fscmTFSetStatLed(ledStatTwoID, CRGB(RJXBVal, 0, RJYBVal));
  fscmTFSetStatLed(ledStatOneID, CRGB(LJXBVal, 0, LJYBVal));
  delay(20);
}
void fscmTFSetupJoystick(int b) {
  Joystick.begin(false);
  Joystick.setXAxisRange(0, pow(2, b) - 1);
  Joystick.setYAxisRange(0, pow(2, b) - 1);
  Joystick.setRxAxisRange(0, pow(2, b) - 1);
  Joystick.setZAxisRange(0, pow(2, b) - 1);
  Joystick.setRyAxisRange(0, pow(2, b) - 1);
  Joystick.setRzAxisRange(0, pow(2, b) - 1);
}
void fscmTFRunJoystick() {
  Joystick.setXAxis(RJXIVal);
  Joystick.setYAxis(RJYIVal);
  Joystick.setZAxis(LJYIVal);
  Joystick.setRxAxis(LJXIVal);
  Joystick.setRyAxis(RKIVal);
  Joystick.setRzAxis(LKIVal);
  Joystick.setButton(0, RTVal);
  Joystick.setButton(1, LTVal);
  Joystick.setButton(2, ETVal);
  Joystick.setButton(3, RBVal);
  Joystick.setButton(4, LBVal);
  Joystick.sendState();
}
