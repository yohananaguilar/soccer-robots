//////////////////////////////////////////////////////////////////////////////
// Projeto: Introducao a microcontroladores
// Cursos: Engenharia e Tecnologia
// Programa 04 - Configurando a comunicacao serial
// Data: 23/05/2026
// Time: Emerald Strikers
//////////////////////////////////////////////////////////////////////////////

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Olá, meu nome é User111");
  Serial.println("Vamos jogar?");
  delay(1000);
}

/////////////////////// Anotações //////////////////////////
// Para configurar o hardware de comunicação serial é
// necessário definir a taxa de transmissão(Baude Rate)
//
// A sintaxe do comando é: Serial.begin(Valor)
// A taxa de transmissão usual é: 9600 bps(Bit por segundo)
/////////////////////////////////////////////////////////////