// C++ code
//
int ledRed = 2; //Qual porta está o Led.
int ledGreen = 3; //Qual porta está o Led.
int presPin = 13; //Qual porta está o Sensor de Presença.
int buzzer = 9; //Qual porta está o Buzzer.
int leitura = 0; //Inicio a leitura em 0. 
int freq = 0; //Inicia a frequência.

void setup()
{
 pinMode(ledRed,OUTPUT); //Define a porta entre Entrada/Saída.
 pinMode(ledGreen,OUTPUT); //Define a porta entre Entrada/Saída.
 pinMode(presPin,INPUT); //Define a porta entre Entrada/Saída.
 pinMode(buzzer,OUTPUT);
 Serial.begin(9600); //Iniciar a leitura.
}

void loop()
{
  leitura = digitalRead(presPin); //Faz a leitura do sensor.
  Serial.println(leitura); //Imprime os valores lidos no monitor.
  if (leitura == LOW) { //Se não achar ninguem, acende o led verde e apaga vermelho.
    digitalWrite (ledGreen, HIGH);
    digitalWrite (ledRed, LOW);
    noTone(buzzer);
  }
  else { //Caso ache alguém, apaga o led verde, acende o vermelho e toca a campainha.
    digitalWrite (ledGreen, LOW);
    digitalWrite (ledRed, HIGH);
    tone(buzzer,freq=554);
    delay(250);
    tone(buzzer,freq=440);
    delay(500);
    noTone(buzzer);
    delay(2000);
  }
}
