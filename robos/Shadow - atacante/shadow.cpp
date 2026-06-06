//////////////////////////////////////////////////////////
// Projeto Prático: Futebol de Robôs
// Programa: Shadow (Emo Veloz)
// Versão: 1.0
// Data:20/05/2026
// Time:EMERALD STRIKERS
////////////////////////////////////////////////////////////
// Definicao das notas musicais

const int BUZZER_PIN = 13;
// Definicao do pino 13 como buzzer

void shadowIntro(){
// Funcao Intro shadow
  for (int freq = 150; freq <= 500; freq += 50) {
    tone(BUZZER_PIN, freq);
    delay(50);
  }
  noTone(BUZZER_PIN);

  delay(200);

  for (int freq = 1200; freq >= 200; freq -= 150) {
    tone(BUZZER_PIN, freq);
    delay(30);
  }
  noTone(BUZZER_PIN);
  tone(BUZZER_PIN, 250);
  delay(700);
  noTone(BUZZER_PIN);

  delay(200);

  tone(BUZZER_PIN, 500);
  delay(250);
  noTone(BUZZER_PIN);

  delay(100);

  tone(BUZZER_PIN, 650);
  delay(200);
  noTone(BUZZER_PIN);

  delay(100);

  tone(BUZZER_PIN, 800);
  delay(400);
  noTone(BUZZER_PIN);

  delay(200);

  for (int i = 0; i < 3; i++) {
    tone(BUZZER_PIN, 700);
    delay(120);
    noTone(BUZZER_PIN);
    delay(80);
  }
}

void shadowRage() {
//Funcao expressao de raiva shadow
  tone(BUZZER_PIN, 110, 200); delay(220);
  tone(BUZZER_PIN, 90, 200);  delay(220);
  noTone(BUZZER_PIN);         delay(150);
  tone(BUZZER_PIN, 65, 500);  delay(550);
  noTone(BUZZER_PIN);
}

void shadowHappy() {
//Funcao expressao de felicidade shadow
 tone(BUZZER_PIN, 1200, 60); delay(80);
  tone(BUZZER_PIN, 1400, 60); delay(80);
  tone(BUZZER_PIN, 1600, 60); delay(80);
  noTone(BUZZER_PIN);         delay(80);
  tone(BUZZER_PIN, 1800, 100); delay(120);
  tone(BUZZER_PIN, 1800, 100); delay(120);
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
shadowIntro();//Chamada de funcao - Intro
delay(2000);
shadowRage();//Chamada de funcao - Raiva
delay(2000);
shadowHappy();//Chamada de funcao - Felicidade


}
/////////////////////// Anotações //////////////////////////
//
//
//
////////////////////////////////////////////////////////////