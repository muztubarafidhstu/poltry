//1 for rotational motor
int pul1 = 8;
int dir1 = 9;
int ena1 = 10;
//2 for food motor
int pul2 = 11;
int dir2 = 13;
int ena2 = 12;
//limit switch
#define SWITCH_PIN_1 2
#define SWITCH_PIN_2 3
#define SWITCH_PIN_3 4
#define SWITCH_PIN_4 5
#define SWITCH_PIN_5 6
#define SWITCH_PIN_6 7
// valirable
int distance, d1, d2, d3, d4, d5, d6;
int presure, p1, p2, p3, p4, p5, p6;
int z;  // for cheak which switch pressed
int d;  // for cheak which distance is close
int p;  // for cheak which food empty
int signal;
int threshold;

void setup() {
  Serial.begin(9600);
  //switch
  pinMode(SWITCH_PIN_1, INPUT_PULLUP);
  pinMode(SWITCH_PIN_2, INPUT_PULLUP);
  pinMode(SWITCH_PIN_3, INPUT_PULLUP);
  pinMode(SWITCH_PIN_4, INPUT_PULLUP);
  pinMode(SWITCH_PIN_5, INPUT_PULLUP);
  pinMode(SWITCH_PIN_6, INPUT_PULLUP);
  // motor
  pinMode(pul1, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(ena1, OUTPUT);
  pinMode(pul2, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(ena2, OUTPUT);
}

void loop() {
  cheak();// switch cheak 
  dis(); // distance 
  pre(); //presure 
  move();

  switch (sing) {
    case 1:
      do {
        rotational motor()
        cheak();
      } while (z != 1);
      break;

    case 2:
      do {
        move();
        cheak();
      } while (z != 2);
      break;

    case 3:
      do {
        move();
        cheak();
      } while (z != 3);
      break;

    case 4:
      do {
        move();
        cheak();
      } while (z != 4);
      break;

    case 5:
      do {
        move();
        cheak();
      } while (z != 5);
      break;

    case 6:
      do {
        move();
        cheak();
      } while (z != 6);
      break;

    case 7:
      do {
        move2();
        cheak2();
      } while (z != 6);
      break;
  }
}




