//////////////////////////////////////////////////////////////////////////////
// Programa: 02
// Versao: 01
// Projeto: Interacao com buzzer
//
// Data: 28/03/2026
// Time:
//////////////////////////////////////////////////////////////////////////////

#define BUZZER_PIN 13 //BUZZER PIN

void setup()
{
  //pinMode(13, OUTPUT); SETUP DO LED, APENAS PARA FUTURO ENTENDIMENTO
  
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop()
{
  int pausa = 500;
  
  // --- PARTE 1 ---
  tone(13, 494); delay(125); // Si4
  tone(13, 987); delay(125); // Si5
  tone(13, 740); delay(125); // Fá#5
  tone(13, 622); delay(125); // Ré#5
  tone(13, 987); delay(62);  // Si5 (Rápida)
  tone(13, 740); delay(187); // Fá#5 (Longa)
  tone(13, 622); delay(250); // Ré#5

  // --- PARTE 2 ---
  tone(13, 523); delay(125); // Dó5
  tone(13, 1046); delay(125); // Dó6
  tone(13, 783); delay(125); // Sol5
  tone(13, 659); delay(125); // Mi5
  tone(13, 1046); delay(62);  // Dó6
  tone(13, 783); delay(187); // Sol5
  tone(13, 659); delay(250); // Mi5

  // --- PARTE 3 (Repete a Parte 1) ---
  tone(13, 494); delay(125); // Si4
  tone(13, 987); delay(125); // Si5
  tone(13, 740); delay(125); // Fá#5
  tone(13, 622); delay(125); // Ré#5
  tone(13, 987); delay(62);  // Si5
  tone(13, 740); delay(187); // Fá#5
  tone(13, 622); delay(250); // Ré#5

  // --- FINALIZAÇÃO ---
  tone(13, 622); delay(62);  // Ré#5
  tone(13, 659); delay(62);  // Mi5
  tone(13, 698); delay(62);  // Fá5
  tone(13, 698); delay(62);  // Fá5
  tone(13, 740); delay(62);  // Fá#5
  tone(13, 783); delay(62);  // Sol5
  tone(13, 783); delay(62);  // Sol5
  tone(13, 830); delay(62);  // Sol#5
  tone(13, 880); delay(62);  // Lá5
  tone(13, 987); delay(125); // Si5

  noTone(13);
  delay(3000); // Espera 3 segundos para recomeçar
  
  /*
  tone(BUZZER_PIN, 5000); // 1000Hz song
  delay(500);
  tone(BUZZER_PIN, 2500);
  delay(500);
  tone(BUZZER_PIN, 1500);
  delay(500);
  tone(BUZZER_PIN, 750);
  delay(500);
  tone(BUZZER_PIN, 350);
  delay(500);
  tone(BUZZER_PIN, 100);
  delay(500);
  tone(BUZZER_PIN, 5000);
  delay(500);
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s) */
}