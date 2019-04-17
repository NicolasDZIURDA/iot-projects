#define ROW_1 2
#define ROW_2 7
#define ROW_3 A5
#define ROW_4 5
#define ROW_5 13
#define ROW_6 A4
#define ROW_7 12
#define ROW_8 A2

#define COL_1 6
#define COL_2 11
#define COL_3 10
#define COL_4 3
#define COL_5 A3
#define COL_6 4
#define COL_7 8
#define COL_8 9

const byte rows[] = {
    ROW_1, ROW_2, ROW_3, ROW_4, ROW_5, ROW_6, ROW_7, ROW_8
};
const byte col[] = {
  COL_1,COL_2, COL_3, COL_4, COL_5, COL_6, COL_7, COL_8
};

char test[] =  "human";

byte ALL[] = {B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte A[] = {B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte B[] = {B10000000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte C[] = {B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte D[] = {B11000000,B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte E[] = {B10000000,B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte F[] = {B11000000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte G[] = {B11000000,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte H[] = {B11000000,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte I[] = {B01000000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte J[] = {B01000000,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte K[] = {B10000000,B00000000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte L[] = {B10000000,B10000000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte M[] = {B11000000,B00000000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte N[] = {B11000000,B01000000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte O[] = {B10000000,B01000000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte P[] = {B11000000,B10000000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte Q[] = {B11000000,B11000000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte R[] = {B10000000,B11000000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte S[] = {B01000000,B10000000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte T[] = {B01000000,B11000000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte U[] = {B10000000,B00000000,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte V[] = {B10000000,B10000000,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte W[] = {B01000000,B11000000,B01000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte X[] = {B11000000,B00000000,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte Y[] = {B11000000,B01000000,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000};
byte Z[] = {B10000000,B01000000,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000};

float timeCount = 0;



void setup()
{
  Serial.begin(9600);
  // iterate over the pins:
  for(int i = 0;i<8;i++)  
  // initialize the output pins:
  {  
    pinMode(rows[i],OUTPUT);  
    pinMode(col[i],OUTPUT);  
  }
}


void loop() {
  int i =0;
  delay(5);
   timeCount += 1;

  while( i < strlen(test) )
  {
    
   
    char pointer = test[i++];
    if(timeCount < 40){
      if(pointer == 'h') {
        drawScreen(H);
      }
      else if(pointer == 'e') {
        drawScreen(E);
      }
    }
    else if(timeCount < 80) {
      if(pointer == 'u') {
        drawScreen(U);
      }
      else if(pointer == 'e') {
        drawScreen(E);
      }
    }
    else if(timeCount < 120) {
      if(pointer == 'm') {
        drawScreen(M);
      }
    }
    else if(timeCount < 160) {
      if(pointer == 'a') {
        drawScreen(A);
      }
    }
    else if(timeCount < 200) {
      if(pointer == 'n') {
        drawScreen(N);
      }
    }
  
else if (timeCount <  240) 
{
drawScreen(ALL);
} 
else if (timeCount <  260) 
{
drawScreen(ALL);
} 
else {
// back to the start
timeCount = 0;
}
}
}
void  drawScreen(byte buffer2[])
 { 
  
    for (byte i = 0; i < 8; i++)    
     {
        digitalWrite(rows[i], HIGH);   
        for (byte a = 0; a < 8; a++)  
        { 
          digitalWrite(col[a], (~buffer2[i] >> a) & 0x01);
          
          delayMicroseconds(100);
          
          digitalWrite(col[a], 1);     
        }
        digitalWrite(rows[i], LOW);    
    }
}
