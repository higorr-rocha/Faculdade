// C++ code
//
int buzzer = 10; //Define a porta que o Buzzer está.
int freq = 1000; //Define a frequência inicial.

void setup()
{
  pinMode(buzzer,OUTPUT); //Especifica se está Entrando ou Saindo.
}

void loop()
{
  tone(buzzer,freq); //Liga o Buzzer na frequência definida.
  delay(500); //Tempo que em milésimos (ms) que faz a ação acima antes de ir para a próxima linha. 
  noTone(buzzer); //Desliga o Buzzer.
  delay(500); //Tempo que em milésimos (ms) que faz a ação acima antes de reiniciar o loop. 
}
