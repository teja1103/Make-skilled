void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(D1,INPUT);
  pinMode(D4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int t=digitalRead(D1);
  if(t == 1)
  {
    digitalWrite(D4,0);
  }
  else
  {
    digitalWrite(D4,1);
  }
}
