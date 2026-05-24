//////////////////////////////////////////////////////////////////////////////
// Projeto: Futebol de Robos
// Cursos: Engenharia e Tecnologia
// Programa 03 - Controle de motores com ponte H
// Data: 11/04/2026
// Time: Emerald Strikers
//////////////////////////////////////////////////////////////////////////////

const int acti = 13; // Definicao do pino 13 como habilitador
const int in1 = 11; // Definicao do pino 7 como entrada 1
const int in2 = 9; // Definicao do pino 6 como entrada 2
const int in3 = 7; // Definicao do pino 5 como entrada 3
const int in4 = 6; // Definicao do pino 3 como entrada 4

void Dssl_Frente()
{
  // Logica para deslocamento a frente.
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(2000);
}

void Parada()
{
  // Logica para parar.
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(2000);
}

void Retrocesso()
{
  // Logica para deslocamento em reverso.
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(2000);
}

void Virar_Direita()
{
  // Logica para virar a direita.
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(2000);
}

void Virar_Esquerda()
{
  // Logica para virar a esquerda.
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(2000);
}

void setup()
{
  pinMode(acti, OUTPUT); // Definicao do pino como saida
  pinMode(in1, OUTPUT); // Definicao do pino como saida
  pinMode(in2, OUTPUT); // Definicao do pino como saida
  pinMode(in3, OUTPUT); // Definicao do pino como saida
  pinMode(in4, OUTPUT); // Definicao do pino como saida
}

void loop()
{
  digitalWrite(acti, HIGH); // Ativa os motores

  // Dssl_Frente(); // Chamada de subrotina - Deslocamento
  // Parada(); // Chamada de subrotina - Parada
  Retrocesso(); // Chamada de subrotina - Retrocesso
}

/////////////////////// Anotações //////////////////////////
//
//
//
//
//
/////////////////////////////////////////////////////////////