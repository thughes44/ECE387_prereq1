void setup()  // Assign pin output 
{  
  Serial.begin(9600);
  pinMode(4,OUTPUT); 
}

void loop() // Loop forever
{
  digitalWrite(4,HIGH);
  delay(200);
  digitalWrite(4, LOW);
  delay(200);  
  digitalWrite(4,HIGH);
  delay(200);
  digitalWrite(4, LOW);
  delay(200);  
  digitalWrite(4,HIGH);
  delay(200);
  digitalWrite(4, LOW);
  delay(600);  
  digitalWrite(4,HIGH);
  delay(600);
  digitalWrite(4, LOW);
  delay(600);  
  digitalWrite(4,HIGH);
  delay(600);
  digitalWrite(4, LOW);
  delay(600); 
  digitalWrite(4,HIGH);
  delay(600);
  digitalWrite(4, LOW);
  delay(600); 
  digitalWrite(4,HIGH);
  delay(200);
  digitalWrite(4, LOW);
  delay(200);  
  digitalWrite(4,HIGH);
  delay(200);
  digitalWrite(4, LOW);
  delay(200);  
  digitalWrite(4,HIGH);
  delay(200);
  digitalWrite(4, LOW);
  delay(2000); 
}

