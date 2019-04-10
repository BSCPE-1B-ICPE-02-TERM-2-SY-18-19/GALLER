#include <Keypad.h>

int pin1=22;int pin2=23;int pin3=24;int pin4=25;int pin5=26;int pin6=27;int pin7=28;int pin8=29;int pin9=30;int pin10=31;

int pin11=32;int pin12=33;int pin13=34;int pin14=35;int pin15=36;int pin16=37;int pin17=38;int pin18=39;int pin19=40;int pin20=41;

int pin21=42;int pin22=43;int pin23=44;int pin24=45;int pin25=46;

const byte ROWS = 4; //four rows

const byte COLS = 4; //three columns

char keys[ROWS][COLS] = {

  {'1','2','3','A'},

  {'4','5','6','B'},

  {'7','8','9','C'},

  {'*','0','#','D'}

};

byte rowPins[ROWS] = {9,8,7,6}; //connect to the row pinouts of the keypad

byte colPins[COLS] = {5,4,3,2}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

long num=0;



class Gwapoko{

 public:

    int x, i=0, j=0, rem, b=1, bin=0, count=0, st, temp;

    char str[999];

	int start=11,end=19;

  void setInput(){

  char key = keypad.getKey();

    if(key=='0'){

      off();

      digitalWrite(pin2,HIGH);

      digitalWrite(pin3,HIGH);

      digitalWrite(pin4,HIGH);

      digitalWrite(pin7,HIGH);

      digitalWrite(pin9,HIGH);

      digitalWrite(pin12,HIGH);

      digitalWrite(pin14,HIGH);

      digitalWrite(pin17,HIGH);

      digitalWrite(pin19,HIGH);

      digitalWrite(pin22,HIGH);

      digitalWrite(pin23,HIGH);

      digitalWrite(pin24,HIGH); 

      num=(num*10)+0;

      Serial.println(key);

    }

    if(key=='1'){

      off();

      digitalWrite(pin2,HIGH);

      digitalWrite(pin3,HIGH);

      digitalWrite(pin8,HIGH);

      digitalWrite(pin13,HIGH);

      digitalWrite(pin18,HIGH);

      digitalWrite(pin22,HIGH);

      digitalWrite(pin23,HIGH);

      digitalWrite(pin24,HIGH);

      num=(num*10)+1;

      Serial.println(key);

    }

    if(key=='2'){

      off();

     digitalWrite(pin2,HIGH);

     digitalWrite(pin3,HIGH);

     digitalWrite(pin4,HIGH);

     digitalWrite(pin9,HIGH);

     digitalWrite(pin12,HIGH);

     digitalWrite(pin13,HIGH);

     digitalWrite(pin14,HIGH);

     digitalWrite(pin17,HIGH);

     digitalWrite(pin22,HIGH);

     digitalWrite(pin23,HIGH);

     digitalWrite(pin24,HIGH);

     num=(num*10)+2;

     Serial.println(key);

    }  

    if(key=='3'){

      off();

     digitalWrite(pin2,HIGH);

     digitalWrite(pin3,HIGH);

     digitalWrite(pin4,HIGH);

     digitalWrite(pin9,HIGH);

     digitalWrite(pin12,HIGH);

     digitalWrite(pin13,HIGH);

     digitalWrite(pin14,HIGH);

     digitalWrite(pin19,HIGH);

     digitalWrite(pin22,HIGH);

     digitalWrite(pin23,HIGH);

     digitalWrite(pin24,HIGH);

     num=(num*10)+3;

     Serial.println(key);

    }

    if(key=='4'){

      off();

      digitalWrite(pin2,HIGH);

      digitalWrite(pin4,HIGH);

      digitalWrite(pin7,HIGH);

      digitalWrite(pin9,HIGH);

      digitalWrite(pin12,HIGH);

      digitalWrite(pin13,HIGH);

      digitalWrite(pin14,HIGH);

      digitalWrite(pin19,HIGH);

      digitalWrite(pin24,HIGH);

      num=(num*10)+4;

      Serial.println(key);

    }

    if(key=='5'){

      off();

      digitalWrite(pin2,HIGH);

      digitalWrite(pin3,HIGH);

      digitalWrite(pin4,HIGH);

      digitalWrite(pin7,HIGH);

      digitalWrite(pin12,HIGH);

      digitalWrite(pin13,HIGH);

      digitalWrite(pin14,HIGH);

      digitalWrite(pin19,HIGH);

      digitalWrite(pin22,HIGH);

      digitalWrite(pin23,HIGH);

      digitalWrite(pin24,HIGH);

      num=(num*10)+5;

      Serial.println(key);

    }

    if(key=='6'){

       off();   

       digitalWrite(pin2,HIGH);

       digitalWrite(pin3,HIGH);

       digitalWrite(pin4,HIGH);

       digitalWrite(pin7,HIGH);

       digitalWrite(pin12,HIGH);

       digitalWrite(pin13,HIGH);

       digitalWrite(pin14,HIGH);

       digitalWrite(pin17,HIGH);

       digitalWrite(pin19,HIGH);

       digitalWrite(pin22,HIGH);

       digitalWrite(pin23,HIGH);

       digitalWrite(pin24,HIGH);

       num=(num*10)+6;

       Serial.println(key);

    }

    if(key=='7'){

       off();

       digitalWrite(pin2,HIGH);

       digitalWrite(pin3,HIGH);

       digitalWrite(pin4,HIGH);

       digitalWrite(pin9,HIGH);

       digitalWrite(pin14,HIGH);

       digitalWrite(pin19,HIGH);

       digitalWrite(pin24,HIGH);

       num=(num*10)+7;

       Serial.println(key);

    }

    if(key=='8'){

     off();

     digitalWrite(pin2,HIGH);

     digitalWrite(pin3,HIGH);

     digitalWrite(pin4,HIGH);

     digitalWrite(pin7,HIGH);

     digitalWrite(pin9,HIGH);

     digitalWrite(pin12,HIGH);

     digitalWrite(pin13,HIGH);

     digitalWrite(pin14,HIGH);

     digitalWrite(pin17,HIGH);

     digitalWrite(pin19,HIGH);

     digitalWrite(pin22,HIGH);

     digitalWrite(pin23,HIGH);

     digitalWrite(pin24,HIGH);

     num=(num*10)+8;

     Serial.println(key);

    }

    if(key=='9'){

     off();

     digitalWrite(pin2,HIGH);

     digitalWrite(pin3,HIGH);

     digitalWrite(pin4,HIGH);

     digitalWrite(pin7,HIGH);

     digitalWrite(pin9,HIGH);

     digitalWrite(pin12,HIGH);

     digitalWrite(pin13,HIGH);

     digitalWrite(pin14,HIGH);

     digitalWrite(pin19,HIGH);

     digitalWrite(pin22,HIGH);

     digitalWrite(pin23,HIGH);

     digitalWrite(pin24,HIGH);

     num=(num*10)+9;

     Serial.println(key);

    }

    if(key=='A'){

	 x=num;

	 temp=x;

     Serial.println(x);

	 output();

    }

    if(key=='B'){

		starter();

    }  

	if(key=='C'){

       off();

       num=0;

    }

    if(key=='D'){

      num=num/10;

      Serial.println(num);

    Serial.println(key);

    }

    if(key=='*'){

      off();

     digitalWrite(pin1,HIGH);

    digitalWrite(pin3,HIGH);

    digitalWrite(pin5,HIGH);

    digitalWrite(pin7,HIGH);

    digitalWrite(pin8,HIGH);

    digitalWrite(pin9,HIGH);

    digitalWrite(pin11,HIGH);

    digitalWrite(pin12,HIGH);

    digitalWrite(pin13,HIGH);

    digitalWrite(pin14,HIGH);

    digitalWrite(pin15,HIGH);

    digitalWrite(pin17,HIGH);

    digitalWrite(pin18,HIGH);

    digitalWrite(pin19,HIGH);

    digitalWrite(pin21,HIGH);

    digitalWrite(pin23,HIGH);

    digitalWrite(pin25,HIGH);

    Serial.println(key);

    }

	if(key=='#'){

      on();

    Serial.println(key);

    }		

	}

