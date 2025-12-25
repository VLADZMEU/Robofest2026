void Start(int col, int ch) {   // 1 - красный   2 - синий  3 - зелёный  4 - жёлтый
  if (ch >= 1 or ch == -1) {

    MoveSync(50, 50, 90, 0, 1);
    Zahvat('z', 0);
    delay(500);
    MoveSync(160, 160, 270, 0, 0);
    PID_Enc(150, 0.3, 0.01, 3, 250, 0, 0);
    MoveSync(0, 100, 210, 0, 0);
    MoveSync(150, 38, 930, 0, 1);


    if (col == 1) { // 1 - красный
      MoveSync(110, 110, 100, 0, 0);
      Zahvat('p', 0);
      MoveSync(110, 110, 80, 0, 0);
      Turn(2, 100, 1);
      MoveSync(120, 120, 240, 0, 0);
      Zahvat('z', 1);
      MoveSync(120, 120, 400, 0, 1);
      Zahvat('z', 0);
    }


    if (col == 4) { // 4 - жёлтый
      MoveSync(110, 110, 370, 0, 0);
      Zahvat('p', 0);
      MoveSync(110, 110, 80, 0, 0);
      Turn(2, 100, 1);
      MoveSync(120, 120, 240, 0, 0);
      Zahvat('z', 1);
      MoveSync(120, 120, 400, 0, 1);
      Zahvat('z', 0);
    }
    if (col == 2) { // 2 - синий
      MoveSync(110, 110, 235, 0, 0);
      Zahvat('p', 0);
      MoveSync(110, 110, 120, 0, 0);
      Turn(2, 100, 1);
      MoveSync(120, 120, 100, 0, 0);
      Zahvat('z', 1);
      MoveSync(120, 120, 540, 0, 1);
      Zahvat('z', 0);
    }
    if (col == 3) { // 3 - зелёный
      MoveSync(110, 110, 235, 0, 0);
      Zahvat('p', 0);
      MoveSync(110, 110, 120, 0, 0);
      Turn(2, 100, 1);
      MoveSync(120, 120, 390, 0, 0);
      Zahvat('z', 1);
      MoveSync(120, 120, 215, 0, 1);
      Zahvat('z', 0);
    }
  }


  if (ch >= 2 or ch == -2) {
    Zahvat('p', 1);
    delay(200);
    MoveSync(100, 100, 280, 0, 1);
    Turn(2, 100, 0);
    if (col == 2 or col == 3) {
      MoveSync(120, 120, 700, 0, 1);
    }
    if (col == 1) {
      MoveSync(120, 120, 680, 0, 1);
    }
    if (col == 4) {
      MoveSync(120, 120, 740, 0, 1);
    }

    Zahvat('p', 0);
    delay(300);
    Turn(2, 100, 1);
    MoveSync(100, 100, 250, 0, 1);
    Turn(1, 80, 1);
  }
    if (ch >= 3 or ch == -3) {



      PID_Enc(250, 0.3, 0.01, 3, 850, 1, 2);
      Zahvat('z', 1);
      Turn(1, 100, 1);
      delay(200);
      MoveSync(-90, -90, 200, 0, 1);
      Zahvat('z', 0);
      delay(500);
      MoveSync(120, 120, 214, 0, 0);
      Turn(2, 100, 1);

      PID_Enc(250, 0.3, 0.01, 3, 500, 1, 2);
      Turn(2, 100, 1);
      Zahvat('z', 1);
      MoveSync(-100, -100, 100, 0, 0);
      MoveSync(100, 100, 100, 0, 1);
      Turn(3, 100, 1);

      Zahvat('p', 1);
      MoveSync(100, 100, 200, 0, 0);
      MoveSync(-100, -100, 200, 0, 1);

      delay(1000);

      MoveSync(-90, -90, 220, 0, 1);
      Zahvat('z', 0);
      delay(700);
      MoveSync(120, 120, 400, 0, 0);
      MoveSync(38, 150, 700, 0, 1);

    }







    //    PID_X(170, 0.5, 0.03, 5, 1, 0);
    //    MoveSync(80, -80, 150, 0, 1);
    //    Zahvat('p',1);
    //    delay(300);
    //    while (digitalRead(button1) == 1);
    //    MoveSync(80, 80, 80, 0, 1);
    //    while (digitalRead(button1) == 1);
    //    Zahvat('p',0);
    //    delay(500);
    //    MoveSync(0, 100, 100, 0, 1);
    //    Turn(2,100,0);
    ////    MoveSync(0, 180, 550, 0, 0);
    //    MoveSync(150, 0, 190, 0, 1);

 










}
