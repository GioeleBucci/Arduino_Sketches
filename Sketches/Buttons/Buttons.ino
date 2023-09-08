#define LED 5
#define BUTTON_A 9  // left button
#define BUTTON_B 8  // right button

void setup() {

  pinMode(LED, OUTPUT);

  /* By setting the pin to INPUT_PULLUP, when the button is NOT pressed, the pin
   * is held at a known and stable HIGH state. When the button is pressed, it
   * connects the pin to ground (LOW): that can be detected as a button press.*/
  pinMode(BUTTON_A, INPUT_PULLUP);
  pinMode(BUTTON_B, INPUT_PULLUP);
}

void loop() {

  if (digitalRead(BUTTON_A) == LOW) {
    // switch on the led if the A button if pressed
    digitalWrite(LED, HIGH);
  }

  if (digitalRead(BUTTON_B) == LOW) {
    // switch on the led if the B button if pressed
    digitalWrite(LED, LOW);
  }
}