  void output(){  

  

  for(i=2;i<x;i++){

    if(x%i==0){

      count++;

    }

  }

  if(x==0 || x==1){

	  count=2;

  }

  if(count==0){

      while(temp!=0){

        rem=temp%2;

        temp=temp/2;

        bin+=rem*b;

        b=b*10;

      }

      itoa(x, str, 2);

      strrev(str);

      st=atoi(str);

      if(st==bin){

          doDisLoop();

        }else{

       off();

       digitalWrite(pin1,HIGH);

       digitalWrite(pin7,HIGH); 

       digitalWrite(pin13,HIGH);

       digitalWrite(pin19,HIGH);

       digitalWrite(pin25,HIGH);

       digitalWrite(pin5,HIGH);

       digitalWrite(pin9,HIGH);

       digitalWrite(pin7,HIGH);

       digitalWrite(pin17,HIGH);

       digitalWrite(pin21,HIGH);

      }

    }else{

      off();

       digitalWrite(pin2,HIGH);

       digitalWrite(pin4,HIGH); 

       digitalWrite(pin7,HIGH);

       digitalWrite(pin9,HIGH);

       digitalWrite(pin12,HIGH);

       digitalWrite(pin13,HIGH);

       digitalWrite(pin14,HIGH);

       digitalWrite(pin16,HIGH);

       digitalWrite(pin20,HIGH);

       digitalWrite(pin21,HIGH);

       digitalWrite(pin25,HIGH);

      }

  

}

