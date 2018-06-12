#include <SoftwareSerial.h>
#define a 8
#define b 9
#define c 10
#define d 11


void front(){
digitalWrite(a,HIGH);
digitalWrite(b,LOW);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
}
void back(){
digitalWrite(a,LOW);
digitalWrite(b,HIGH);
digitalWrite(c,LOW);
digitalWrite(d,HIGH);
}
void right(){
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,LOW);
digitalWrite(d,LOW);
}
void left(){
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
}


SoftwareSerial bluetooth(2,3);

void setup(){
	pinMode(a,OUTPUT);
	pinMode(b,OUTPUT);
	pinMode(c,OUTPUT);	
	pinMode(d,OUTPUT);
	Serial.begin(9600);  
} 
    
void loop(){
  char rd;
  rd = Serial.read();
	if (rd == 'f') front;
	if (rd == 'b') back;
  if (rd == 'r') right;
 	if (rd == 'l') left;
}
