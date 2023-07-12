#define sensor A0 
int red=9, green=10,blue=11;
int k=0,y=0,m=0; 
int deger = 0 ; 
int ses = 700 ;
int buzzer=12; 
void setup() {
 pinMode (red,OUTPUT); 
 pinMode (green,OUTPUT); 
 pinMode (blue,OUTPUT);
 pinMode (buzzer,OUTPUT);
 pinMode (sensor,INPUT);  
 Serial.begin(9600);  
}
 
void loop() {
 deger = analogRead(sensor); 
 Serial.println(deger);
 if(deger > ses)
 { 
 Serial.println("Ses Algilandi"); 
  for(int i=0;i<10;i++)
  {
      k=random(0,255);
      m=random(0,255);
      y=random(0,255);
      analogWrite(red,k);
      analogWrite(green,y);
      analogWrite(blue,m);
      digitalWrite(buzzer,HIGH);
      delay(500);
      digitalWrite(buzzer,LOW);
      analogWrite(red,0);
      analogWrite(green,0);
      analogWrite(blue,0);
      delay(200);
  }
 }
  else
  {
      digitalWrite(buzzer,LOW);
      analogWrite(red,0);
      analogWrite(green,0);
      analogWrite(blue,0);
  } 
}
