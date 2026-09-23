void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // red
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH); 
  delay(500); 
  // green
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH); 
  delay(500);
  // blue
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW); 
  delay(500);
  // yellow
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH); 
  delay(500); 
  // purple
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW); 
  delay(500); 
  // white
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW); 
  delay(500); 

}
