void Antena() { 
  Zahvat('all',0);
  Zahvat('z',0);
  while (digitalRead(button1) == 1);
  MoveSync(150, 38, 700, 0, 0);
  MoveSync(120, 120, 100, 0, 0);
  Turn(2,100,0);

  PID_X(200, 0.5, 0.03, 5, 1, 2);
  Turn(2,100,1);
  delay(100);
  MoveSync(100,100,160,0,0);
  MoveSync(150, 38, 700, 0, 1);
  delay(200);
  Zahvat('z',1);
  MoveSync(120,120,850,0,0);
  Zahvat('z',0);
  MoveSync(90,90,60,0,1);
 
  delay(300);
  
  Zahvat('v',-1);
  delay(800);
  Zahvat('v',1);
  Go(150,150);
  delay(800);
  
  MoveSync(-90,-90,100,0,1);
  MoveSync(-120,-120,200,0,0);
  MoveSync(-150, -38, 730, 0, 1);
  MoveSync(-100,-100,150,0,0);
  Turn(2,100,1);
  PID_X(200, 0.5, 0.03, 5, 1, 0);
  MoveSync(220,220,100,0,0);
  PID_X(250, 0.5, 0.03, 5, 0, 2);
  Turn(1,100,1);
  MoveSync(100,100,100,0,0);
  MoveSync(38, 150, 700, 0, 0);
  MoveSync(-100,-100,300,0,1);
  
  
  
  
}
