//////////////////////////////////////////////////////////////////////////////
// Projeto Prático: Futebol de Robôs
// Programa: Controle de motores com ponte H
// Versão: 1.0
// Projeto: Introdução a movimentação do robo com motores ponte H
//
// Data: 11/04/2026
// Time: Emerald Strikers
//////////////////////////////////////////////////////////////////////////////

const int acti=13;// Definição do pino 13 como habilitador
const int in1=11; // Definição do pino 7 como entrada 1
const int in2=9;  // Definição do pino -6 como entrada 2
const int in3=7;  // Definição do pino -5 como entrada 3
const int in4=6;  // Definição do pino -3 como entrada 4

void Dssl_Frente(){
  //Lógica para deslocamento a frente
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
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
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
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
  pinMode(acti, OUTPUT);// Definição do pino como saída
  pinMode(in1, OUTPUT); // Definição do pino como saída
  pinMode(in2, OUTPUT); // Definição do pino como saída
  pinMode(in3, OUTPUT); // Definição do pino como saída
  pinMode(in4, OUTPUT); // Definição do pino como saída
 
}

void loop ()
{
  digitalWrite(acti, HIGH); // Ativa os motores
 
  // Dssl_Frente();// Chamada de subrotina - Deslocamento
 
  //Parada();// Chamada de subrotina - Parada
  Retrocesso();//Chamada de subrotina - Retrocesso
 
 
 
}
/////////////////////// Anotações //////////////////////////
//
// Insira aqui o que você aprendeu hoje ou é importante
// para que o código funcione.
//
/////////////////////////////////////////////////////////////