  void doDisLoop(){  

  for(int x=start;x<end;x++){

   if(x==11){

       off();

       digitalWrite(pin1,HIGH);

       digitalWrite(pin2,HIGH);

       digitalWrite(pin6,HIGH);

       digitalWrite(pin7,HIGH);

       digitalWrite(pin8,HIGH);

       digitalWrite(pin12,HIGH);

       digitalWrite(pin15,HIGH);

       digitalWrite(pin16,HIGH);

       digitalWrite(pin17,HIGH);

       digitalWrite(pin20,HIGH);

       digitalWrite(pin22,HIGH);

       digitalWrite(pin23,HIGH);

       digitalWrite(pin24,HIGH);

       digitalWrite(pin25,HIGH);

       delay(2000);

      }

 if(x==12){

         off();

     digitalWrite(pin6,HIGH);

     digitalWrite(pin7,HIGH);

     digitalWrite(pin8,HIGH);

     digitalWrite(pin9,HIGH);

     digitalWrite(pin10,HIGH);

     digitalWrite(pin12,HIGH);

     digitalWrite(pin14,HIGH);

     digitalWrite(pin16,HIGH);

     digitalWrite(pin18,HIGH);

     digitalWrite(pin20,HIGH);

         delay(2000);

      }



      if(x==13){

        off();

        digitalWrite(pin1,HIGH);

        digitalWrite(pin2,HIGH);

        digitalWrite(pin3,HIGH);

        digitalWrite(pin4,HIGH);

        digitalWrite(pin5,HIGH);

        digitalWrite(pin10,HIGH);

        digitalWrite(pin12,HIGH);

        digitalWrite(pin13,HIGH);

        digitalWrite(pin14,HIGH);

        digitalWrite(pin15,HIGH);

        digitalWrite(pin20,HIGH);

        digitalWrite(pin21,HIGH);

        digitalWrite(pin22,HIGH);

        digitalWrite(pin23,HIGH);

        digitalWrite(pin24,HIGH);

        digitalWrite(pin25,HIGH);

        delay(2000);

      }



      if(x==14){

        off();

    digitalWrite(pin3,HIGH);

    digitalWrite(pin7,HIGH);

    digitalWrite(pin9,HIGH);

    digitalWrite(pin11,HIGH);

    digitalWrite(pin15,HIGH);

    digitalWrite(pin16,HIGH);

    digitalWrite(pin18,HIGH);

    digitalWrite(pin20,HIGH);

    digitalWrite(pin21,HIGH);

    digitalWrite(pin22,HIGH);

    digitalWrite(pin24,HIGH);

    digitalWrite(pin25,HIGH);

    delay(2000);

      }

      if(x==15){

        off();

    digitalWrite(pin5,HIGH);

    digitalWrite(pin7,HIGH);

    digitalWrite(pin8,HIGH);

    digitalWrite(pin9,HIGH);

    digitalWrite(pin11,HIGH);

    digitalWrite(pin13,HIGH);

    digitalWrite(pin15,HIGH);

    digitalWrite(pin17,HIGH);

    digitalWrite(pin18,HIGH);

    digitalWrite(pin19,HIGH);

    digitalWrite(pin21,HIGH);

    delay(2000);

      }

    if(x==16){

        off();

        digitalWrite(pin6,HIGH);

        digitalWrite(pin7,HIGH);

        digitalWrite(pin8,HIGH);

        digitalWrite(pin9,HIGH);

        digitalWrite(pin10,HIGH);

        digitalWrite(pin12,HIGH);

        digitalWrite(pin17,HIGH);

        digitalWrite(pin18,HIGH);

        digitalWrite(pin19,HIGH);

        digitalWrite(pin20,HIGH);

        delay(2000);

      }

     if(x==17){

        off();

        digitalWrite(pin1,HIGH);

        digitalWrite(pin2,HIGH);

        digitalWrite(pin3,HIGH);

        digitalWrite(pin8,HIGH);

        digitalWrite(pin9,HIGH);

        digitalWrite(pin10,HIGH);

        digitalWrite(pin11,HIGH);

        digitalWrite(pin12,HIGH);

        digitalWrite(pin15,HIGH);

        digitalWrite(pin18,HIGH);

        digitalWrite(pin20,HIGH);

        digitalWrite(pin21,HIGH);

        digitalWrite(pin22,HIGH);

        digitalWrite(pin23,HIGH);

        delay(2000);

      }

            if(x==18){

        off();

        digitalWrite(pin10,HIGH);

        digitalWrite(pin12,HIGH);

        digitalWrite(pin13,HIGH);

        digitalWrite(pin14,HIGH);

        digitalWrite(pin16,HIGH);

        delay(1000);

      }

            if(x==19){

        off();

        digitalWrite(pin1,HIGH);

        digitalWrite(pin2,HIGH);

        digitalWrite(pin3,HIGH);

        digitalWrite(pin4,HIGH);

        digitalWrite(pin5,HIGH);

        digitalWrite(pin7,HIGH);

        digitalWrite(pin13,HIGH);

        digitalWrite(pin17,HIGH);

        digitalWrite(pin23,HIGH);

        delay(2000);

      }

           if(x==20){

        off();

        digitalWrite(pin1,HIGH);

        digitalWrite(pin5,HIGH);

        digitalWrite(pin6,HIGH);

        digitalWrite(pin9,HIGH);

        digitalWrite(pin11,HIGH);

        digitalWrite(pin12,HIGH);

        digitalWrite(pin13,HIGH);

        digitalWrite(pin14,HIGH);

        digitalWrite(pin16,HIGH);

        digitalWrite(pin19,HIGH);

        digitalWrite(pin22,HIGH);

        digitalWrite(pin23,HIGH);

        delay(2000);

      }



            if(x==21){

        off();

      digitalWrite(pin2,HIGH);

      digitalWrite(pin3,HIGH);

      digitalWrite(pin4,HIGH);

      digitalWrite(pin6,HIGH);

      digitalWrite(pin8,HIGH);

      digitalWrite(pin10,HIGH);

      digitalWrite(pin11,HIGH);

      digitalWrite(pin13,HIGH);

      digitalWrite(pin15,HIGH);

      digitalWrite(pin16,HIGH);

      digitalWrite(pin18,HIGH);

      digitalWrite(pin20,HIGH);

      digitalWrite(pin21,HIGH);

      digitalWrite(pin23,HIGH);

      digitalWrite(pin25,HIGH);

      delay(2000);

      }



            if(x==22){

        off();

    digitalWrite(pin5,HIGH);

    digitalWrite(pin8,HIGH);

    digitalWrite(pin9,HIGH);

    digitalWrite(pin10,HIGH);

    digitalWrite(pin14,HIGH);

    digitalWrite(pin16,HIGH);

    digitalWrite(pin19,HIGH);

    digitalWrite(pin22,HIGH);

    digitalWrite(pin23,HIGH);

     delay(2000);

      }



            if(x==23){

        off();

        digitalWrite(pin1,HIGH);

        digitalWrite(pin2,HIGH);

        digitalWrite(pin4,HIGH);

        digitalWrite(pin5,HIGH);

        digitalWrite(pin7,HIGH);

        digitalWrite(pin10,HIGH);

        digitalWrite(pin12,HIGH);

        digitalWrite(pin13,HIGH);

        digitalWrite(pin14,HIGH);

        digitalWrite(pin15,HIGH);

        digitalWrite(pin17,HIGH);

        digitalWrite(pin20,HIGH);

        digitalWrite(pin22,HIGH);

        digitalWrite(pin24,HIGH);

        digitalWrite(pin25,HIGH);

        delay(2000);

      }



            if(x==24){

        off();

        digitalWrite(pin8,HIGH);

        digitalWrite(pin9,HIGH);

        digitalWrite(pin10,HIGH);

        digitalWrite(pin11,HIGH);

        digitalWrite(pin12,HIGH);

        digitalWrite(pin17,HIGH);

        digitalWrite(pin22,HIGH);

        delay(1000);

      }



            if(x==25){

        off();

      digitalWrite(pin2,HIGH);

      digitalWrite(pin3,HIGH);

      digitalWrite(pin4,HIGH);

      digitalWrite(pin10,HIGH);

      digitalWrite(pin11,HIGH);

      digitalWrite(pin12,HIGH);

      digitalWrite(pin15,HIGH);

      digitalWrite(pin17,HIGH);

      digitalWrite(pin20,HIGH);

      digitalWrite(pin22,HIGH);

      digitalWrite(pin23,HIGH);

      digitalWrite(pin24,HIGH);

      delay(2000);

      }



   if(x==26){

      off();

      digitalWrite(pin5,HIGH);

      digitalWrite(pin9,HIGH);

      digitalWrite(pin14,HIGH);

      digitalWrite(pin16,HIGH);

      digitalWrite(pin19,HIGH);

      digitalWrite(pin22,HIGH);

      digitalWrite(pin23,HIGH);

      digitalWrite(pin24,HIGH);

      delay(2000);

      }

      if(x==27){

        off();

       digitalWrite(pin1,HIGH);

       digitalWrite(pin6,HIGH);

       digitalWrite(pin7,HIGH);

       digitalWrite(pin8,HIGH);

       digitalWrite(pin13,HIGH);

       digitalWrite(pin14,HIGH);

       digitalWrite(pin15,HIGH);

       digitalWrite(pin16,HIGH);

       digitalWrite(pin17,HIGH);

       digitalWrite(pin18,HIGH);

       digitalWrite(pin20,HIGH);

       digitalWrite(pin21,HIGH);

       delay(2000);

      }

    }

  }

