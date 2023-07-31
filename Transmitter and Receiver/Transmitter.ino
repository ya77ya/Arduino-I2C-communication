int Button1 = 13;
void setup() {
// put your setup code here, to run once:

  Serial.begin(9600); // for communication
  pinMode(Button1, INPUT_PULLUP); // for read button
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(Button1) == 1)
  {
    Serial.write('1');
 
  }
  delay(20); // waitting message send
}
