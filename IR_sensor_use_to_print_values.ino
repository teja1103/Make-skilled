void setup() {
  // put your setup code here, to run once:
  pinMode(D2,INPUT);
  pinMode(D4,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int t=digitalRead(D2);
  if(t == 0)
  {
    Serial.println("Object detected");
  }
  else
  {
    Serial.println("Normal");
  }
}