  void off(){

    digitalWrite(pin1,LOW);  digitalWrite(pin2,LOW);digitalWrite(pin3,LOW);  digitalWrite(pin4,LOW);digitalWrite(pin5,LOW);  digitalWrite(pin6,LOW);digitalWrite(pin7,LOW);  digitalWrite(pin8,LOW);digitalWrite(pin9,LOW);  digitalWrite(pin10,LOW);digitalWrite(pin11,LOW);  digitalWrite(pin12,LOW);digitalWrite(pin13,LOW);  digitalWrite(pin14,LOW);digitalWrite(pin15,LOW);  digitalWrite(pin16,LOW);

    digitalWrite(pin17,LOW);  digitalWrite(pin18,LOW);digitalWrite(pin19,LOW);  digitalWrite(pin20,LOW);digitalWrite(pin21,LOW);  digitalWrite(pin22,LOW);digitalWrite(pin23,LOW);  digitalWrite(pin24,LOW);digitalWrite(pin25,LOW);  

  } 

  void on(){

  digitalWrite(pin1,HIGH);  digitalWrite(pin2,HIGH);digitalWrite(pin3,HIGH);  digitalWrite(pin4,HIGH);digitalWrite(pin5,HIGH);  digitalWrite(pin6,HIGH);digitalWrite(pin7,HIGH);  digitalWrite(pin8,HIGH);digitalWrite(pin9,HIGH);  digitalWrite(pin10,HIGH);digitalWrite(pin11,HIGH);  digitalWrite(pin12,HIGH);digitalWrite(pin13,HIGH);  digitalWrite(pin14,HIGH);digitalWrite(pin15,HIGH);  digitalWrite(pin16,HIGH);

  digitalWrite(pin17,HIGH);  digitalWrite(pin18,HIGH);digitalWrite(pin19,HIGH);  digitalWrite(pin20,HIGH);digitalWrite(pin21,HIGH);  digitalWrite(pin22,HIGH);digitalWrite(pin23,HIGH);  digitalWrite(pin24,HIGH);digitalWrite(pin25,HIGH);  

  }

