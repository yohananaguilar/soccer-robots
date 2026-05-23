//////////////////////////////////////////////////////////
// Projeto Prático: Futebol de Robôs
// Programa: Sonic (Azulao Supersonico)
// Versão: 1.0
// Data: 20/05/2026
// Time: EMERALD STRIKERS
//////////////////////////////////////////////////////////

// Definicao das notas musicais
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define REST      0

const int BUZZER_PIN = 13;
// Definicao do pino 13 como buzzer

int tempo = 140;
int wholenote = (60000 * 4) / tempo;
int divider = 0, noteDuration = 0;

// Array da melodia da intro (Green Hill Zone)
int melodyIntro[] = {
  REST,2, NOTE_D5,8, NOTE_B4,4, NOTE_D5,8,
  NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2,
  REST,8, NOTE_A4,8, NOTE_FS5,8, NOTE_E5,4, NOTE_D5,8,
  NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2,
  REST,4, NOTE_D5,8, NOTE_B4,4, NOTE_D5,8,
  NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2,
  REST,8, NOTE_B4,8, NOTE_B4,8, NOTE_G4,4, NOTE_B4,8,
  NOTE_A4,4, NOTE_B4,8, NOTE_A4,4, NOTE_D4,2,
  REST,4, NOTE_D5,8, NOTE_B4,4, NOTE_D5,8,
  NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2,
  REST,8, NOTE_A4,8, NOTE_FS5,8, NOTE_E5,4, NOTE_D5,8,
  NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2,
  REST,4, NOTE_D5,8, NOTE_B4,4, NOTE_D5,8,
  NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2,
  REST,8, NOTE_B4,8, NOTE_B4,8, NOTE_G4,4, NOTE_B4,8,
  NOTE_A4,4, NOTE_B4,8, NOTE_A4,4, NOTE_D4,8, NOTE_D4,8, NOTE_FS4,8,
  NOTE_E4,-1,
  REST,8, NOTE_D4,8, NOTE_E4,8, NOTE_FS4,-1,
  REST,8, NOTE_D4,8, NOTE_D4,8, NOTE_FS4,8, NOTE_F4,-1,
  REST,8, NOTE_D4,8, NOTE_F4,8, NOTE_E4,8,
  NOTE_E4,-2, NOTE_A4,8, NOTE_CS5,8,
  NOTE_FS5,8, NOTE_E5,4, NOTE_D5,8, NOTE_A5,-4,
};

void sonicIntro() {
// Funcao Intro Sonic - Green Hill Zone
  int notes = sizeof(melodyIntro) / sizeof(melodyIntro[0]) / 2;

  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
    divider = melodyIntro[thisNote + 1];

    if (divider > 0) {
      noteDuration = wholenote / divider;
    } else if (divider < 0) {
      noteDuration = wholenote / abs(divider);
      noteDuration *= 1.5;
    }

    tone(BUZZER_PIN, melodyIntro[thisNote], noteDuration * 0.9);
    delay(noteDuration);
    noTone(BUZZER_PIN);
  }
}

void sonicRage() {
// Funcao expressao de raiva Sonic - Drowning Theme
  // Parte 1 - padrao ritmico
  for (int i = 0; i < 3; i++) {
    tone(BUZZER_PIN, 220); delay(120);
    tone(BUZZER_PIN, 330); delay(120);
    tone(BUZZER_PIN, 196); delay(120);
    tone(BUZZER_PIN, 294); delay(120);
  }
  // Parte 2 - mais intenso
  for (int i = 0; i < 4; i++) {
    tone(BUZZER_PIN, 180); delay(80);
    tone(BUZZER_PIN, 260); delay(80);
  }
  noTone(BUZZER_PIN);
}

void sonicHappy() {
// Funcao expressao de felicidade Sonic - Speed Shoes Theme
  int melody[] = {
    988, 1175, 1319, 1568,
    1319, 1568, 1760, 2093,
    1760, 1568, 1319, 1175
  };
  int dur[] = {
    120, 120, 120, 120,
    100, 100, 100, 100,
    120, 120, 120, 120
  };

  for (int i = 0; i < 12; i++) {
    tone(BUZZER_PIN, melody[i], dur[i]);
    delay(dur[i] * 1.1);
  }
  noTone(BUZZER_PIN);
}

const int acti = 12; // Definição do pino 12 como habilitador
const int in1  = 11; // Definição do pino 11 como entrada 1
const int in2  = 9;  // Definição do pino 09 como entrada 2
const int in3  = 6;  // Definição do pino 06 como entrada 3
const int in4  = 7;  // Definição do pino 07 como entrada 4

void Dssl_Frente() {
  // Lógica para deslocamento a frente
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(2000);
}

void Parada() {
  // Lógica para parar
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(2000);
}

void Retrocesso() {
  // Lógica para deslocamento reverso
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(2000);
}

void Virar_Direita() {
  // Lógica para virar a direita
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(2000);
}

void Virar_Esquerda() {
  // Lógica para virar a esquerda
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(2000);
}

void setup() {
  pinMode(BUZZER_PIN, OUTPUT); // Definição do pino como saída
  pinMode(acti, OUTPUT);       // Definição do pino como saída
  pinMode(in1, OUTPUT);        // Definição do pino como saída
  pinMode(in2, OUTPUT);        // Definição do pino como saída
  pinMode(in3, OUTPUT);        // Definição do pino como saída
  pinMode(in4, OUTPUT);        // Definição do pino como saída
}

void loop() {
  digitalWrite(acti, HIGH);  // Ativa os motores

  Dssl_Frente();             // Chamada de subrotina - Deslocamento
  Parada();                  // Chamada de subrotina - Parada
  Retrocesso();              // Chamada de subrotina - Retrocesso
  sonicIntro();              // Chamada de funcao - Intro
  delay(2000);
  sonicRage();               // Chamada de funcao - Raiva
  delay(2000);
  sonicHappy();              // Chamada de funcao - Felicidade
}
/////////////////////// Anotações //////////////////////////
//
// 
//
////////////////////////////////////////////////////////////