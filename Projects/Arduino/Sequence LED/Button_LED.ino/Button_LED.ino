const int LED1 = 1;
const int LED2 = 2;
const int LED3 = 3;
const int LED4 = 4;
const int LED5 = 5;
const int LED6 = 6;

const int LED7 = 7;

const int BUTTON1 = 8;
const int BUTTON2 = 9;
const int BUTTON5 = 10;
const int BUTTON6 = 11;
const int BUTTON3 = 12;
const int BUTTON4 = 13;

  int v0 = 0;
  int v1 = 0;
  int v2 = 0;
  int v3 = 0;
  int v4 = 0;
  int v5 = 0;
  int v6 = 0;


void setup(){
  

    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);
    pinMode(LED5, OUTPUT);
    pinMode(LED6, OUTPUT);
    pinMode(LED7, OUTPUT);
    pinMode(BUTTON1, INPUT);
    pinMode(BUTTON2, INPUT);
    pinMode(BUTTON3, INPUT);
    pinMode(BUTTON4, INPUT);
    pinMode(BUTTON5, INPUT);
    pinMode(BUTTON6, INPUT);
}

void loop(){

if (digitalRead(BUTTON1) == HIGH){
  if (v1==0){
      if (v0==0){
        v0=1;
        v1=1;
      }else{
        v0=0;
      }
  }
}

if (digitalRead(BUTTON2) == HIGH){
  if (v2==0){
      if (v0==1){
        v0=2;
        v2=1;
      }else{
        v0=0;
      }
  }
}

if (digitalRead(BUTTON3) == HIGH){
  if (v3==0){
      if (v0==2){
        v0=3;
        v3=1;
      }else{
        v0=0;
      }
  }
}

if (digitalRead(BUTTON4) == HIGH){
  if (v4==0){
      if (v0==3){
        v0=4;
        v4=1;
      }else{
        v0=0;
      }
  }
}

if (digitalRead(BUTTON5) == HIGH){
  if (v5==0){
      if (v0==4){
        v0=5;
        v5=1;
      }else{
        v0=0;
      }
  }
}

if (digitalRead(BUTTON6) == HIGH){
  if (v6==0){
      if (v0==5){
        v0=6;
        v6=1;
      }else{
        v0=0;
      }
  }
}


if (digitalRead(BUTTON1) == LOW){
  v1=0;
}

if (digitalRead(BUTTON2) == LOW){
  v2=0;
}

if (digitalRead(BUTTON3) == LOW){
  v3=0;
}

if (digitalRead(BUTTON4) == LOW){
  v4=0;
}

if (digitalRead(BUTTON5) == LOW){
  v5=0;
}

if (digitalRead(BUTTON6) == LOW){
  v6=0;
}


if (v0==0){
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
}

if (v0==1){
  digitalWrite(LED1, HIGH);
}

if (v0==2){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
}

if (v0==3){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
}

if (v0==4){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  }
  
if (v0==5){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  }

  if (v0==6){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  }

if (v0==6){
  delay(500);
  digitalWrite(LED7, HIGH);
  }
}
