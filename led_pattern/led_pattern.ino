// C++ code
//
const int led1Pin = 13;
const int led2Pin = 12;
const int led3Pin = 11;
const int led4Pin = 10;
const int led5Pin = 9;
const int led6Pin = 8;
const int buttonPin = 2;
int buttonState = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  pinMode(led4Pin, OUTPUT);
  pinMode(led5Pin, OUTPUT);
  pinMode(led6Pin, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  if(buttonState == LOW) {
    for(int i=0; i<5; i++) {
      digitalWrite(led1Pin, HIGH);
      delay(100);  
      digitalWrite(led1Pin, LOW);
      delay(100);  
      digitalWrite(led2Pin, HIGH);
      delay(100); 
      digitalWrite(led2Pin, LOW);
      delay(100); 
      digitalWrite(led3Pin, HIGH);
      delay(100); 
      digitalWrite(led3Pin, LOW);
      delay(100);  
      digitalWrite(led4Pin, HIGH);
      delay(100); 
      digitalWrite(led4Pin, LOW);
      delay(100); 
      digitalWrite(led5Pin, HIGH);
      delay(100); 
      digitalWrite(led5Pin, LOW);
      delay(100); 
      digitalWrite(led6Pin, HIGH);
      delay(100); 
      digitalWrite(led6Pin, LOW);
      delay(100);
      digitalWrite(led5Pin, HIGH);
      delay(100); 
      digitalWrite(led5Pin, LOW);
      delay(100);
      digitalWrite(led4Pin, HIGH);
      delay(100); 
      digitalWrite(led4Pin, LOW);
      delay(100); 
      digitalWrite(led3Pin, HIGH);
      delay(100);  
      digitalWrite(led3Pin, LOW);
      delay(100); 
      digitalWrite(led2Pin, HIGH);
      delay(100);  
      digitalWrite(led2Pin, LOW);
      delay(100); 
      digitalWrite(led1Pin, HIGH);
      delay(100);  
      digitalWrite(led1Pin, LOW);
      delay(100); 
    }
  }
}