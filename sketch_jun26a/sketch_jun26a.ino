// Lane 1
const int R1 = 2;
const int Y1 = 3;
const int G1 = 4;

// Lane 2
const int R2 = 5;
const int Y2 = 6;
const int G2 = 7;

// Lane 3
const int R3 = 8;
const int Y3 = 9;
const int G3 = 10;

// Lane 4
const int R4 = 11;
const int Y4 = 12;
const int G4 = 13;

void setup() {
  for (int pin = 2; pin <= 13; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {

  // Lane 1 și Lane 3 VERDE
  digitalWrite(R1, LOW);
  digitalWrite(Y1, LOW);
  digitalWrite(G1, HIGH);

  digitalWrite(R3, LOW);
  digitalWrite(Y3, LOW);
  digitalWrite(G3, HIGH);

  digitalWrite(R2, HIGH);
  digitalWrite(Y2, LOW);
  digitalWrite(G2, LOW);

  digitalWrite(R4, HIGH);
  digitalWrite(Y4, LOW);
  digitalWrite(G4, LOW);

  delay(8000);

  // Toate GALBEN
  digitalWrite(G1, LOW);
  digitalWrite(G2, LOW);
  digitalWrite(G3, LOW);
  digitalWrite(G4, LOW);

  digitalWrite(R1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(R3, LOW);
  digitalWrite(R4, LOW);

  digitalWrite(Y1, HIGH);
  digitalWrite(Y2, HIGH);
  digitalWrite(Y3, HIGH);
  digitalWrite(Y4, HIGH);

  delay(2000);

  // Lane 2 și Lane 4 VERDE
  digitalWrite(Y1, LOW);
  digitalWrite(Y2, LOW);
  digitalWrite(Y3, LOW);
  digitalWrite(Y4, LOW);

  digitalWrite(R1, HIGH);
  digitalWrite(R3, HIGH);

  digitalWrite(R2, LOW);
  digitalWrite(R4, LOW);

  digitalWrite(G2, HIGH);
  digitalWrite(G4, HIGH);

  delay(8000);

  // Toate GALBEN
  digitalWrite(G1, LOW);
  digitalWrite(G2, LOW);
  digitalWrite(G3, LOW);
  digitalWrite(G4, LOW);

  digitalWrite(R1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(R3, LOW);
  digitalWrite(R4, LOW);

  digitalWrite(Y1, HIGH);
  digitalWrite(Y2, HIGH);
  digitalWrite(Y3, HIGH);
  digitalWrite(Y4, HIGH);

  delay(2000);
}