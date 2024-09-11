void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  
}
int k = 0;
void loop()
{
  int a=400;
  if (k==0){
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    delay(7000); 
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    k+=1;
  }

  delay(a); 
  digitalWrite(8, HIGH);
  delay(a); 
  digitalWrite(8, LOW);
  delay(a); 
  digitalWrite(1, HIGH);
  delay(a); 
  digitalWrite(1, LOW);
  delay(a); 
  digitalWrite(9, HIGH);
  delay(a); 
  digitalWrite(9, LOW);
  delay(a); 
  digitalWrite(3, HIGH);
  delay(a); 
  digitalWrite(3, LOW);
  delay(a); 
  digitalWrite(7, HIGH);
  delay(a); 
  digitalWrite(7, LOW);
  delay(a); 
  digitalWrite(2, HIGH);
  delay(a); 
  digitalWrite(2, LOW);
  delay(a); 
  digitalWrite(9, HIGH);
  delay(a); 
  digitalWrite(9, LOW);
  delay(a); 
  digitalWrite(3, HIGH);
  delay(a); 
  digitalWrite(3, LOW);
  delay(a); 
  digitalWrite(7, HIGH);
  delay(a); 
  digitalWrite(7, LOW);
  delay(a); 
  digitalWrite(2, HIGH);
  delay(a); 
  digitalWrite(2, LOW);
  delay(a); 
  digitalWrite(5, HIGH);
  delay(a);
  digitalWrite(5, LOW);
  delay(a); 
  digitalWrite(0, HIGH);
  delay(a); 
  digitalWrite(0, LOW);
  delay(a); 
  digitalWrite(8, HIGH);
  delay(a); 
  digitalWrite(8, LOW);
  delay(a); 
  digitalWrite(1, HIGH);
  delay(a); 
  digitalWrite(1, LOW);
  delay(a); 
  digitalWrite(5, HIGH);
  delay(a); 
  digitalWrite(5, LOW);
  delay(a); 
  digitalWrite(0, HIGH);
  delay(a); 
  digitalWrite(0, LOW);
}