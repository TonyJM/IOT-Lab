#include<SoftwareSerial.h>
SoftwareSerial cell(2,3);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Enter AT Command: ");
  cell.begin(9600);
  cell.println("ATD+918317490168;");
  delay(10000);
}

void loop() {
  // put your main code here, to run repeatedly:
//  if(Serial.available()>0){
//    switch(Serial.read()){
//      case 's':
//        sendMessage();
//        break;
//      case 'r':
//        recvMessage();
//        break;
//    }
//  }
//  if(cell.available()>0){
//    Serial.write(cell.read());
//  }


//  if(cell.available())
//    Serial.write(cell.read());
//  if(Serial.available())
//    cell.write(Serial.read());
   
  
}


//void sendMessage(){
//  cell.println("AT+CMGF=1");
//  cell.println("AT+CGMS=\"+918317490168\"\r");
//  cell.println("Fire Alert");
//  cell.println((char)26);
//}
//
//void recvMessage(){
//  cell.println("AT+CNMI=2,2,0,0,0");
//}
