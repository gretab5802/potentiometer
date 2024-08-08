int analogInPin = A0;
int potValue = 0;
int ledPin = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(analogInPin);
  int ledOutput = map(potValue, 0, 1023, 0, 255);
  analogWrite(ledPin, ledOutput);
  Serial.print("Potentiometer value is ");
  Serial.println(potValue);
  float potVolt = potValue*5.0/1023.0;
  Serial.print("Voltage is ");
  Serial.println(potVolt);
  delay(2000);
}
