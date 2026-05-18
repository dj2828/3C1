// C++ code
//

const int nled = 6;
const int p1 = 8;
const int p2 = 9;

const int note[] = {261, 294, 330, 349, 392, 440};

int partenza;
int reload = 0;

void setup()
{
  for(int i=1; i<=6; i++){
    pinMode(i, OUTPUT);
  }
  pinMode(7, OUTPUT);
  
  pinMode(p1, INPUT_PULLUP);
  pinMode(p2, INPUT_PULLUP);
  
  randomSeed(analogRead(0));
}

void loop()
{
  if(digitalRead(p1) == 0){
    int partenza = random(1, 7);
    int pos_giusta = partenza;
    for(int i=partenza; i<=partenza+nled; i++){
      if(i == 7) pos_giusta = 1;
      tone(7, note[pos_giusta-1], 500);
      digitalWrite(pos_giusta, HIGH);
      delay(500);
      digitalWrite(pos_giusta, LOW);
      pos_giusta++;
    }
  }
  if(digitalRead(p2) == 0){
    if(reload == 0){ partenza = random(1, 7); reload = 7;};
    int pos_giusta = partenza;
    for(int i=partenza; i<=partenza+nled; i++){
      if(i == 7) pos_giusta = 1;
      tone(7, note[pos_giusta-1], 500);
      digitalWrite(pos_giusta, HIGH);
      delay(500);
      digitalWrite(pos_giusta, LOW);
      pos_giusta++;
    }
    reload--;
  }
}