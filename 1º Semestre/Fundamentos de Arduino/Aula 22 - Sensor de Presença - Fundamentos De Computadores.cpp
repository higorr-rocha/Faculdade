// C++ code
//
int ledRed = 2; //Qual porta está o Led.
int ledGreen = 4; //Qual porta está o Led.
int presPin = 13; //Qual porta está o Sensor de Presença.
int leitura = 0; //Inicia a leitura em 0. 

void setup()
{
 pinMode(ledRed,OUTPUT); //Define a porta entre Entrada/Saída.
 pinMode(ledGreen,OUTPUT); //Define a porta entre Entrada/Saída.
 pinMode(presPin,INPUT); //Define a porta entre Entrada/Saída.
 Serial.begin(9600); //Inicia o monitor serial.
}

void loop()
{
  leitura = digitalRead(presPin); //Faz a leitura do sensor.
  Serial.println(leitura); //Imprime os valores lidos no monitor serial.
  if (leitura == LOW) { //Se achar alguém, acende o led verde e apaga vermelho.
    digitalWrite (ledGreen, HIGH);
    digitalWrite (ledRed, LOW);
  }
  else { //Caso não ache alguém, apaga o led verde e acende o vermelho.
    digitalWrite (ledGreen, LOW);
    digitalWrite (ledRed, HIGH);
  }
}
