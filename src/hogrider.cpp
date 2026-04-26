///////////////PROJETO SONS DE ROBÔ///////////////
//////
//////
//////SOM REPORUZIDO EM ARDUÍNO
//////TESTE 3
//////
//////
//////INSPIRAÇÃO: HOG RIDER (CLASH OF CLANS)
//////
//////
//////MODO: APRESENTAÇÃO

int buzzer = 13;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void playNote(int freq, int dur) {
  if (freq == 0) {
    noTone(buzzer);
  } else {
    tone(buzzer, freq);
  }
  delay(dur);
}

void loop() {
  // "HOG" - sobe de ~514 até 567 Hz, depois cai
  playNote(514, 30);
  playNote(529, 30);
  playNote(538, 30);
  playNote(554, 30);
  playNote(564, 30);
  playNote(567, 30);
  playNote(567, 60);
  playNote(564, 40);
  playNote(560, 40);
  playNote(554, 40);
  playNote(548, 40);
  playNote(538, 40);
  playNote(523, 40);
  playNote(508, 40);
  playNote(494, 40);
  playNote(485, 30);
  noTone(buzzer);

  // pausa entre "HOG" e "RI"
  delay(150);

  // "RI" - sobe rápido de 466 até pico 694 Hz
  playNote(466, 25);
  playNote(485, 25);
  playNote(502, 25);
  playNote(517, 25);
  playNote(538, 25);
  playNote(564, 25);
  playNote(584, 25);
  playNote(597, 25);
  playNote(611, 25);
  playNote(625, 25);
  playNote(636, 25);
  playNote(644, 25);
  playNote(651, 25);
  playNote(659, 25);
  playNote(670, 25);
  playNote(678, 25);
  playNote(686, 25);
  playNote(690, 25);
  playNote(694, 25);
  playNote(694, 30);

  // "DEEEER" - sustenta ~690 Hz, sobe levemente ao pico e estabiliza em ~633 Hz
  playNote(690, 40);
  playNote(686, 40);
  playNote(682, 40);
  playNote(678, 40);
  playNote(670, 40);
  playNote(651, 40);
  playNote(640, 40);
  playNote(647, 40);
  playNote(651, 40);
  playNote(647, 40);
  playNote(644, 40);
  playNote(636, 40);
  playNote(633, 40);
  playNote(629, 40);
  playNote(629, 50);
  playNote(625, 50);
  playNote(622, 50);
  playNote(622, 50);
  playNote(625, 50);
  playNote(629, 50);
  playNote(633, 50);
  playNote(636, 80);
  playNote(636, 80);
  playNote(633, 80);
  playNote(629, 80);
  playNote(629, 80);
  playNote(633, 80);
  playNote(633, 80);
  playNote(636, 80);
  playNote(633, 80);
  playNote(629, 80);
  playNote(633, 80);
  playNote(633, 80);
  playNote(636, 80);
  playNote(644, 60);
  playNote(647, 60);
  playNote(636, 60);
  playNote(633, 80);
  playNote(636, 80);
  playNote(633, 80);
  playNote(629, 80);
  playNote(633, 100);
  playNote(678, 80);
  noTone(buzzer);

  delay(2500);
}