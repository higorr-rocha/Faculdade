// C++ code
//
#include <LiquidCrystal.h> // Adiciona a Biblioteca LCD.

// Inicializa a biblioteca LCD:
LiquidCrystal LCD(12,11,5,4,3,2);

int contador = 1; // Inicia o Contador em 1.

void setup() {
  LCD.begin(16,2); // Inicia o LCD com 16 colunas e 2 linhas.
  LCD.setCursor(5,0); // Posiciona na Coluna 6 e na Linha 1.
  LCD.print("Quero"); // Imprime a mensagem definida.
  LCD.setCursor(6,1); // Posiciona na Coluna 7 e na Linha 2.
  LCD.print("Nota!"); // Imprime a mensagem definida.
}

void loop() {
    if (contador <= 3) { // Caso o contador seja menor ou igual a 5 executa a função.
        LCD.noDisplay(); // Desliga o Display.
        delay(500); // Permanece 1/2 segundo no comando acima.
        LCD.display(); // Liga o Display.
        delay(1000); //Permanece 1 segundo no comando acima.
        contador++; // Aumenta 1 no contador cada vez que é ativada. (contador=contador+1)
    } // Fim do IF.
    else { // Se não executa essa função.
        delay(1000);
        LCD.clear(); // Limpa o Display.
        LCD.setCursor(4,0); 
        LCD.print("Passei!!!");
        delay(1000);
    } // Fim do Else.
    for (int posicao = 0; posicao < 16; posicao++) {
        LCD.scrollDisplayRight();
        delay(250);
    } // Fim do For.
    for (int posicao= 0; posicao < 16; posicao++) {
        LCD.scrollDisplayLeft();
        delay(250);
    } // Fim do For.
} // Fim do "Void Loop".
