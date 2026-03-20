int merahU = 2, kuningU = 3, hijauU = 4;
int merahT = 5, kuningT = 6, hijauT = 7;
int merahS = 8, kuningS = 9, hijauS = 10;
int merahB = 11, kuningB = 12, hijauB = 13;

void setup() {
  pinMode(merahU, OUTPUT); pinMode(kuningU, OUTPUT); pinMode(hijauU, OUTPUT);
  pinMode(merahT, OUTPUT); pinMode(kuningT, OUTPUT); pinMode(hijauT, OUTPUT);
  pinMode(merahS, OUTPUT); pinMode(kuningS, OUTPUT); pinMode(hijauS, OUTPUT);
  pinMode(merahB, OUTPUT); pinMode(kuningB, OUTPUT); pinMode(hijauB, OUTPUT);

  semuaMerah();
  delay(2000);
}

void loop() {
  aktifkanSimpang(hijauU, kuningU, merahU);
  aktifkanSimpang(hijauT, kuningT, merahT);
  aktifkanSimpang(hijauS, kuningS, merahS);
  aktifkanSimpang(hijauB, kuningB, merahB);
}

void aktifkanSimpang(int pinHijau, int pinKuning, int pinMerah) {
  semuaMerah();

  digitalWrite(pinMerah, LOW);
  digitalWrite(pinHijau, HIGH);
  delay(5000);

  digitalWrite(pinHijau, LOW);
  kedipKuning(pinKuning, 3);

  digitalWrite(pinKuning, HIGH);
  delay(2000);

  digitalWrite(pinKuning, LOW);
  digitalWrite(pinMerah, HIGH);
  delay(500);
}

void kedipKuning(int pinKuning, int nKali) {
  for (int i = 0; i < nKali; i++) {
    digitalWrite(pinKuning, HIGH);
    delay(300);
    digitalWrite(pinKuning, LOW);
    delay(300);
  }
}

void semuaMerah() {
  digitalWrite(hijauU, LOW);  digitalWrite(kuningU, LOW);  digitalWrite(merahU, HIGH);
  digitalWrite(hijauT, LOW);  digitalWrite(kuningT, LOW);  digitalWrite(merahT, HIGH);
  digitalWrite(hijauS, LOW);  digitalWrite(kuningS, LOW);  digitalWrite(merahS, HIGH);
  digitalWrite(hijauB, LOW);  digitalWrite(kuningB, LOW);  digitalWrite(merahB, HIGH);
}
