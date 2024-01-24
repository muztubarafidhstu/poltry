int cheak() {
  if (digitalRead(SWITCH_PIN_1) == HIGH) {
    z = 1;
  }
  if (digitalRead(SWITCH_PIN_2) == HIGH) {
    z = 2;
  }
  if (digitalRead(SWITCH_PIN_3) == HIGH) {
    z = 3;
  }
  if (digitalRead(SWITCH_PIN_4) == HIGH) {
    z = 4;
  }
  if (digitalRead(SWITCH_PIN_5) == HIGH) {
    z = 5;
  }
  if (digitalRead(SWITCH_PIN_6) == HIGH) {
    z = 6;
  }
}