void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int t= analogRead(A0);
//  Serial.println(t);
  if(t<800)
  {
    Serial.println("Wet");
  }
  else
  {
    Serial.println("Dry");
  }
}
