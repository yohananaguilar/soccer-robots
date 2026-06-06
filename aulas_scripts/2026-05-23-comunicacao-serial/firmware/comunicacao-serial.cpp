//////////////////////////////////////////////////////////////////////////////
// Projeto: Introducao a microcontroladores
// Cursos: Engenharia e Tecnologia
// Programa 05 - Comunicacao Serial
// Data: 23/05/2026
// Time: Emerald Strikers
//////////////////////////////////////////////////////////////////////////////

const int pinoLed = 13; // Define o pino do LED

void setup()
{
  pinMode(pinoLed, OUTPUT); // Configura o pino 13 como saida
  Serial.begin(9600); // Inicia a comunicacao serial
}

void loop()
{
  // Verifica se ha dados disponiveis na porta serial.
  if (Serial.available() > 0) {
    char comando = Serial.read(); // Le o caractere enviado

    // Controla o LED com base no comando.
    if (comando == 'L' || comando == 'l') {
      digitalWrite(pinoLed, HIGH); // Liga o LED
      Serial.println("LED aceso!");
    }
    else if (comando == 'D' || comando == 'd') {
      digitalWrite(pinoLed, LOW); // Desliga o LED
      Serial.println("LED apagado!");
    }
  }
}

/////////////////////// Anotações //////////////////////////
//
//
//
//
//
/////////////////////////////////////////////////////////////