  void starter(){

  digitalWrite(pin1,HIGH);delay(100);digitalWrite(pin2,HIGH);delay(100);digitalWrite(pin6,HIGH);delay(100);digitalWrite(pin3,HIGH);delay(100);digitalWrite(pin7,HIGH);delay(100);

  digitalWrite(pin11,HIGH);delay(100);digitalWrite(pin4,HIGH);delay(100);digitalWrite(pin8,HIGH);delay(100);digitalWrite(pin12,HIGH);delay(100);digitalWrite(pin16,HIGH);delay(100);

  digitalWrite(pin5,HIGH);delay(100);digitalWrite(pin9,HIGH);delay(100);digitalWrite(pin13,HIGH);delay(100);digitalWrite(pin17,HIGH);delay(100);digitalWrite(pin21,HIGH);delay(100);digitalWrite(pin10,HIGH);delay(100);

  digitalWrite(pin14,HIGH);delay(100);digitalWrite(pin18,HIGH);delay(100);digitalWrite(pin22,HIGH);delay(100);digitalWrite(pin15,HIGH);delay(100);digitalWrite(pin19,HIGH);delay(100);digitalWrite(pin23,HIGH);delay(100);digitalWrite(pin20,HIGH);delay(100);  digitalWrite(pin24,HIGH);delay(100);digitalWrite(pin25,HIGH); delay(100); 

  

  digitalWrite(pin25,LOW);delay(100);digitalWrite(pin24,LOW);delay(100);digitalWrite(pin20,LOW);delay(100);digitalWrite(pin23,LOW);delay(100);digitalWrite(pin19,LOW);delay(100);

  digitalWrite(pin15,LOW);delay(100);digitalWrite(pin22,LOW);delay(100);digitalWrite(pin18,LOW);delay(100);digitalWrite(pin14,LOW);delay(100);digitalWrite(pin10,LOW);delay(100);

  digitalWrite(pin21,LOW);delay(100);digitalWrite(pin17,LOW);delay(100);digitalWrite(pin13,LOW);delay(100);digitalWrite(pin9,LOW);delay(100);digitalWrite(pin5,LOW);delay(100);digitalWrite(pin16,LOW);delay(100);

  digitalWrite(pin12,LOW);delay(100);digitalWrite(pin8,LOW);delay(100);digitalWrite(pin4,LOW);delay(100);digitalWrite(pin11,LOW);delay(100);digitalWrite(pin7,LOW);delay(100);digitalWrite(pin3,LOW);delay(100);digitalWrite(pin6,LOW);delay(100);  digitalWrite(pin2,LOW);delay(100);digitalWrite(pin1,LOW); delay(100); 





  digitalWrite(pin1,HIGH);digitalWrite(pin2,HIGH);digitalWrite(pin3,HIGH);digitalWrite(pin4,HIGH);digitalWrite(pin5,HIGH);

  digitalWrite(pin6,HIGH);digitalWrite(pin11,HIGH);digitalWrite(pin12,HIGH);digitalWrite(pin13,HIGH);digitalWrite(pin14,HIGH);

  digitalWrite(pin15,HIGH);digitalWrite(pin20,HIGH);digitalWrite(pin25,HIGH);digitalWrite(pin24,HIGH);digitalWrite(pin23,HIGH);digitalWrite(pin22,HIGH);

  digitalWrite(pin21,HIGH);delay(500); digitalWrite(pin1,LOW);digitalWrite(pin2,LOW);digitalWrite(pin3,LOW);digitalWrite(pin4,LOW);digitalWrite(pin5,LOW);

  digitalWrite(pin6,LOW);digitalWrite(pin11,LOW);digitalWrite(pin12,LOW);digitalWrite(pin13,LOW);digitalWrite(pin14,LOW);

  digitalWrite(pin15,LOW);digitalWrite(pin20,LOW);digitalWrite(pin25,LOW);digitalWrite(pin24,LOW);digitalWrite(pin23,LOW);digitalWrite(pin22,LOW);

  digitalWrite(pin21,LOW);delay(500);



  digitalWrite(pin1,HIGH);digitalWrite(pin2,HIGH);digitalWrite(pin3,HIGH);digitalWrite(pin4,HIGH);digitalWrite(pin5,HIGH);

  digitalWrite(pin8,HIGH);digitalWrite(pin13,HIGH);digitalWrite(pin18,HIGH);digitalWrite(pin23,HIGH);delay(500);

  digitalWrite(pin1,LOW);digitalWrite(pin2,LOW);digitalWrite(pin3,LOW);digitalWrite(pin4,LOW);digitalWrite(pin5,LOW);

  digitalWrite(pin8,LOW);digitalWrite(pin13,LOW);digitalWrite(pin18,LOW);digitalWrite(pin23,LOW);delay(500);





  digitalWrite(pin3,HIGH);digitalWrite(pin7,HIGH);digitalWrite(pin9,HIGH);digitalWrite(pin11,HIGH);digitalWrite(pin12,HIGH);

  digitalWrite(pin13,HIGH);digitalWrite(pin14,HIGH);digitalWrite(pin15,HIGH);digitalWrite(pin16,HIGH);digitalWrite(pin20,HIGH);

  digitalWrite(pin21,HIGH);digitalWrite(pin25,HIGH);delay(500);

  digitalWrite(pin3,LOW);digitalWrite(pin7,LOW);digitalWrite(pin9,LOW);digitalWrite(pin11,LOW);digitalWrite(pin12,LOW);

  digitalWrite(pin13,LOW);digitalWrite(pin14,LOW);digitalWrite(pin15,LOW);digitalWrite(pin16,LOW);digitalWrite(pin20,LOW);

  digitalWrite(pin21,LOW);digitalWrite(pin25,LOW);delay(500);



  digitalWrite(pin1,HIGH);digitalWrite(pin2,HIGH);digitalWrite(pin3,HIGH);digitalWrite(pin4,HIGH);digitalWrite(pin5,HIGH);

  digitalWrite(pin6,HIGH);digitalWrite(pin10,HIGH);digitalWrite(pin12,HIGH);digitalWrite(pin13,HIGH);digitalWrite(pin14,HIGH);

  digitalWrite(pin15,HIGH);digitalWrite(pin11,HIGH);digitalWrite(pin16,HIGH);digitalWrite(pin21,HIGH);digitalWrite(pin19,HIGH);digitalWrite(pin25,HIGH);delay(500);

  digitalWrite(pin1,LOW);digitalWrite(pin2,LOW);digitalWrite(pin3,LOW);digitalWrite(pin4,LOW);digitalWrite(pin5,LOW);

  digitalWrite(pin6,LOW);digitalWrite(pin10,LOW);digitalWrite(pin12,LOW);digitalWrite(pin13,LOW);digitalWrite(pin14,LOW);

  digitalWrite(pin15,LOW);digitalWrite(pin11,LOW);digitalWrite(pin16,LOW);digitalWrite(pin21,LOW);digitalWrite(pin19,LOW);digitalWrite(pin25,LOW);delay(500);



  digitalWrite(pin1,HIGH);digitalWrite(pin2,HIGH);digitalWrite(pin3,HIGH);digitalWrite(pin4,HIGH);digitalWrite(pin5,HIGH);

  digitalWrite(pin8,HIGH);digitalWrite(pin13,HIGH);digitalWrite(pin18,HIGH);digitalWrite(pin23,HIGH);delay(500);

  digitalWrite(pin1,LOW);digitalWrite(pin2,LOW);digitalWrite(pin3,LOW);digitalWrite(pin4,LOW);digitalWrite(pin5,LOW);

  digitalWrite(pin8,LOW);digitalWrite(pin13,LOW);digitalWrite(pin18,LOW);digitalWrite(pin23,LOW);delay(500);

  

  } 

  };
