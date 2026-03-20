const int utaraMerah = 13;
const int utaraKuning = 12;
const int utaraHijau = 11;

const int baratMerah = 10;
const int baratKuning = 9;
const int baratHijau = 8;

const int selatanMerah = 7;
const int selatanKuning = 6;
const int selatanHijau = 5;

const int timurMerah = 4;
const int timurKuning = 3;
const int timurHijau = 2;

const int waktuHijau = 5000;  
const int waktuKuning = 2000; 
const int waktuJeda = 3000;   

void setup() {
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
  
  semuaMerah();
}

void loop() {
  digitalWrite(utaraMerah, LOW);     
  digitalWrite(utaraHijau, HIGH);    
  delay(waktuHijau);
  
  digitalWrite(utaraHijau, LOW);     
  digitalWrite(utaraKuning, HIGH);   
  delay(waktuKuning);
  
  digitalWrite(utaraKuning, LOW);    
  digitalWrite(utaraMerah, HIGH);    
  delay(waktuJeda);                  

  digitalWrite(baratMerah, LOW);
  digitalWrite(baratHijau, HIGH);
  delay(waktuHijau);
  
  digitalWrite(baratHijau, LOW);
  digitalWrite(baratKuning, HIGH);
  delay(waktuKuning);
  
  digitalWrite(baratKuning, LOW);
  digitalWrite(baratMerah, HIGH);
  delay(waktuJeda);                  

  digitalWrite(selatanMerah, LOW);
  digitalWrite(selatanHijau, HIGH);
  delay(waktuHijau);
  
  digitalWrite(selatanHijau, LOW);
  digitalWrite(selatanKuning, HIGH);
  delay(waktuKuning);
  
  digitalWrite(selatanKuning, LOW);
  digitalWrite(selatanMerah, HIGH);
  delay(waktuJeda);                  

  digitalWrite(timurMerah, LOW);
  digitalWrite(timurHijau, HIGH);
  delay(waktuHijau);
  
  digitalWrite(timurHijau, LOW);
  digitalWrite(timurKuning, HIGH);
  delay(waktuKuning);
  
  digitalWrite(timurKuning, LOW);
  digitalWrite(timurMerah, HIGH);
  delay(waktuJeda);                  
}

void semuaMerah() {
  digitalWrite(utaraMerah, HIGH);
  digitalWrite(baratMerah, HIGH);
  digitalWrite(selatanMerah, HIGH);
  digitalWrite(timurMerah, HIGH);
  
  digitalWrite(utaraKuning, LOW);
  digitalWrite(baratKuning, LOW);
  digitalWrite(selatanKuning, LOW);
  digitalWrite(timurKuning, LOW);
  
  digitalWrite(utaraHijau, LOW);
  digitalWrite(baratHijau, LOW);
  digitalWrite(selatanHijau, LOW);
  digitalWrite(timurHijau, LOW);
}