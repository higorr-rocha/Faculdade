// C++ code
//
int portab = 10;
int portap = A0; //Mostra em qual porta está (analógica).
int freq = 1000;

void setup()
{
  Serial.begin(9600); //Mostra que uma leitura será realizada e define a frequência.
  pinMode(portab,OUTPUT);
  pinMode(portap,INPUT);
}

void loop()
{
  freq = analogRead(portap); //Inicia a leitura da Porta Analógica.
  Serial.println(freq); //Imprime os valores lidos no monitor.
  tone(portab,freq); //Define o funcionamento do Buzzer.
  delay(1000);
  noTone(portab);
  delay (1000);
}
