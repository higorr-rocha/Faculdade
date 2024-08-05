// Biblioteca LCD
#include <LiquidCrystal.h>

// Inicializa a biblioteca LCD
LiquidCrystal LCD(12,11,5,4,3,2);

int poten = A1;
int contagem = 0;

void setup() {
    Serial.begin(9600);
    LCD.begin(16,2);
    pinMode(poten, INPUT);
}

void loop() {
    contagem = analogRead(poten);
    if (contagem<=500) {
        LCD.begin(16,2);
        LCD.setCursor(5,0);
        LCD.print("Pratica");
        LCD.setCursor(1,1);
        LCD.print("Baixo Movimento");
        Serial.println("Baixo Movimento");
        delay(1000);
    }
    else {
        LCD.begin(16,2);
        LCD.setCursor(5,0);
        LCD.print("Pratica");
        LCD.setCursor(1,1);
        LCD.print("Alto Movimento");
        Serial.println("Alto Movimento");
        delay(1000);
    }
}