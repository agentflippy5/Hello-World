const int led = 13;
int num = 0;
int numbr = 0;
int x = 0;

int sadd(a, b){
  return a + b;
}

void blnk(){
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  x = x - 1;
}

void setup(){
  Serial.begin(9600);
  Serial.println("Hello world!");
  pinMode(led, OUTPUT);
}

void loop(){
  Serial.println("Enter number");
  num = Serial.read();
  Serial.println("Enter 2nd number")
  numb = Serial.read();
  x = sadd(num, numbr);
  Serial.print("Blinking ")
  Serial.print(x);
  Serial.println(" times.");
  while (x > 0){
    blnk()
  }
}
