int buzzerPin = 5;  // The PWM pin connected to the buzzer

void setup()
{
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  // Play a tone at different loudness levels
  for (int i = 0; i <= 100; i += 10) {
    analogWrite(buzzerPin, i);  // Vary the duty cycle
    delay(500);                 // Delay between changes
  }
}
