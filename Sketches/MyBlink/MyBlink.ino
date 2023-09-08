#define DELAY delay(1000);

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  DELAY;
  digitalWrite(LED_BUILTIN, HIGH);
  DELAY;
}
