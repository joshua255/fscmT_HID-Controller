void fscmTFSetupIO() {
  pinMode(LJXPin, INPUT);
  pinMode(LJYPin, INPUT);
  pinMode(RJXPin, INPUT);
  pinMode(RJYPin, INPUT);
  pinMode(LKPin, INPUT);
  pinMode(RKPin, INPUT);
  pinMode(RTPin, INPUT_PULLUP);
  pinMode(LTPin, INPUT_PULLUP);
  pinMode(ETPin, INPUT_PULLUP);
  pinMode(RBPin, INPUT_PULLUP);
  pinMode(LBPin, INPUT_PULLUP);
  pinMode(TBATMPin, INPUT);
  FastLED.addLeds<WS2812, LEDPin, RGB>(ledCA, 10);
  FastLED.show();
}
void fscmTFReadInputs() {
  LJXBVal = map(analogRead(LJXPin), 0, 1023, 0, 255);
  LJYBVal = map(analogRead(LJYPin), 0, 1023, 0, 255);
  RJXBVal = map(analogRead(RJXPin), 1023, 0, 0, 255);
  RJYBVal = map(analogRead(RJYPin), 1023, 0, 0, 255);
  LKBVal = map(analogRead(LKPin), 0, 1023, 0, 255);
  RKBVal = map(analogRead(RKPin), 0, 1023, 0, 255);
  LJXIVal = analogRead(LJXPin);
  LJYIVal = analogRead(LJYPin);
  RJXIVal = 1023 - analogRead(RJXPin);
  RJYIVal = 1023 - analogRead(RJYPin);
  LKIVal = analogRead(LKPin);
  RKIVal = analogRead(RKPin);
  RTVal = (digitalRead(RTPin) == LOW);
  LTVal = (digitalRead(LTPin) == LOW);
  ETVal = (digitalRead(ETPin) == LOW);
  RBVal = (digitalRead(RBPin) == LOW);
  LBVal = (digitalRead(LBPin) == LOW);

  TBatVVal = analogRead(TBATMPin) * 2 * 3.3 / 1024;
}
void fscmTFSetStatLed(int num, CRGB c) {
  ledCA[num] = c;
  FastLED.show();
}


