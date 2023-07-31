#include <Wire.h>
int pinLed=13;
int x =0;

void setup()
{
  Wire.begin(1);
  Wire.onReceive(receiveEvent); 
  pinMode(pinLed, OUTPUT);
}

void loop()
{
  delay(100);
}

void receiveEvent(int howMany){

x = Wire.read();
  
  if (x == 1){
  
        digitalWrite(pinLed,HIGH);
  }
  else{
        digitalWrite(pinLed,LOW);
  }
}
