void Display() {

  int d1 = analogRead(A0);
  int d2 = analogRead(A2);
  Serial.print("D1=");
  Serial.print(d1);
  Serial.print(" D2=");
  Serial.print(d2);
  Serial.print(" encL=");
  Serial.print(encL);
  Serial.print(" encR=");
  Serial.print(encR);
  Serial.print(" bt1=");
  Serial.print(digitalRead(button1));
  Serial.print(" bt2=");
  Serial.print(digitalRead(button2));
  Serial.print(" bt3=");
  Serial.print(digitalRead(button3));
  Serial.print(" bt4=");
  Serial.print(digitalRead(button4));
  Serial.print(" d1= ");
  int dd1 = Mapping(0);
  Serial.print(dd1);
  int dd2 = Mapping(1);
  Serial.print(" d2= ");
  Serial.println(dd2);

}
