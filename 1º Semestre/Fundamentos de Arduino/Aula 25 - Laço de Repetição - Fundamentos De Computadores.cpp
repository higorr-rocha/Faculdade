
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    for(int cont = 0; cont<=10;cont++) // Inicia a variável "Cont" e soma 1 nela até 10.
    { // Inicia o laço de repetição.
      Serial.println(cont); // Insere o valor da contagem no monitor serial.
      delay(300);  
    } // Finaliza o laço de repetição.

    int contw = 0; // Inicia a variável "Contw" (Contagem do While) e soma 1 nela até 10.
    while (contw <= 10) 
    { // Enquanto a variável for menor ou igual a 10 faz isso:
        Serial.println("While: ");
        Serial.println(contw);
        delay(300);
        contw++;
    }
    for(int cont = 10; cont >=0; cont--) // Inicia a variável "Cont" e subtrai 1 nela até 0.
    {
        Serial.println(cont);
        delay(300);
    }
    int contwm = 10; // Inicia a variável "Contwm" (Contagem do While Menos) e subtrai 1 nela até 0.
    while (contwm >=0) 
    {
        Serial.println("While: ");
        Serial.println(contwm);
        delay(300);
        contwm--;
    }
}
