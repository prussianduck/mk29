const int keyPin1 = 9;
const int keyPin2 = 10;
const int keyPin3 = 11;
const int buzzerPin = 6;
const int latchPin = 4; //ST_CP
const int clockPin = 5; //SH_CP
const int dataPin = 2; //DS

const int shortPing = 50;
const int longPing = 150;
const int STOP = 100;

const int zeroAR[8] = {1,1,1,0,0,1,1,1};
const int oneAR[8] = {1,0,0,0,0,1,0,0};
const int twoAR[8] = {1,1,0,1,1,0,1,1};
const int threeAR[8] = {1,1,0,1,0,1,1,0};
const int fourAR[8] = {1,0,1,1,0,1,0,0};
const int fiveAR[8] = {0,1,1,1,1,1,1,0};
const int sixAR[8] = {0,1,1,1,1,1,1,1};
const int sevenAR[8] = {1,1,0,0,0,1,0,0};
const int eightAR[8] = {1,1,1,1,0,1,1,1};
const int nineAR[8] = {1,1,1,1,1,1,1,0};

int c = 0;
int h = 10;

void setup() {

  pinMode(keyPin1,INPUT);
  pinMode(keyPin2,INPUT);
  pinMode(keyPin3,INPUT);
  pinMode(buzzerPin,OUTPUT);
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin, OUTPUT);
  Serial.begin(9600);

}

void loop(){
  
 if(digitalRead(keyPin1) == HIGH && c > 0 ){
  c--;
   delay(200);
  }else if(digitalRead(keyPin1) == HIGH && c == 0){
    c = c + 9;
     delay(200);
    }
   
   if(digitalRead(keyPin2) ==  HIGH && c<9){
    c++;
    
    delay(200); 
    }else if(digitalRead(keyPin2) == HIGH && c == 9){
      c = c - 9;
      
      delay(200); 
      }
     if(c != h){
      show(c);
      h = c;
      }
    
   if(digitalRead(keyPin3) == HIGH){
    morse(c);
    delay(100);
    }   
  Serial.println(c);
 

}
void show(int b){

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

void morse(int b){

switch(b){
 case 0: 
       for(int i = 0; i<5; i++){
        analogWrite(buzzerPin,300);
        delay(longPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        }
        
       break;
 case 1: 
        analogWrite(buzzerPin,300);
        delay(shortPing);
        analogWrite(buzzerPin, 0);
        delay(STOP); 
       for(int i = 0; i<4; i++){
        analogWrite(buzzerPin,300);
        delay(longPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        }
        
       break;
 case 2:
       for(int i = 0; i<2; i++){
        analogWrite(buzzerPin,300);
        delay(shortPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        }
        
        for(int i = 0; i<3; i++){
        analogWrite(buzzerPin,300);
        delay(longPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        }
        
       break;
 case 3:
       for(int i = 0; i<3; i++){
        analogWrite(buzzerPin,300);
        delay(shortPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        }
        
        for(int i = 0; i<2; i++){
        analogWrite(buzzerPin,300);
        delay(longPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        }
        
       break;
 case 4:
       for(int i = 0; i<4; i++){
        analogWrite(buzzerPin,300);
        delay(shortPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        }
        
        analogWrite(buzzerPin,300);
        delay(longPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        
       break;
 case 5: 
        for(int i = 0; i<5; i++){
        analogWrite(buzzerPin,300);
        delay(shortPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        }
       break;
 case 6:
        
        analogWrite(buzzerPin,300);
        delay(longPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
         for(int i = 0; i<4; i++){
        analogWrite(buzzerPin,300);
        delay(shortPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);}
       break;
 case 7: 
        for(int i = 0; i<2; i++){
        analogWrite(buzzerPin,300);
        delay(longPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        }
        
        for(int i = 0; i<3; i++){
        analogWrite(buzzerPin,300);
        delay(shortPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        }
       break;
 case 8:
       for(int i = 0; i<3; i++){
        analogWrite(buzzerPin,300);
        delay(longPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        }
        
        for(int i = 0; i<2; i++){
        analogWrite(buzzerPin,300);
        delay(shortPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        }
       break;
 case 9: 
       for(int i = 0; i<4; i++){
        analogWrite(buzzerPin,300);
        delay(longPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        }
        
      
        analogWrite(buzzerPin,300);
        delay(shortPing);
        analogWrite(buzzerPin, 0);
        delay(STOP);
        
       break; 
}}
