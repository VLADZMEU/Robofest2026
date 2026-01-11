void ViborColor(){
    while (digitalRead(button1) == 1){
      myOLED.print("Timer:", 10,40);
    if (digitalRead(button2) == 0){
      col1+=1;
      if (col1 >=5){
        col1=1;
      }
      delay(200);
    }
    if (digitalRead(button3) == 0){
      
      col2+=1;
      if (col2 >=5){
        col2=1;
      }
      delay(200);
    }
    if(col1==0){
      myOLED.print("-", 45,2);
    }
    if(col2==0){
      myOLED.print("-", 55,2);
    }
    if(col1==1){
      myOLED.print("R", 45,2);
    }
    if(col1==2){
      myOLED.print("B", 45,2);
    }
    if(col1==3){
      myOLED.print("G", 45,2);
    }
    if(col1==4){
      myOLED.print("Y", 45,2);
    }
    if(col2==1){
      myOLED.print("Y", 55,2);
    }
    if(col2==2){
      myOLED.print("B", 55,2);
    }
    if(col2==3){
      myOLED.print("G", 55,2);
    }
    if(col2==4){
      myOLED.print("R", 55,2);
    }
    myOLED.print("Collor", 2,2);
    myOLED.update();
  }
  
  static uint32_t tmr;
}
