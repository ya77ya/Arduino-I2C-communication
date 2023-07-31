int LED1 = 13;
char message;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600); // communication
  pinMode(LED1, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    message = Serial.read();
    if(message == '1')
    {
      digitalWrite(LED1, 1);
    }
    
  }
  delay(20); // waitting message reciev
  digitalWrite(LED1, 0);
 
}
