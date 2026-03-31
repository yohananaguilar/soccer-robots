//////////////////////////////////////////////////////////////////////////////
// Programa: 01
// Versão: 01
// Projeto: Introducao a microcontroladores
//
// Data: 21/03/2026
// Time:
//////////////////////////////////////////////////////////////////////////////

void setup() {
  pinMode(13, OUTPUT); //	Definição do pino 13 como saída
}

void loop() {
  digitalWrite(13, HIGH); //	Ativa a saída digital 13
  delay(1000); //	Temporização de 1s

  digitalWrite(13, LOW); //	Ativa a saída digital 13
  delay(1000); //	Temporização de 1s
}
