void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(2, LOW);
  delay(34200000); //9.5 hours on night 34200000
  
  //delay(3000);
  digitalWrite(2, HIGH);
  delay(52200000); //14.5 hours at day 52200000
  
  
}
