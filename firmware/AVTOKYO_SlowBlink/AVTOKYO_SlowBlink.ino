// AVTOKYO Rev K/L, ATtiny402, megaTinyCore, internal 5 MHz, UPDI enabled.
// LED cathodes: D1 -> PA1 (physical pin 4), D2 -> PA2 (pin 5).
// Both jumpers: CUT 1-2, bridge 2-3. LOW lights the LEDs.
#include <Arduino.h>
#if !defined(__AVR_ATtiny402__)
#error "Select ATtiny402 in megaTinyCore"
#endif
constexpr uint8_t LED1 = PIN_PA1;
constexpr uint8_t LED2 = PIN_PA2;
constexpr unsigned long ON_MS = 1000;
constexpr unsigned long OFF_MS = 2000;
void setup() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  // PA0 remains UPDI. All other optional GPIO remain inputs.
}
void loop() {
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  delay(ON_MS);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  delay(OFF_MS);
}
