/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 22
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int celcius, fahren;
    char escolha;
    setlocale(LC_ALL, "Portuguese");
    printf("Escolha a conversão desejada:\nC - Celsius\nF - Fahrenheit\n");
    scanf("%c", &escolha);
    switch (escolha)
    {
        case 'C':
        printf("Digite a temperatura em °C: ");
        scanf("%d", &celcius);
        printf("A temperatura em °F é: %.1f", (celcius * 1.8) + 32);
        break;
        case 'F':
        printf("Digite a temperatura em °F: ");
        scanf("%d", &fahren);
        printf("A temperatura em °C é: %.1f", (fahren - 32) * (float) 5 / 9);
        break;
    }
    return 0;
}