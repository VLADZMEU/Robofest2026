//Пины датчиков линии
#define d_f_r A2
#define d_f_l A0
//#define d_b_r A2
//#define d_b_l A3
#include <Servo.h>
Servo myservo_p;
Servo myservo_v;
Servo myservo_z;

//Кнопка
#define button1 47
#define button2 46
#define button3 44
#define button4 42

//Сервомоторы
#define zah_r 2
#define zah_l 3
#define zah 4
#define pod 5

//Моторы
#define pwm_l 3
#define in1_l 7
#define in2_l 5
#define pwm_r 10
#define in1_r 9
#define in2_r 11

//RGB
#define pin_R 5
#define pin_G 5
#define pin_B 5

#define zahv_p 4
#define zahv_v 6
#define zahv_z 8

int color = 0 ;
int dist = 0;

//Калибровка датчиков
float d_f_r_min = 34; //передний правый 0
float d_f_r_max = 480;
float d_f_l_min = 32; //передний левый 1
float d_f_l_max = 483;
//float d_b_r_min = 0; //задний правый 2
//float d_b_r_max = 0;
//float d_b_l_min = 0; //задний левый 3
//float d_b_l_max = 0;


//калибровка дотчика цвета
float Red_W = 0;
float Green_W = 0;
float Blue_W = 0;

volatile long encL = 0;
volatile long encR = 0;
void enc1() {
  encL++;
}
void enc2() {
  encR++;
}
void setup() {
  pinMode(pwm_l, OUTPUT);
  pinMode(in1_l, OUTPUT);
  pinMode(in2_l, OUTPUT);
  pinMode(pwm_r, OUTPUT);
  pinMode(in1_r, OUTPUT);
  pinMode(in2_r, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  attachInterrupt(4, enc1, FALLING);
  attachInterrupt(5, enc2, FALLING);
  pinMode(zahv_p, INPUT);
  pinMode(zahv_v, INPUT);
  pinMode(zahv_z, INPUT);

  myservo_p.attach(zahv_p);
  myservo_v.attach(zahv_v);
  myservo_z.attach(zahv_z);

  Serial.begin(9600);
}
void loop() {   //4.2 cm == 100gr
  Display();
  Zahvat('all', 0);
  while (digitalRead(button1) == 1);
  delay(1000);





  //  Go(100, 100);
  //  while (digitalRead(button1) == 1);
  //  MoveSync(100, 100, 1000, 0, 1);
  //  while (digitalRead(button1) == 1);
  //  PID_Enc(200, 0.5, 0.03, 5, 2000, 1, 1);
  //  while (digitalRead(button1) == 1);
  //  PID_X(200, 0.5, 0.03, 5, 1, 2);
  // Go2Color(50,0,1,0,0,1);
//  Start(3,3);
//  Antena();
  Kubic1(1,2);





}
