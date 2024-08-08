int analogInPin = A0;
int potValue = 0;
int ledPin = 3;
int delayAmt = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(analogInPin);
  Serial.print("Potentiometer value is ");
  Serial.println(potValue);
  float potVolt = potValue*5.0/1023.0;
  Serial.print("Voltage is ");
  Serial.println(potVolt);
  if (potValue >= 750) { 
    // sets delay for values between 750 and 1023
    delayAmt = 100;
  }
  else if (potValue >= 500) {
    // sets delay for values between 500 and 750  
    delayAmt = 300;
  }
  else {
    // sets delay for values between 0 and 500
    delayAmt = 500;
  }
  digitalWrite(ledPin, HIGH);
  delay(delayAmt);
  digitalWrite(ledPin, LOW);
  delay(delayAmt);
}
