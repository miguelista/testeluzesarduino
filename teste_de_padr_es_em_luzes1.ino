// C++ code
//
int counter;

int counter2;

int counter3;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  for (counter = 0; counter < 3; ++counter) {
    digitalWrite(4, LOW);
    digitalWrite(7, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    delay(500); // Wait for 500 millisecond(s)
  }
  digitalWrite(4, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, HIGH);
  for (counter2 = 0; counter2 < 3; ++counter2) {
    digitalWrite(7, LOW);
    digitalWrite(4, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    delay(500); // Wait for 500 millisecond(s)
  }
  digitalWrite(7, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  for (counter3 = 0; counter3 < 3; ++counter3) {
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
}