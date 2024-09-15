/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 19
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <math.h>
#include <stdio.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    double c1, c2, c3, c4, c5, c6, c7, c8, c9;
    float temp, umidade, sensacao;
    c1 = -42.379;
    c2 = 2.04901523;
    c3 = 10.14333127;
    c4 = -0.22475541;
    c5 = -6.83783 * pow(10,-3);
    c6 = -5.481717 * pow(10, -2);
    c7 = 1.22874 * pow(10, -3);
    c8 = 8.5282 * pow(10, -4);
    c9 = -1.99 * pow(10, -6);
    printf("Insira a temperatura em °C: ");
    scanf("%f", &temp);
    printf("Insira a umidade do ar (Em porcentagem): ");
    scanf("%f", &umidade);
    getchar();
    temp = (temp * 1.8) + 32;
    sensacao = c1 + (c2 * temp) + (c3 * umidade) + ((c4 * temp) * umidade) + (c5 * pow(temp, 2)) + (c6 * pow(umidade, 2)) + ((c7 * pow(temp, 2)) * umidade) + ((c8 * temp) * pow(umidade, 2)) + ((c9 * pow(temp, 2)) * pow(umidade, 2));
    printf("O índice de calor é de: %.0f°C", (sensacao - 32) * (float) 5 / 9);
    return 0;
}