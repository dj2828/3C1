// C++ code
//

const int l1 = 1;
const int l2 = 2;
const int l3 = 3;
const int l4 = 4;
const int l5 = 5;

const int p1 = 6;
const int p2 = 7;
const int p3 = 8;

const int buz1 = 9;
const int buz2 = 10;


void setup()
{
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  
  pinMode(p1, INPUT_PULLUP);
  pinMode(p2, INPUT_PULLUP);
  pinMode(p3, INPUT_PULLUP);
  
  pinMode(buz1, OUTPUT);
  pinMode(buz2, OUTPUT);
}

void loop()
{
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  if(digitalRead(p1) == 0){
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    tone(buz1, 120, 500);
    delay(1000);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    tone(buz2, 180, 500);
    delay(1000);
  }
  else if(digitalRead(p2) == 0){
    tone(buz1, 294, 2000);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, LOW);
	digitalWrite(l5, LOW);
	delay(1000);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
	digitalWrite(l5, HIGH);
	delay(1000);
  }
  else if(digitalRead(p3) == 0){
    tone(buz1, 330, 2500);
    for(int i=1; i<=3; i++){
      digitalWrite(i, HIGH);
      digitalWrite(i-1, LOW);
      delay(500);
    }
    for(int i=2; i>0; i--){
      digitalWrite(i, HIGH);
      digitalWrite(i+1, LOW);
      delay(500);
    }
  }
}