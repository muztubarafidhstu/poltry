int rotational() {
  digitalWrite(dir1, LOW);
  digitalWrite(ena1, LOW);
  digitalWrite(pul1, HIGH);
  delayMicroseconds(200);
  digitalWrite(pul1, LOW);
  delayMicroseconds(200);
}