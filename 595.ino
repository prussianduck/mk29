int latchPin = 4; //ST_CP
int clockPin = 5; //SH_CP
int dataPin = 2; //DS

int zeroAR[8] = {1,1,1,0,0,1,1,1};
int oneAR[8] = {1,0,0,0,0,1,0,0};
int twoAR[8] = {1,1,0,1,1,0,1,1};
int threeAR[8] = {1,1,0,1,0,1,1,0};
int fourAR[8] = {1,0,1,1,0,1,0,0};
int fiveAR[8] = {0,1,1,1,1,1,1,0};
int sixAR[8] = {0,1,1,1,1,1,1,1};
int sevenAR[8] = {1,1,0,0,0,1,0,0};
int eightAR[8] = {1,1,1,1,0,1,1,1};
int nineAR[8] = {1,1,1,1,1,1,1,0};

void setup(){
pinMode(latchPin, OUTPUT);
pinMode(clockPin, OUTPUT);
pinMode(dataPin, OUTPUT);


}

void loop(){
for(int i = 0; i<10; i++){
  count(i);
  delay(1000);
  }
}



void count(int b){

switch(b){
 case 0: 
       zero();
       break;
 case 1: 
       one();
       break;
 case 2:
       two();
       break;
 case 3:
       three();
       break;
 case 4:
       four();
       break;
 case 5: 
       five();
       break;
 case 6:
       six();
       break;
 case 7: 
       seven();
       break;
 case 8:
       eight();
       break;
 case 9: 
       nine();
       break; 
}}
void zero(){

digitalWrite(latchPin, LOW);

for(int i = 0; i<8; i++){
 digitalWrite(clockPin, LOW);
 digitalWrite(dataPin, zeroAR[i]);
 digitalWrite(clockPin, HIGH);

} 
digitalWrite(latchPin, HIGH);
}

void one(){

digitalWrite(latchPin, LOW);

for(int i = 0; i<8; i++){
 digitalWrite(clockPin, LOW);
 digitalWrite(dataPin, oneAR[i]);
 digitalWrite(clockPin, HIGH);

} 
digitalWrite(latchPin, HIGH);
}

void two(){

  digitalWrite(latchPin, LOW);

for(int i = 0; i<8; i++){
 digitalWrite(clockPin, LOW);
 digitalWrite(dataPin, twoAR[i]);
 digitalWrite(clockPin, HIGH);

} 
digitalWrite(latchPin, HIGH);
}

void three(){

digitalWrite(latchPin, LOW);

for(int i = 0; i<8; i++){
 digitalWrite(clockPin, LOW);
 digitalWrite(dataPin, threeAR[i]);
 digitalWrite(clockPin, HIGH);

} 
digitalWrite(latchPin, HIGH);
}

void four(){

digitalWrite(latchPin, LOW);

for(int i = 0; i<8; i++){
 digitalWrite(clockPin, LOW);
 digitalWrite(dataPin, fourAR[i]);
 digitalWrite(clockPin, HIGH);

} 
digitalWrite(latchPin, HIGH);
}

void five(){

digitalWrite(latchPin, LOW);

for(int i = 0; i<8; i++){
 digitalWrite(clockPin, LOW);
 digitalWrite(dataPin, fiveAR[i]);
 digitalWrite(clockPin, HIGH);

} 
digitalWrite(latchPin, HIGH);
}

void six(){

digitalWrite(latchPin, LOW);

for(int i = 0; i<8; i++){
 digitalWrite(clockPin, LOW);
 digitalWrite(dataPin, sixAR[i]);
 digitalWrite(clockPin, HIGH);

} 
digitalWrite(latchPin, HIGH);
}

void seven(){

digitalWrite(latchPin, LOW);

for(int i = 0; i<8; i++){
 digitalWrite(clockPin, LOW);
 digitalWrite(dataPin, sevenAR[i]);
 digitalWrite(clockPin, HIGH);

} 
digitalWrite(latchPin, HIGH);
}

void eight(){

digitalWrite(latchPin, LOW);

for(int i = 0; i<8; i++){
 digitalWrite(clockPin, LOW);
 digitalWrite(dataPin, eight[i]);
 digitalWrite(clockPin, HIGH);

} 
digitalWrite(latchPin, HIGH);
}

void nine(){

digitalWrite(latchPin, LOW);

for(int i = 0; i<8; i++){
 digitalWrite(clockPin, LOW);
 digitalWrite(dataPin, nine[i]);
 digitalWrite(clockPin, HIGH);

} 
digitalWrite(latchPin, HIGH);
}
