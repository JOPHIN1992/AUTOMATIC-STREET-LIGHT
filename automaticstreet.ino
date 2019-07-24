int led1=5;
int led2=6;
int led3=9;
int led4=10;
int led5=11;

void setup() 
{
pinMode(12,INPUT);
pinMode(4,INPUT);
pinMode(7,INPUT);
pinMode(8,INPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
int a=digitalRead(4);
int b=digitalRead(7);
int c=digitalRead(8);
int d=digitalRead(12);

 if(a==0)
 {
  
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   analogWrite(led1,25);
   analogWrite(led4,25);
   analogWrite(led5,25);
 }

 
 else if(b==0)
 {
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);
   analogWrite(led1,25);
   analogWrite(led2,25);
   analogWrite(led5,25);
 }

 
else if(c==0)
 {
    digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
   analogWrite(led3,25);
 analogWrite(led1,25);
 analogWrite(led2,25);
 }

 
 else if(d==0)
 {
    digitalWrite(led5,HIGH);
     analogWrite(led1,25);
 analogWrite(led2,25);
 analogWrite(led3,25);
 analogWrite(led4,25);
 }
  else 
 {
  analogWrite(led5,25);
 analogWrite(led1,25);
 analogWrite(led2,25);
 analogWrite(led3,25);
 analogWrite(led4,25);
 }

}
