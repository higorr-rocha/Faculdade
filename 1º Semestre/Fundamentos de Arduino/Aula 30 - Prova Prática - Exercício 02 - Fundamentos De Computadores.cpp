/*
	comandos via serial
    Serial.begin()    	= inicializa comunicação serial
    Serial.available() 	= verifica se tem byte chegando na porta serial
    Serial.read()		= lê o byte mais recente apontado no buffer de entrada serial
    Serial.print()		= escreve no monitor serial sem formato ASCII
    Serial.write()		= escreve em byte na porta serial
*/

int leds[] = {13,9,4};
byte byteRead;			// inicializa a variável byteRead

void setup(){
  Serial.begin(9600);	// configura comunicação serial com 9600 bps
  for (int cont = 0; cont<=2; cont++)
  {
    pinMode(leds[cont], OUTPUT);
  }
}

void loop(){
  if (Serial.available()) 
  {
    byteRead = Serial.read();
    Serial.print("Byte lido: ");
    Serial.write(byteRead);
    Serial.println();
    
    
    switch(byteRead)
    {
      case '1':
      	digitalWrite(leds[0], !digitalRead(leds[0])); // inverte o estado do LED
        Serial.print("Estado do Led laranja = ");
        Serial.println(digitalRead(leds[0]));
      break;
      
      case '2':
      	digitalWrite(leds[1], !digitalRead(leds[1])); // inverte o estado do LED
        Serial.print("Estado do Led azul = ");
        Serial.println(digitalRead(leds[1]));
      break;
      
      case '3':
     	digitalWrite(leds[2], !digitalRead(leds[2])); // inverte o estado do LED
        Serial.print("Estado do Led verde = ");
        Serial.println(digitalRead(leds[2]));
      break;

      case '4':
        for (int contagem = 0; contagem<=2; contagem++)
        {
            digitalWrite(leds[contagem], HIGH);
        }
        Serial.print("Ligando todos os Leds!");
        break;
      case '5':
      int contagemw = 2;
      while (contagemw <= 2)
      {
        digitalWrite(leds[contagemw], LOW);
        contagemw--;
      }
      Serial.print("Apagando todos os Leds!");
      break;
    }
  }
}