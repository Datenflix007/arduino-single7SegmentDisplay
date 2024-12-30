int DELAY = 1000;
uint8_t mode = HIGH;

int sign_bottom = 13;
int sign_leftDown = 12;
int sign_rightDown = 11;
int sign_dot = 10;
int sign_rightUp = 9;
int sign_top = 8;
int sign_leftUp = 6;
int sign_middle = 5;

void printChar(char a){
  if(a == 'A' || a == 'a'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_middle, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_top, HIGH);
  } else if(a == 'B' || a == 'b'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_middle, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_top, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == 'C' || a == 'c'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_top, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == 'D' || a == 'd'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_top, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == 'E' || a == 'e'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_middle, HIGH);
    digitalWrite(sign_top, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == 'F' || a == 'f'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_middle, HIGH);
    digitalWrite(sign_top, HIGH);
  } else if(a == 'G' || a == 'g'){
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_top, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == 'H' || a == 'h'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_middle, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
  } else if(a == 'I' || a == 'i'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
  } else if(a == 'J' || a == 'j'){
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_middle, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == 'K' || a == 'k'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_middle, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
  } else if(a == 'L' || a == 'l'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == 'M' || a == 'm'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_top, HIGH);
  } else if(a == 'N' || a == 'n'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_top, HIGH);
  } else if(a == 'O' || a == 'o'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_top, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == 'P' || a == 'p'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_middle, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_top, HIGH);
  } else if(a == 'Q' || a == 'q'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_top, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == 'R' || a == 'r'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_middle, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_top, HIGH);
  } else if(a == 'S' || a == 's'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_middle, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_top, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == 'T' || a == 't'){
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_top, HIGH);
  } else if(a == 'U' || a == 'u'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == 'V' || a == 'v'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == 'W' || a == 'w'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == 'X' || a == 'x'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_middle, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
  } else if(a == 'Y' || a == 'y'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_middle, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_rightDown, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == 'Z' || a == 'z'){
    digitalWrite(sign_leftDown, HIGH);
    digitalWrite(sign_middle, HIGH);
    digitalWrite(sign_rightUp, HIGH);
    digitalWrite(sign_top, HIGH);
    digitalWrite(sign_bottom, HIGH);
  } else if(a == ' '){
    digitalWrite(sign_bottom, HIGH);
  } else if(a == '!'){
    digitalWrite(sign_leftUp, HIGH);
    digitalWrite(sign_bottom, HIGH);
  }

  //set all signs to LOW
  delay(800);
  digitalWrite(sign_leftUp, LOW);
  digitalWrite(sign_leftDown, LOW);
  digitalWrite(sign_middle, LOW);
  digitalWrite(sign_rightUp, LOW);
  digitalWrite(sign_rightDown, LOW);
  digitalWrite(sign_top, LOW);
  digitalWrite(sign_bottom, LOW);
  digitalWrite(sign_dot, LOW);
  delay(200);
}

void setup() {
  Serial.begin(9600);
  Serial.print("Starting Arduino...");

  pinMode(sign_bottom, OUTPUT);
  pinMode(sign_leftDown, OUTPUT);
  pinMode(sign_rightDown, OUTPUT);
  pinMode(sign_dot, OUTPUT);
  pinMode(sign_rightUp, OUTPUT);
  pinMode(sign_top, OUTPUT);
  pinMode(sign_leftUp, OUTPUT);
  pinMode(sign_middle, OUTPUT);

}

void loop() {
  char str[12] = {'H', 'E', 'L', 'L', 'O', ' ', 'W', 'O', 'R', 'L', 'D', '!'};

  for(int i=0; i<sizeof(str) / sizeof(char); i++){
    printChar(str[i]);
    Serial.println(str[i]);
  }

}
