byte leds[] = {5,6,7,8,9,10,11,12,13}; // Inicia o vetor "Leds", defininindo as portas.

int cont = 0;
void setup() {
	for (cont = 0; cont <= 8; cont++) // Inicia uma contagem definindo as portas de 0 a 8.
    {
       pinMode(leds[cont],OUTPUT);
    }
  
}

void loop() {
    for (int porta = 0; porta <= 8; porta++) // Inicia um loop, acendendo os leds de 0 a 8.
    {
        digitalWrite(leds[porta],HIGH);
        delay(300);
        digitalWrite(leds[porta],LOW);
        delay(300);
    }
    for (int porta = 8; porta >= 0; porta--) // Inicia um loop, acendendo os leds de 8 a 0.
    {
        digitalWrite(leds[porta],HIGH);
        delay(300);
        digitalWrite(leds[porta],LOW);
        delay(300);
    }
}
