float Mapping(int n) {
  float data = 0;
  if (n == 0)
    data = float(analogRead(d_f_r) - d_f_r_min) / (d_f_r_max - d_f_r_min) * 255;
  else if (n == 1)
    data = float(analogRead(d_f_l) - d_f_l_min) / (d_f_l_max - d_f_l_min) * 255;

  return 255 - constrain(data, 0, 255);

}
