//////////////////////////////////////////////////////////
// Projeto Prático: Futebol de Robôs
// Programa: Knuckles (Equidna crossfiteira)
// Versão: 1.0
// Data:20/05/2026
// Time:EMERALD STRIKERS
////////////////////////////////////////////////////////////
// Definicao das notas musicais
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_FS5 740
#define NOTE_G5 783
#define NOTE_GS5 830
#define NOTE_A5 880

const int BUZZER_PIN = 13;
// Definicao do pino 13 como buzzer

void knucklesIntro() {
// Funcao Intro knuckles
  tone(BUZZER_PIN, NOTE_E5, 80);
  delay(90);
  tone(BUZZER_PIN, NOTE_CS5, 70);
  delay(80);
  delay(55);
  tone(BUZZER_PIN, NOTE_D5, 80);
  delay(90);
  delay(165);
 tone(BUZZER_PIN, NOTE_D5, 150);
  delay(165);
  tone(BUZZER_PIN, NOTE_E5, 150);
  delay(165);
  delay(135);
 tone(BUZZER_PIN, NOTE_CS5, 450);
  delay(465);
 tone(BUZZER_PIN, NOTE_A4, 165);
  delay(180);
  delay(75);
 tone(BUZZER_PIN, NOTE_D5, 165);
  delay(180);
  tone(BUZZER_PIN, NOTE_B4, 70);
  delay(80);
  tone(BUZZER_PIN, NOTE_D5, 115);
  delay(130);
tone(BUZZER_PIN, NOTE_B4, 480);
  delay(495);
 tone(BUZZER_PIN, NOTE_A5, 90);
  delay(105);
  tone(BUZZER_PIN, NOTE_E5, 70);
  delay(80);
  tone(BUZZER_PIN, NOTE_CS5, 105);
  delay(120);
  delay(85);
tone(BUZZER_PIN, NOTE_CS5, 150);
  delay(165);
  delay(90);
  tone(BUZZER_PIN, NOTE_CS5, 85);
  delay(100);
  delay(175);
 tone(BUZZER_PIN, NOTE_A5, 135);
  delay(150);
  delay(60);
  tone(BUZZER_PIN, NOTE_G5, 120);
  delay(135);
  tone(BUZZER_PIN, NOTE_D5, 120);
  delay(135);
  tone(BUZZER_PIN, NOTE_GS5, 120);
  delay(135);
 tone(BUZZER_PIN, NOTE_D5, 90);
  delay(105);
  tone(BUZZER_PIN, NOTE_B4, 105);
  delay(120);
  tone(BUZZER_PIN, NOTE_D5, 300);
  delay(315);
 tone(BUZZER_PIN, NOTE_E5, 125);
  delay(140);
  tone(BUZZER_PIN, NOTE_CS5, 105);
  delay(120);
  tone(BUZZER_PIN, NOTE_E5, 115);
  delay(130);
  tone(BUZZER_PIN, NOTE_A5, 50);
  delay(60);
  tone(BUZZER_PIN, NOTE_CS5, 185);
  delay(200);
tone(BUZZER_PIN, NOTE_E5, 245);
  delay(260);
  tone(BUZZER_PIN, NOTE_A5, 80);
  delay(90);
  tone(BUZZER_PIN, NOTE_DS5, 50);
  delay(60);
  tone(BUZZER_PIN, NOTE_C5, 85);
  delay(100);
  tone(BUZZER_PIN, NOTE_GS5, 195);
  delay(210);
  tone(BUZZER_PIN, NOTE_A5, 80);
  delay(90);
tone(BUZZER_PIN, NOTE_CS5, 135);
  delay(150);
  tone(BUZZER_PIN, NOTE_E5, 50);
  delay(60);
  tone(BUZZER_PIN, NOTE_FS5, 60);
  delay(70);
  tone(BUZZER_PIN, NOTE_G5, 80);
  delay(90);
  tone(BUZZER_PIN, NOTE_DS5, 60);
  delay(70);
  tone(BUZZER_PIN, NOTE_AS4, 205);
  delay(220);
  tone(BUZZER_PIN, NOTE_DS5, 200);
  delay(200);
 noTone(BUZZER_PIN);
}

void knucklesRage() {	
//Funcao expressao de raiva knuckles 
  tone(BUZZER_PIN, 150, 120); delay(150);
  tone(BUZZER_PIN, 130, 120); delay(150);
  tone(BUZZER_PIN, 110, 200); delay(250);
  tone(BUZZER_PIN, 100, 400); delay(450);
  noTone(BUZZER_PIN);
}

void knucklesHappy() {	
//Funcao expressao de felicidade knuckles
  tone(BUZZER_PIN, 880, 80);  delay(100);
  tone(BUZZER_PIN, 988, 80);  delay(100);
  tone(BUZZER_PIN, 1047, 80); delay(100);
  tone(BUZZER_PIN, 1319, 80); delay(100);
  tone(BUZZER_PIN, 1568, 200); delay(250);
  noTone(BUZZER_PIN);
}

const int acti=12;// Definição do pino 12 como habilitador
const int in1=11; // Definição do pino 11 como entrada 1
const int in2=9; // Definição do pino 09 como entrada 2
const int in3=6; // Definição do pino 08 como entrada 3
const int in4=7; // Definição do pino 07 como entrada 4

void Dssl_Frente(){
//Lógica para deslocamento a frente
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
delay(2000); }

void Parada(){
// Lógica para parar
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
delay(2000);
}

void Retrocesso(){
//Lógica para deslocamento para reverso
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
delay(2000);
}

void Virar_Direita(){
//Lógica para virar a direita
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
delay(2000); }

void Virar_Esquerda(){
//Lógica para virar a esquerda
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
delay(2000); }


void setup()
{
pinMode(BUZZER_PIN, OUTPUT);// Definição do pino como saída
pinMode(acti, OUTPUT);// Definição do pino como saída
pinMode(in1, OUTPUT); // Definição do pino como saída
pinMode(in2, OUTPUT); // Definição do pino como saída
pinMode(in3, OUTPUT); // Definição do pino como saída
pinMode(in4, OUTPUT); // Definição do pino como saída
 
}

void loop ()
{
digitalWrite(acti, HIGH); // Ativa os motores

Dssl_Frente();// Chamada de subrotina - Deslocamento
Parada();// Chamada de subrotina - Parada
Retrocesso();//Chamada de subrotina - Retrocesso
knucklesIntro();//Chamada de funcao - Intro
delay(2000);  
knucklesRage();//Chamada de funcao - Raiva
delay(2000);
knucklesHappy();//Chamada de funcao - Felicidade


}
/////////////////////// Anotações //////////////////////////
//
// 
//
////////////////////////////////////////////////////////////