void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(D4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D4,0);
}
