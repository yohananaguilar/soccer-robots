/*
Soccer Robots - [Funcionou tá Valendo F.C/Projeto Euzébio]
Nome: Matheus "MatheusDama" Santos Damasceno
Data: 30/março/2026
https://www.tinkercad.com/things/bgFpu8cdCGE-my-todo Link Do projeto no Tinkcad
*/

//--------------------------------------------------------------------

//Definição dos pinos de saída do BUZZER 
#define BUZZER_PIN 13

//Definição dos pinos dos botões
#define BTN_HAPPY 2
#define BTN_SAD 3
#define BTN_GOL 4

//Definições para tipos de erro (Quantidade de bips) para o HARDWARE
#define ERRO_HARDWARE 5 //Erro placa
#define ERRO_CIRCUIT 6 //Erro Circuito
#define ERRO_SENSOR 7 //Erro Sensor
#define LED_ERRO 1 //LED de erro

//--------------------------------------------------------------------

//Segmento sonoro de erro da placa - TODO (Sigla: To Do(Tradução livre do inglês!!!))
void errorSong(int errorKind){
  for(int i = 0; i < errorKind; i++) {
    digitalWrite(LED_ERRO, HIGH);
    tone(BUZZER_PIN, HIGH);
    delay(150);
    
    digitalWrite(LED_ERRO, LOW);
    noTone(BUZZER_PIN);
    delay(150);
  }
  
  tone(BUZZER_PIN, 200, 500);
  delay(1000);
}
    

//Configuração inicial do hardware - lidando
void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  
  pinMode(BTN_HAPPY, INPUT_PULLUP);
  pinMode(BTN_SAD, INPUT_PULLUP);
  pinMode(BTN_GOL, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BTN_HAPPY) == LOW){
    playHappySong();
    delay(200);
  }
  
  if (digitalRead(BTN_SAD) == LOW){
    playSadSong();
    delay(200);
  }
  
  if (digitalRead(BTN_GOL) == LOW){
    playGolSong();
    delay(200);
  }
}

//--------------------------------------------------------------------

//Implementação das melodias(mudanças serão aplicadas)

void playHappySong(){
  // Ode to Joy - Beethoven (versão simplificada e alegre para buzzer)
  
  // Parte principal (repetida)
  tone(BUZZER_PIN, 659, 200); delay(220); // Mi5
  tone(BUZZER_PIN, 659, 200); delay(220); // Mi5
  tone(BUZZER_PIN, 698, 200); delay(220); // Fá5
  tone(BUZZER_PIN, 784, 200); delay(220); // Sol5
  
  tone(BUZZER_PIN, 784, 200); delay(220); // Sol5
  tone(BUZZER_PIN, 698, 200); delay(220); // Fá5
  tone(BUZZER_PIN, 659, 200); delay(220); // Mi5
  tone(BUZZER_PIN, 587, 200); delay(220); // Ré5
  
  tone(BUZZER_PIN, 523, 200); delay(220); // Dó5
  tone(BUZZER_PIN, 523, 200); delay(220); // Dó5
  tone(BUZZER_PIN, 587, 200); delay(220); // Ré5
  tone(BUZZER_PIN, 659, 200); delay(220); // Mi5
  
  tone(BUZZER_PIN, 659, 300); delay(320); // Mi5 (mais longa)
  tone(BUZZER_PIN, 587, 150); delay(160); // Ré5
  tone(BUZZER_PIN, 587, 400); delay(420); // Ré5 (final da frase)

  // Repetição curta para ficar mais animada
  tone(BUZZER_PIN, 659, 200); delay(220); // Mi5
  tone(BUZZER_PIN, 659, 200); delay(220); // Mi5
  tone(BUZZER_PIN, 698, 200); delay(220); // Fá5
  tone(BUZZER_PIN, 784, 400); delay(420); // Sol5

  noTone(BUZZER_PIN);
  delay(150);
}

void playSadSong(){
  // Som de Erro de Sistema - Grave e Direto
  tone(BUZZER_PIN, 220, 300); delay(350); // Lá3 (Nota bem grave)
  tone(BUZZER_PIN, 196, 500); delay(550); // Sol3 (Ainda mais grave)
  
  noTone(BUZZER_PIN);
  delay(300); 
}

void playGolSong(){
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

  noTone(BUZZER_PIN);
  delay(20); // Espera 3 segundos para recomeçar
}
