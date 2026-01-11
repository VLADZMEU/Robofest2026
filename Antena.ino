void Antena() { 
  Zahvat('all',0);
  Zahvat('z',0);
  while (digitalRead(button1) == 1);
  delay(1000);
  MoveSync(150, 38, 700, 0, 0);
  MoveSync(120, 120, 100, 0, 0);
  Turn(2,100,0);

  PID_X(250, 0.5, 0.03, 5, 1, 0);
  MoveSync(250,250,100,0,0);
  PID_Enc(250, 0.3, 0.01, 3, 680, 0, 2);
  Turn(2,100,1);
  MoveSync(120,120,180,0,0);
  MoveSync(150, 38, 700, 0, 1);
  
 
  delay(400);
  Zahvat('v',1);
  Go(150,150);
  delay(600);
  
  MoveSync(-90,-90,100,0,1);
  Zahvat('v',-1);
  delay(300);
  Zahvat('v',1);

  MoveSync(-150,-150,1050,0,1);
  
  Zahvat('z',1);
  delay(200);
  MoveSync(100,100,100,0,0);
  MoveSync(150, 50, 720, 0, 1);
  
  
  MoveSync(120,120,100,0,0);
  
  Turn(1,100,1);
  PID_X(250, 0.5, 0.03, 5, 1, 0);
  MoveSync(250,250,100,0,0);
  PID_X(250, 0.5, 0.03, 5, 0, 2);
  Turn(1,100,1);
  MoveSync(120,120,100,0,0);
  MoveSync(38, 150, 700, 0, 0);
  MoveSync(-120,-120,300,0,1);
  
  
  
  
}
