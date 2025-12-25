void Kubic1(int col, int ch) { // 1 - Жёлтый   2 - синий  3 - зелёный  4 - красный
  Zahvat('z',0);
  while (digitalRead(button1) == 1);
  if (ch >= 1 or ch == -1) {
    MoveSync(140, 140, 1050, 0, 1);
    Zahvat('v', 0);
    delay(200);
    MoveSync(-80, -80, 50, 0, 0);
    Zahvat('p', 0);
    delay(100);


    //Сброс кубиков 1

    MoveSync(-100, -100, 220, 0, 0);
    Zahvat('v', 1);
    Zahvat('z', 1);
    Turn(2, 100, 1);
    MoveSync(80, 80, 80, 0, 1);
    Zahvat('z', 0);
    delay(200);
    PID_X(120, 0.5, 0.03, 5, 0, 2);
    Turn(1, 100, 0);
    PID_X(140, 0.4, 0.03, 5, 1, 2);
    Turn(2, 100, 1);
    Zahvat('p', 1);
    delay(200);
    MoveSync(100, 100, 200, 0, 0);

    if (col == 1) { // 1 - жёлтый
      MoveSync(100, 100, 250, 0, 0);

      MoveSync(100, 100, 100, 0, 0);
      Turn(1, 100, 1);
      Zahvat('p', 0);
      MoveSync(120, 120, 270, 0, 0);
      Zahvat('z', 1);
      MoveSync(120, 130, 370, 0, 1);
      Zahvat('z', 0);
    }


    if (col == 4) { // 4 - красный
      MoveSync(100, 100, 450, 0, 0);

      MoveSync(110, 110, 100, 0, 0);
      Turn(1, 100, 1);
      Zahvat('p', 0);
      MoveSync(120, 120, 270, 0, 0);
      Zahvat('z', 1);
      MoveSync(120, 120, 370, 0, 1);
      Zahvat('z', 0);
    }
    if (col == 2) { // 2 - синий
      MoveSync(100, 110, 350, 0, 0);
      Zahvat('p', 0);
      MoveSync(110, 110, 120, 0, 0);
      Turn(1, 100, 1);
      MoveSync(120, 120, 100, 0, 0);
      Zahvat('z', 1);
      MoveSync(120, 120, 540, 0, 1);
      Zahvat('z', 0);
    }
    if (col == 3) { // 3 - зелёный
      MoveSync(100, 110, 350, 0, 0);
      Zahvat('p', 0);
      MoveSync(110, 110, 120, 0, 0);
      Turn(1, 100, 1);
      MoveSync(120, 120, 390, 0, 0);
      Zahvat('z', 1);
      MoveSync(120, 120, 215, 0, 1);
      Zahvat('z', 0);
    }
  }


  if (ch >= 2 or ch == -2) {
    Zahvat('p', 1);
    MoveSync(120, 120, 180, 0, 1);
    MoveSync(-120, -120, 160, 0, 0);
    Zahvat('z', 1);

    Turn(3, 100, 1);
    MoveSync(-120, -120, 260, 0, 0);

    
    if (col ==1){
      MoveSync(-150, -38, 650, 0, 0);
      MoveSync(-100, -100, 100, 0, 1);
      myservo_p.write(15);
      delay(500);
      MoveSync(80, 80, 600, 0, 1);
    }
    if (col ==4){
      MoveSync(-150, -38, 700, 0, 0);
      myservo_p.write(15);
      delay(500);
      MoveSync(80, 80, 500, 0, 1);
      
    }
    if (col ==2 or col ==3){
      MoveSync(-150, -38, 700, 0, 0);
      MoveSync(-100, -100, 50, 0, 1);
      myservo_p.write(15);
      delay(500);
      MoveSync(80, 80, 500, 0, 1);
    }
    Go(60,60);
    delay(1000);


    
    Zahvat('z', 0);
    Zahvat('v', 0);
    MoveSync(-60, -60, 100, 0, 1);
    Zahvat('z', 1);
    Zahvat('v', 1);
    delay(300);

    MoveSync(-120, -120, 250, 0, 1);
    Turn(1, 100, 0);
    MoveSync(120, 120, 450, 0, 1);
    Turn(1, 100, 0);
    PID_X(140, 0.4, 0.04, 6, 1, 2);

  }
  if (ch >= 3 or ch == -3) {
    PID_Enc(250, 0.3, 0.01, 3, 870, 1, 2);
    Zahvat('p', 1);
    Turn(2, 100, 1);
    delay(200);
    MoveSync(90, 90, 200, 0, 1);
    Zahvat('p', 0);
    delay(500);
    MoveSync(-120, -120, 214, 0, 0);
    Turn(1, 100, 1);

    PID_Enc(250, 0.3, 0.01, 3, 430, 1, 2);
    Zahvat('p', 1);
    Turn(2, 100, 1);
    delay(200);
    MoveSync(90, 90, 200, 0, 1);
    Zahvat('p', 0);
    delay(500);
    MoveSync(-120, -120, 370, 0, 0);

    MoveSync(-150, -38, 700, 0, 1);

  }



}
