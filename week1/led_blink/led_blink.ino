int potPin = A0;
int led = 13;
int count = 0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(potPin);

  digitalWrite(led, HIGH);
  delay(value);

  digitalWrite(led, LOW);
  delay(value);

  count++;

  Serial.print("Blink count: ");
  Serial.println(count);
}
