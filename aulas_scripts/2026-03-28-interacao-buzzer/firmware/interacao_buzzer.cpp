//////////////////////////////////////////////////////////////////////////////
// Projeto: Introducao a microcontroladores
// Cursos: Engenharia e Tecnologia
// Programa 02 - Interacao com buzzer
// Data: 28/03/2026
// Time: Emerald Strikers
//////////////////////////////////////////////////////////////////////////////

#define BUZZER_PIN 13 // Buzzer pin

void setup()
{
  // Setup do LED, apenas para futuro entendimento.
  // pinMode(13, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop()
{
  // --- PARTE 1 ---
  tone(13, 494);
  delay(125); // Si4
  tone(13, 987);
  delay(125); // Si5
  tone(13, 740);
  delay(125); // Fa#5
  tone(13, 622);
  delay(125); // Re#5
  tone(13, 987);
  delay(62); // Si5 (rapida)
  tone(13, 740);
  delay(187); // Fa#5 (longa)
  tone(13, 622);
  delay(250); // Re#5

  // --- PARTE 2 ---
  tone(13, 523);
  delay(125); // Do5
  tone(13, 1046);
  delay(125); // Do6
  tone(13, 783);
  delay(125); // Sol5
  tone(13, 659);
  delay(125); // Mi5
  tone(13, 1046);
  delay(62); // Do6
  tone(13, 783);
  delay(187); // Sol5
  tone(13, 659);
  delay(250); // Mi5

  // --- PARTE 3 (repete a parte 1) ---
  tone(13, 494);
  delay(125); // Si4
  tone(13, 987);
  delay(125); // Si5
  tone(13, 740);
  delay(125); // Fa#5
  tone(13, 622);
  delay(125); // Re#5
  tone(13, 987);
  delay(62); // Si5
  tone(13, 740);
  delay(187); // Fa#5
  tone(13, 622);
  delay(250); // Re#5

  // --- FINALIZACAO ---
  tone(13, 622);
  delay(62); // Re#5
  tone(13, 659);
  delay(62); // Mi5
  tone(13, 698);
  delay(62); // Fa5
  tone(13, 698);
  delay(62); // Fa5
  tone(13, 740);
  delay(62); // Fa#5
  tone(13, 783);
  delay(62); // Sol5
  tone(13, 783);
  delay(62); // Sol5
  tone(13, 830);
  delay(62); // Sol#5
  tone(13, 880);
  delay(62); // La5
  tone(13, 987);
  delay(125); // Si5

  noTone(13);
  delay(3000); // Espera 3 segundos para recomecar

  /*
  tone(BUZZER_PIN, 5000); // 1000 Hz song
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
  delay(1000); // Wait for 1000 millisecond(s)
  */
}

/////////////////////// Anotações //////////////////////////
//
//
//
//
//
/////////////////////////////////////////////////////////////