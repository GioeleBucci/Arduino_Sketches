#define BUZZER 12

int step = 1000;  // step up and down

// The number of times the sine wave goes through a complete cycle in the
// space of 1 second (Hz)
#define MAX_FREQUENCY_HZ 30

long halfPeriodStartTime;
float halfPeriodTimeMs = (1 / MAX_FREQUENCY_HZ) * 500;
bool isRising = true;

void setup()
{
  noTone(BUZZER);
  halfPeriodStartTime = millis();
}

void loop()
{
  long elapsed = millis() - halfPeriodStartTime;

  if (elapsed > halfPeriodTimeMs) {
    isRising = !isRising;  // change direction
    halfPeriodStartTime = millis();
  }

  noTone(BUZZER);  // stop previous sound

  if (isRising) {
    /* we take the max frequency and divide it by 2.
    If the wave is rising we sum to it a percentage of itself (max frequency)
    so the maximum obtainable is max frequency (peak) and the minimum is
    max frequency / 2.
    */
    int frequency = MAX_FREQUENCY_HZ / 2 +
                    (MAX_FREQUENCY_HZ / 2 * (elapsed / halfPeriodTimeMs));
    tone(BUZZER, frequency);
  }
  else {
    int frequency = MAX_FREQUENCY_HZ / 2 -
                    (MAX_FREQUENCY_HZ / 2 * (elapsed / halfPeriodTimeMs));
    tone(BUZZER, frequency);
  }
}