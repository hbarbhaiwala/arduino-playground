
const int redLedPin =  LED_BUILTIN;// the number of the LED pin
const int whiteLedPin = 12;// the number of the LED pin
const int blueLedPin = 11;// the number of the LED pin
const int greenLedPin = 10;// the number of the LED pin
const int yellowLedPin = 8;// the number of the LED pin

void setup() {
  // put your setup code here, to run once:
  pinMode(redLedPin, OUTPUT);
  pinMode(whiteLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  worm_blink();
  delay(1000);
  all_colors_blink();
}

void worm_blink() {
  digitalWrite(greenLedPin, LOW);
  digitalWrite(redLedPin, HIGH);
  delay(1000);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(whiteLedPin, HIGH);
  delay(1000);
  digitalWrite(redLedPin, LOW);
  digitalWrite(blueLedPin, HIGH);
  delay(1000);
  digitalWrite(whiteLedPin, LOW);
  digitalWrite(greenLedPin, HIGH);
  delay(1000);
  digitalWrite(blueLedPin, LOW);
  digitalWrite(yellowLedPin, HIGH);
  delay(1000);
  digitalWrite(greenLedPin, LOW);
  delay(1000);
  digitalWrite(yellowLedPin, LOW);  
}

void all_colors_blink() {
  digitalWrite(redLedPin, HIGH);
  digitalWrite(whiteLedPin, HIGH);
  digitalWrite(blueLedPin, HIGH);
  digitalWrite(greenLedPin, HIGH);
  digitalWrite(yellowLedPin, HIGH);
  delay(1000);
  digitalWrite(redLedPin, LOW);
  digitalWrite(whiteLedPin, LOW);
  digitalWrite(blueLedPin, LOW);
  digitalWrite(greenLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  delay(1000);
}

