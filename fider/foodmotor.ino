int foodmotor() {
  for (int i = 0; i < 50; i++) {
    digitalWrite(dir2, LOW);
    digitalWrite(ena2, LOW);
    digitalWrite(pul2, HIGH);
    delayMicroseconds(200);
    digitalWrite(pul2, LOW);
    delayMicroseconds(200);
  }
  for (int i = 0; i < 10; i++) {
    digitalWrite(dir2, HIGH);
    digitalWrite(ena2, LOW);
    digitalWrite(pul2, HIGH);
    delayMicroseconds(200);
    digitalWrite(pul2, LOW);
    delayMicroseconds(200);
  }
}