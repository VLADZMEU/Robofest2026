void Turn(int n,int sp,int s) {
  int enc = 0;  
  if (abs(n) == 1) { //лево
    MoveSync(sp,-sp,270,0,s);

  }
  else if (abs(n) == 2) { //Право
    MoveSync(-sp,sp,270,0,s);
  }
  else if (abs(n) == 3){ //разворот
    MoveSync(-sp,sp,545,0,s);
  }

}
