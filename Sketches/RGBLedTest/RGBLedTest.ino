/*
#define RED 3
#define GREEN 5
#define BLUE 6
*/

#define BLUE 3
#define GREEN 5
#define RED 6

#define DELAY delay(10);

void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, HIGH);
}

void loop() {
  // EFFECT 1 - black to white
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED, i);
    analogWrite(BLUE, i);
    DELAY
  }

  // EFFECT 2 - R-255 G-0↑ B-255↓
  for (int i = 0; i <= 255; i++) {
    analogWrite(GREEN, i);
    analogWrite(BLUE, 255 - i);
    DELAY
  }

  // EFFECT 3 - R-255↓ G-255 B-0↑
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED, 255 - i);
    analogWrite(BLUE, i);
    DELAY
  }

  // EFFECT 4 - R-0↑ G-255↓ B-255
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED, i);
    analogWrite(GREEN, 255 - i);
    DELAY
  }

  // DIM TO BLACK
  for (int i = 0; i <= 255; i++) {
    analogWrite(BLUE, 255 - i);
    analogWrite(RED, 255 - i);
    DELAY
  }

  delay(3000);  // wait 3 sec and restart
}