#include <Cycles16.h>

void loop() {
  uint32_t delayDuration = 10; // ms
  uint32_t cyclesAtStart = Cycles16::now();
  delay(delayDuration);
  uint32_t elapsedCycles = Cycles16::elapsedCyclesTillNow(cyclesAtStart);
  Serial.print("Elapsed cycles for ");
  Serial.print(delayDuration);
  Serial.print(" ms: ");
  Serial.println(elapsedCycles);
}
