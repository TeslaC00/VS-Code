void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int i=13;
  while(i<15){
    digitalWrite(i,1);
    delay(1000);
    digitalWrite(i,0);
    delay(1000);
  }

}