#define BUTTON_PIN 12
#define LED_PIN 8
#define a 2
#define b 3
#define c 4
#define d 16
#define e 19
#define f 18
#define g 17
#define a2 11
#define b2 10
#define c2 9
#define d2 7
#define e2 15
#define f2 14
#define g2 13
int buttonState = 0;
int countValue = -1;
int prestate = 0;
int countFrame = 0;
int modulus = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(c2, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(e2, OUTPUT);
  pinMode(f2, OUTPUT);
  pinMode(g2, OUTPUT);
}

void loop() {
  value:
    buttonState = digitalRead(BUTTON_PIN);

    if(buttonState == HIGH && prestate == 0){
      turnOff();
      countValue++;
      Serial.println(countValue);
      digitalWrite(LED_PIN, HIGH);
      displayDigitFirst(countValue);
      displayDigitSecond(countValue);
      delay(150);
      digitalWrite(LED_PIN, LOW);

      prestate = 1;
    } else if(buttonState == LOW){
      prestate = 0;
    }
}

void displayDigitFirst(int input){

  int digit = input / 10;

  if(digit != 1 && digit != 4){
    digitalWrite(a, HIGH);
  }

  if(digit != 5 && digit != 6){
    digitalWrite(b, HIGH);
  }

  if(digit != 2){
    digitalWrite(c, HIGH);
  }

  if(digit != 1 && digit != 4 && digit != 7){
    digitalWrite(d, HIGH);
  }

  if(digit == 2 || digit == 6 || digit == 8 || digit == 0){
    digitalWrite(e, HIGH);
  }

  if(digit != 1 && digit != 2 && digit != 3 && digit != 7){
    digitalWrite(f, HIGH);
  }

  if(digit != 0 && digit != 1 && digit != 7){
    digitalWrite(g, HIGH);
  }
}

void displayDigitSecond(int input){

  int digit = input % 10;

  if(digit != 1 && digit != 4){
    digitalWrite(a2, HIGH);
  }

  if(digit != 5 && digit != 6){
    digitalWrite(b2, HIGH);
  }

  if(digit != 2){
    digitalWrite(c2, HIGH);
  }

  if(digit != 1 && digit != 4 && digit != 7){
    digitalWrite(d2, HIGH);
  }

  if(digit == 2 || digit == 6 || digit == 8 || digit == 0){
    digitalWrite(e2, HIGH);
  }

  if(digit != 1 && digit != 2 && digit != 3 && digit != 7){
    digitalWrite(f2, HIGH);
  }

  if(digit != 0 && digit != 1 && digit != 7){
    digitalWrite(g2, HIGH);
  }
}

void turnOff(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(b2,LOW);
  digitalWrite(c2,LOW);
  digitalWrite(d2,LOW);
  digitalWrite(e2,LOW);
  digitalWrite(f2,LOW);
  digitalWrite(g2,LOW);
}