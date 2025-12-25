void MoveSync(float m1, float m2, int enc, int r, int s) {
  if (r == 1)
    delay(200);
  float e = 0;
  float eold = 0;
  encL = 0;
  encR = 0;
  float deg = (encL + encR) / 2;
  while ( deg < enc) {
    if (m1 != 0 and m2 != 0) {
      if (abs(m1) > abs(m2)) {
        deg = encL;
        e = encL - encR * abs(m1) / abs(m2);
      }
      else {
        deg = encR;
        e = encL * abs(m2) / abs(m1) - encR ;
      }
      float u = e * 2 + (e - eold) * 10;
      float m11 = m1 - u * m1 / abs(m1);
      float m22 = m2 + u * m2 / abs(m2);

      if (m1 > 0) {
        if (m11 < 0) m11 = 0;

      }
      else {
        if (m11 > 0) m11 = 0;
      }
      if (m2 > 0) {
        if (m22 < 0) m22 = 0;

      }
      else {
        if (m22 > 0) m22 = 0;
      }

      Go(m11, m22);
      eold = e;
    }
    else {
      Go(m1, m2);
      if (m1 != 0) deg = encL;
      if (m2 != 0) deg = encR;
    }
  }

  if (s == 1) {
    Go(-255 * m1 / abs(m1), -255 * m2 / abs(m2));
    delay(((abs(m1) + abs(m2)) / 2) / 255 * 40);
    Go(0, 0);
  }
}
