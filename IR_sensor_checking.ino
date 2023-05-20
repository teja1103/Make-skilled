void setup() {
  // put your setup code here, to run once:
  pinMode(D2,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int t=digitalRead(D2);
  Serial.println(t);
}
