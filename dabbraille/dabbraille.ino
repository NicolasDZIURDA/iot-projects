char test[] =  "mbapperesteaupsg";
// 2-dimensional array of row pin numbers:
int R[] = {2,7,A5,5,13,A4,12,A2};  
// 2-dimensional array of column pin numbers:
int C[] = {6,11,10,3,A3,4,8,9}; 

unsigned char a[8][8] =  
{  
  1,0,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};  
  
unsigned char b[8][8] = 
{  
  1,0,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char c[8][8] =  
{  
  1,1,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char d[8][8] =  
{  
  1,1,0,0,0,0,0,0,  
  0,1,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};
unsigned char e[8][8] = 
{  
  1,0,0,0,0,0,0,0,  
  0,1,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char f[8][8] = 
{  
  1,1,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char g[8][8] =
{  
  1,1,0,0,0,0,0,0,  
  1,1,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char h[8][8] =
{  
  1,0,0,0,0,0,0,0,  
  1,1,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char j[8][8] =
{  
  0,1,0,0,0,0,0,0,  
  1,1,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char k[8][8] =
{  
  1,0,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char l[8][8] =
{  
  1,0,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char m[8][8] = 
{  
  1,1,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char n[8][8] = 
{  
  1,1,0,0,0,0,0,0,  
  0,1,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char o[8][8] = 
{  
  1,0,0,0,0,0,0,0,  
  0,1,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char p[8][8] = 
{  
  1,1,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char q[8][8] = 
{  
  1,1,0,0,0,0,0,0,  
  1,1,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char r[8][8] = 
{  
  1,0,0,0,0,0,0,0,  
  1,1,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char s[8][8] = 
{  
  0,1,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char t[8][8] = 
{  
  0,1,0,0,0,0,0,0,  
  1,1,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char u[8][8] = 
{  
  1,0,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,  
  1,1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char v[8][8] =
{  
  1,0,0,0,0,0,0,0,  
  1,0,0,0,0,0,0,0,  
  1,1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char w[8][8] =
{  
  0,1,0,0,0,0,0,0,  
  1,1,0,0,0,0,0,0,  
  0,1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char x[8][8] =
{  
  1,1,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,  
  1,1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char y[8][8] = 
{  
  1,1,0,0,0,0,0,0,  
  0,1,0,0,0,0,0,0,  
  1,1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};

unsigned char z[8][8] =
{  
  1,0,0,0,0,0,0,0,  
  0,1,0,0,0,0,0,0,  
  1,1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0, 
  0,0,0,0,0,0,0,0  
};


void setup()
{
  Serial.begin(9600);
  // iterate over the pins:
  for(int i = 0;i<8;i++)  
  // initialize the output pins:
  {  
    pinMode(R[i],OUTPUT);  
    pinMode(C[i],OUTPUT);  
  }
}
void loop()
{
 int i=0;
 while (i < strlen(test) )
 {  
    char pointer = test[i++];
    if(pointer == 'a') {
      Serial.println("On affiche a");
      for(int j = 0; j < 50; j++){
        Display(a);
      }
    }
    if(pointer == 'b') {
      Serial.println("On affiche b");
      for(int j = 0; j < 50; j++){
        Display(b);
      }
    }
    if(pointer == 'c') {
      Serial.println("On affiche c");
      for(int j = 0; j < 50; j++){
        Display(c);
      }
    }
    if(pointer == 'd') {
      Serial.println("On affiche d");
      for(int j = 0; j < 50; j++){
        Display(d);
      }
    }
    if(pointer == 'e') {
      Serial.println("On affiche e");
      for(int j = 0; j < 50; j++){
        Display(e);
      }
    }
    if(pointer == 'f') {
      Serial.println("On affiche f");
      for(int j = 0; j < 50; j++){
        Display(f);
      }
    }
    if(pointer == 'g') {
      Serial.println("On affiche g");
      for(int j = 0; j < 50; j++){
        Display(g);
      }
    }
    if(pointer == 'h') {
      Serial.println("On affiche h");
      for(int j = 0; j < 50; j++){
        Display(h);
      }
    }
    /*if(pointer == 'i') {
      Serial.println("On affiche i");
      for(int j = 0; j < 50; j++){
        Display(i);
      }
    }*/
    /*if(pointer == 'j') {
      Serial.println("On affiche j");
      for(int j = 0; j < 50; j++){
        Display(j);
      }
    }*/
    if(pointer == 'k') {
      Serial.println("On affiche k");
      for(int j = 0; j < 50; j++){
        Display(k);
      }
    }
    if(pointer == 'l') {
      Serial.println("On affiche l");
      for(int j = 0; j < 50; j++){
        Display(l);
      }
    }
    if(pointer == 'm') {
      Serial.println("On affiche m");
      for(int j = 0; j < 50; j++){
        Display(m);
      }
    }
    if(pointer == 'n') {
      Serial.println("On affiche n");
      for(int j = 0; j < 50; j++){
        Display(n);
      }
    }
    if(pointer == 'o') {
      Serial.println("On affiche o");
      for(int j = 0; j < 50; j++){
        Display(o);
      }
    }
    if(pointer == 'p') {
      Serial.println("On affiche p");
      for(int j = 0; j < 50; j++){
        Display(p);
      }
    }
    if(pointer == 'q') {
      Serial.println("On affiche q");
      for(int j = 0; j < 50; j++){
        Display(q);
      }
    }
    if(pointer == 'r') {
      Serial.println("On affiche r");
      for(int j = 0; j < 50; j++){
        Display(r);
      }
    }
    if(pointer == 's') {
      Serial.println("On affiche s");
      for(int j = 0; j < 50; j++){
        Display(s);
      }
    }
    if(pointer == 't') {
      Serial.println("On affiche t");
      for(int j = 0; j < 50; j++){
        Display(t);
      }
    }
    if(pointer == 'u') {
      Serial.println("On affiche u");
      for(int j = 0; j < 50; j++){
        Display(u);
      }
    }
    if(pointer == 'v') {
      Serial.println("On affiche v");
      for(int j = 0; j < 50; j++){
        Display(u);
      }
    }
    if(pointer == 'w') {
      Serial.println("On affiche w");
      for(int j = 0; j < 50; j++){
        Display(w);
      }
    }
    if(pointer == 'x') {
      Serial.println("On affiche x");
      for(int j = 0; j < 50; j++){
        Display(x);
      }
    }
    if(pointer == 'y') {
      Serial.println("On affiche y");
      for(int j = 0; j < 50; j++){
        Display(y);
      }
    }
    if(pointer == 'z') {
      Serial.println("On affiche z");
      for(int j = 0; j < 50; j++){
        Display(z);
      }
    }
    delay(500);
 }
}

void Display(unsigned char dat[8][8])    
{  
  for(int c = 0; c<8;c++)  
  {  
    digitalWrite(C[c],LOW);//use thr column 
    //loop
    for(int r = 0;r<8;r++)  
    {  
      digitalWrite(R[r],dat[r][c]);  
    }  
    delay(2);  
    Clear();  //Remove empty display light
  }  
}  
  
void Clear()                        
{  
  for(int i = 0;i<8;i++)  
  {  
    digitalWrite(R[i],LOW);  
    digitalWrite(C[i],HIGH);  
  }  
}  
