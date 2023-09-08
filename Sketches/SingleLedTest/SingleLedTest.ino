#define DELAY_TIME 10  // fading time between colors
#define LED_PIN 5      // use pin 5 -> ~5V

void setup() {
  pinMode(LED_PIN, OUTPUT);  // use pin 5 -> ~5V
  digitalWrite(LED_PIN, LOW);
}

// main loop
void loop() {

  // gradually turn on
  for (int i = 0; i <= 255; i++) {
    analogWrite(LED_PIN, i);
    delay(DELAY_TIME);
  }

  // gradually turn off
  for (int i = 255; i >= 0; i--) {
    analogWrite(LED_PIN, i);
    delay(DELAY_TIME);
  }

  delay(3000);
}
