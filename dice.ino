unsigned int score=0;
bool puls=0;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(2, INPUT);
}
void loop(){
  score=random(1,7);
  switch (score) {
    case 1:
      digitalWrite(7,HIGH);
      break;
    case 2:
      digitalWrite(10,HIGH);
      digitalWrite(13,HIGH);
      break;
    case 3:
      digitalWrite(10,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(13,HIGH);
      break;
    case 4:
      digitalWrite(13,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
      break;
    case 5:
      digitalWrite(8,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(13,HIGH);
      digitalWrite(7,HIGH);
      break;
    case 6:
      digitalWrite(13,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      break;
    }
  puls = digitalRead(2);
  if (puls==1){
    delay(2000);

  }
  
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(100);
}
