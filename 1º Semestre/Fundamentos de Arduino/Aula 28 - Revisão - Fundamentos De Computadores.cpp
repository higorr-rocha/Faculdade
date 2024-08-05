/*
    comando Serial /If/Switch - Case
    Serial.begin()          // Inicia o monitor serial.
    Serial.print/println    // Imprime uma mesagem na mesma linha/pula linha.
    Serial.available()      // Verifica se algum byte chegou na entrada do monitor.
    Serial.read()           // Lê o byte da entrada.
    Serial.write()          // Imprime o byte lido no monitor.
*/

/*
    const int led_laranja = 13; // Define uma constante invariável.
    int led_laranja = 13; // Define uma variável que aceita mudanças de valor.
*/

const int led_laranja = 13;
const int led_azul = 9;
const int led_verde = 4;
byte leiaByte;

void setup() {
    Serial.begin(9600); // Inicializa o monitor serial.
    pinMode(led_laranja, OUTPUT); // Configura a porta como saída.
    pinMode(led_azul, OUTPUT); // Configura a porta como saída.
    pinMode(led_verde, OUTPUT); // Configura a porta como saída.
};

void loop() {
    if (Serial.available()) { // Verifica se chegou algum valor.
        leiaByte = Serial.read(), //Faz a leitura do valor que chegou.
        Serial.print("Valor Digitado: "); // Imprime o valor no monitor sem pular linha.
        Serial.write(leiaByte);
        Serial.println(); // Pula linha depois de enviar a mensagem.
/*      if (leiaByte == '1') {
            digitalWrite (led_laranja, HIGH);
            delay(300);
            digitalWrite (led_laranja, LOW);
        }
        else {
            digitalWrite (led_azul, HIGH);
            delay(300);
            digitalWrite (led_azul, LOW);
        }
*/
        switch(leiaByte) { // Compara o valor da variável.
            case '1': // Caso seja 1 acende ou apaga o Led Laranja.
                digitalWrite (led_laranja, !digitalRead(led_laranja)); // Troca o valor da porta (!).
                break;
            case '2': // Caso seja 1 acende ou apaga o Led Azul.
                digitalWrite (led_azul, !digitalRead(led_azul)); // Troca o valor da porta (!).
                break;
            case '3': // Caso seja 1 acende ou apaga o Led Verde.
                digitalWrite (led_verde, !digitalRead(led_verde)); // Troca o valor da porta (!).
                break;
        }
    };
};
