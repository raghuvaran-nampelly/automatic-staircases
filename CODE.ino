int l1 = 2, l2 = 3, l3 = 4, l4 = 5, l5 = 6, l6 = 7;
#define bottom A1 
#define top A0

void setup() 
{
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
  pinMode(top, INPUT);
  pinMode(bottom, INPUT);
}

void loop() 
{
  if (digitalRead(bottom) == LOW) { 
    digitalWrite(l6, HIGH);
    delay(500);
    digitalWrite(l5, HIGH); 
    delay(500); 
    digitalWrite(l4, HIGH);
    delay(500);
    digitalWrite(l3, HIGH); 
    delay(500); 
    digitalWrite(l2, HIGH); 
    delay(500); 
    digitalWrite(l1, HIGH); 
    delay(500);
    
    while(digitalRead(top) == HIGH); 
    
    digitalWrite(l6, LOW); 
    delay(500);
    digitalWrite(l5, LOW); 
    delay(500); 
    digitalWrite(l4, LOW); 
    delay(500); 
    digitalWrite(l3, LOW); 
    delay(500); 
    digitalWrite(l2, LOW); 
    delay(500); 
    digitalWrite(l1, LOW); 
    delay(500);
  }

  if (digitalRead(top) == LOW) { 
    digitalWrite(l1, HIGH); 
    delay(500);
    digitalWrite(l2, HIGH); 
    delay(500); 
    digitalWrite(l3, HIGH); 
    delay(500); 
    digitalWrite(l4, HIGH); 
    delay(500); 
    digitalWrite(l5, HIGH); 
    delay(500); 
    digitalWrite(l6, HIGH); 
    delay(500);
    
    while(digitalRead(bottom) == HIGH); 
    
    digitalWrite(l1, LOW);
    delay(500); 
    digitalWrite(l2, LOW); 
    delay(500); 
    digitalWrite(l3, LOW);
    delay(500); 
    digitalWrite(l4, LOW); 
    delay(500); 
    digitalWrite(l5, LOW); 
    delay(500); 
    digitalWrite(l6, LOW); 
    delay(500);
  }
  
  delay(500); 
}
