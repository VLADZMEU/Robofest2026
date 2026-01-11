void Kubic2() {
  Zahvat('all', 0);
  while (digitalRead(button1) == 1);
  delay(1000);
  MoveSync(140, 140, 1050, 0, 1);
  Zahvat('v', 0);
  delay(100);


  //Сброс кубиков 1

  MoveSync(-200, -200, 1200, 0, 1);

}
