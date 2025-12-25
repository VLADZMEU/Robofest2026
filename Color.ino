void Color() {
  int n = 0;
  int color_old = 0;
  while (n < 10) {
    float Red = 0;
    float Green = 0;
    float Blue = 0;

    Red = Red / Red_W * 255;
    Green = Green / Green_W * 255;
    Blue = Blue / Blue_W * 255;

    float MIN = min(Red, min(Green, Blue));
    float MAX = max(Red, max(Green, Blue));
    float s = 0;
    if (MAX > 0)
      s = 1 - MIN / (MAX);
    if (s < 0.2)
      color = 1;
    else {
      if (Red > Green and Red > Blue) {
        Red = Red / (Red + Green) * 100;
        if (Red > 75)
          color = 5;
        else
          color = 4;
      }
      else if (Blue > Green) {
        color = 2;
      }
      else {
        color = 3;
      }
    }

    if (color == color_old)
      n++;
    else n = 0;
    color_old = color;
  }
}
