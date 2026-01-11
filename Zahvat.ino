void Zahvat(int z,int pol) {
  if (z=='p'){
      if (pol == 0){
        myservo_p.write(168);
      }
      if (pol == 1){
        myservo_p.write(100);
      }
      if (pol == 2){
        myservo_p.write(0);
      }
      if (pol == 3){
        int d =100;
        while (d<170){
          myservo_p.write(d);
          d=d+4;
          delay(40);
        }
        
      }
     
  }
  if (z=='v'){
      if (pol == 1){
        myservo_v.write(100);
      }
      if (pol == 0){
        myservo_v.write(160);
      }
      if (pol == -1){
        int d =100;
        while (d<160){
          myservo_v.write(d);
          d=d+2;
          delay(20);
        }
        
      }
  }
  if (z=='z'){
     if (pol == 1){
        myservo_z.write(90);
      }
      if (pol == 0){
        myservo_z.write(177);
      }
      
  }
  if (z=='all'){
    myservo_z.write(10);
    myservo_p.write(15);
    myservo_v.write(100);
  }
 
}
