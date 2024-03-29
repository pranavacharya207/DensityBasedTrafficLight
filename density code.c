int signal1[] = {23, 25, 27};
int signal2[] = {46, 48, 50};
int signal3[] = {13, 12, 11};
int signal4[] = {10, 9, 8};

int redDelay = 5000;
int yellowDelay = 2000;

void setup() {
  // Declaring all the LED's as output
  for (int i = 0; i < 3; i++) {
    pinMode(signal1[i], OUTPUT);
    pinMode(signal2[i], OUTPUT);
    pinMode(signal3[i], OUTPUT);
    pinMode(signal4[i], OUTPUT);
  }
}

void loop() {
  // Making Green  LED at signal 1 and red LED's at other signal HIGH
  digitalWrite(signal1[2], HIGH);
  digitalWrite(signal1[0], LOW);
  digitalWrite(signal2[0], HIGH);
  digitalWrite(signal3[0], HIGH);
  digitalWrite(signal4[0], HIGH);
  delay(redDelay);

  // Making Green LED at signal 1 LOW and making yellow LED at signal 1 HIGH for 2 seconds
  digitalWrite(signal1[1], HIGH);
  digitalWrite(signal1[2], LOW);
  delay(yellowDelay);
  digitalWrite(signal1[1], LOW);

  // Making Green  LED at signal 2 and red LED's at other signal HIGH
  digitalWrite(signal1[0], HIGH);
  digitalWrite(signal2[2], HIGH);
  digitalWrite(signal2[0], LOW);
  digitalWrite(signal3[0], HIGH);
  digitalWrite(signal4[0], HIGH);
  delay(redDelay);

  // Making Green LED at signal 2 LOW and making yellow LED at signal 2 HIGH for 2 seconds
  digitalWrite(signal2[1], HIGH);
  digitalWrite(signal2[2], LOW);
  delay(yellowDelay);
  digitalWrite(signal2[1], LOW);

  // Making Green  LED at signal 3 and red LED's at other signal HIGH
  digitalWrite(signal1[0], HIGH);
  digitalWrite(signal2[0], HIGH);
  digitalWrite(signal3[2], HIGH);
  digitalWrite(signal3[0], LOW);
  digitalWrite(signal4[0], HIGH);
  delay(redDelay);

  // Making Green LED at signal 3 LOW and making yellow LED at signal 3 HIGH for 2 seconds
  digitalWrite(signal3[1], HIGH);
  digitalWrite(signal3[2], LOW);
  delay(yellowDelay);
  digitalWrite(signal3[1], LOW);

  // Making Green  LED at signal 4 and red LED's at other signal HIGH
  digitalWrite(signal1[0], HIGH);
  digitalWrite(signal2[0], HIGH);
  digitalWrite(signal3[0], HIGH);
  digitalWrite(signal4[2], HIGH);
  digitalWrite(signal4[0], LOW);
  delay(redDelay);

  // Making Green LED at signal 4 LOW and making yellow LED at signal 4 HIGH for 2 seconds
  digitalWrite(signal4[1], HIGH);
  digitalWrite(signal4[2], LOW);
  delay(yellowDelay);
  digitalWrite(signal4[1], LOW);
}
