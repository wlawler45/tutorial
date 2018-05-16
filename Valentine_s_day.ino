int violet=22;
int indigo=23;
int blue=24;
int green_L=26;
int green_R=27;
int yellow_L=28;
int yellow_R=53;
int orange_L=31;
int orange_R=51;
int red_L=49;
int red_R=48;
int button=33;
int routine=0;
int triggered=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(violet,OUTPUT);
  pinMode(indigo,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green_L,OUTPUT);
  pinMode(green_R,OUTPUT);
  pinMode(yellow_L,OUTPUT);
  pinMode(yellow_R,OUTPUT);
  pinMode(orange_L,OUTPUT);
  pinMode(orange_R,OUTPUT);
  pinMode(red_L,OUTPUT);
  pinMode(red_R,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
   if(digitalRead(button)&&!triggered){
    routine+=1;
    Serial.println("trigger");
    delay(10);
    //break;
    triggered=1;
  }
  switch(routine){
    case 0:
      all_on();
      triggered=0;
      delay(200);
      break;
    case 1:
        all_on();
        delay(100);
        all_off();
        delay(100);
      triggered=0;
      break;
    case 2:
      sequence();
      triggered=0;
      break;
  }
    if(routine==3){
      routine=0;
    }
  
}
void all_on(){
  digitalWrite(violet,HIGH);
  digitalWrite(indigo,HIGH);
  digitalWrite(blue,HIGH);
  digitalWrite(green_L,HIGH);
  digitalWrite(green_R,HIGH);
  digitalWrite(yellow_L,HIGH);
  digitalWrite(yellow_R,HIGH);
  digitalWrite(orange_L,HIGH);
  digitalWrite(orange_R,HIGH);
  digitalWrite(red_L,HIGH);
  digitalWrite(red_R,HIGH);
}
void all_off(){
  digitalWrite(violet,LOW);
  digitalWrite(indigo,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green_L,LOW);
  digitalWrite(green_R,LOW);
  digitalWrite(yellow_L,LOW);
  digitalWrite(yellow_R,LOW);
  digitalWrite(orange_L,LOW);
  digitalWrite(orange_R,LOW);
  digitalWrite(red_L,LOW);
  digitalWrite(red_R,LOW);
}
void sequence(){
  digitalWrite(violet,HIGH);
  delay(50);
  digitalWrite(indigo,HIGH);
  delay(50);
  digitalWrite(blue,HIGH);
  delay(50);
  digitalWrite(green_L,HIGH);
  digitalWrite(green_R,HIGH);
  delay(50);
  digitalWrite(yellow_L,HIGH);
  digitalWrite(yellow_R,HIGH);
  delay(50);
  digitalWrite(orange_L,HIGH);
  digitalWrite(orange_R,HIGH);
  delay(50);
  digitalWrite(red_L,HIGH);
  digitalWrite(red_R,HIGH);
  delay(50);
  all_off();
  delay(50);
}

