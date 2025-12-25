void PID_X(float sp, float kp, float ki, float kd, int raz, int stop) {
  float speed = abs(sp);
  float kp1 = kp;
  float kd1 = kd;
  float ki1 = ki;
  long timer = millis();
  if (raz == 1) {
    kp1 = kp / 2;
    kd1 = kd / 2;
    ki1 = ki / 2;
  }
  encL = 0;
  encR = 0;
  float d1 = 255;
  float d2 = 255;
  float error[10] = {0};
  int error_i = 0;
  float sum = 0;

  while (d1 > 40 or d2 > 40) {

    d1 = Mapping(0);
    d2 = Mapping(1);

    float e = d1 - d2;
    if (abs(e) < 2)
      e = 0;

    error[error_i] = e;
    error_i ++;
    if (error_i > 9)
      error_i = 0;

    sum = sum + e - error[error_i];

    float Up = e * kp1;
    float Ud = (e  - error[error_i]) * kd1;
    float Ui = sum * ki1;
    float U = Up + Ui + Ud;

    if (raz == 1) {
      float enc = (encL + encR) / 2;
      speed = 40 + (abs(sp) - 40) * (timer + 2000) / millis();
      if (speed >= abs(sp)) {
        kp1 = kp;
        kd1 = kd;
        ki1 = ki;
        raz = 0;
        speed = abs(sp);
      }
    }




    float m1 = speed - U;
    float m2 = speed + U;

    if (m1 < 0)
      m1 = 0;
    if (m2 < 0)
      m2 = 0;

    Go(m1 , m2 );
  }

  if (stop == 1) { // хард стоп
    Go(-255 * sp / abs(sp), -255 * sp / abs(sp));
    delay(abs(sp) / 255 * 40);
    Go(0, 0);
  }
  else if (stop == 2) { //доехать колесами до перекрестка
    MoveSync(50 * sp / abs(sp), 50 * sp / abs(sp), 130, 0, 1);
  }


}
