#include<SoftwareSerial.h>
SoftwareSerial BTSerial(2,3);

int led=13,state=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
  Serial.begin(9600);
//  Serial.println("Enter AT Commands: ");
  BTSerial.begin(38400);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(BTSerial.available()>0){
    state=BTSerial.read();
  }
  if(state==0){
    digitalWrite(led,LOW);
    Serial.println("LED : OFF");
    state=0;
  }
  else if(state==1){
    digitalWrite(led,HIGH);
    Serial.println("LED : ON");
    state=1;
  }


//  if(BTSerial.available())
//    Serial.write(BTSerial.read());
//  if(Serial.available())
//    BTSerial.write(Serial.read());
}
