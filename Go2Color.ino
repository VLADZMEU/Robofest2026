void Turn2Color(int m1,int m2,int d_num,int i,int r,int s) { //i=1 белый(0) i=0 чёрный(100)
  float d =Mapping(d_num);
  float d1 = Mapping(0);
  float d2 = Mapping(1);
  boolean a =true;
  while (a){
    if ((i==1 and d>230)or(i==0 and d<20)){
      a = false;
    }
    else if ((i==2 and d1>230 and d2>230)or(i==3 and d1<20 and d2<20)){
      a = false;
    }
    Serial.print(d);
    Serial.print("----");
    Display();
    Go(m1,m2);
  }
  if (s==1){
    Go(0,0);
  }
  
}
  
