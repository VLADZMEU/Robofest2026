void Go(float m1, float m2) {
  m1 = constrain(m1, -255, 255);
  m2 = constrain(m2, -255, 255);
  if (m1 < 0) {
    digitalWrite(in1_l, 0);
    digitalWrite(in2_l, 1);
  }
  else {
    digitalWrite(in1_l, 1);
    digitalWrite(in2_l, 0);
  }
  if (m2 < 0) {
    digitalWrite(in1_r, 0);
    digitalWrite(in2_r, 1);
  }
  else {
    digitalWrite(in1_r, 1);
    digitalWrite(in2_r, 0);
  }
  analogWrite(pwm_l, abs(m1));
  analogWrite(pwm_r, abs(m2));
}
