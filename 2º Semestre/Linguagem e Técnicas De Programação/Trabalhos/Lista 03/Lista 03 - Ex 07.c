/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 03 - Ex 07
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int celcius, fahren;
    char escolha, continuar;
    setlocale(LC_ALL, "Portuguese");
    do
    {
        printf("Escolha a conversão desejada:\nC - Celsius\nF - Fahrenheit\n");
        scanf(" %c", &escolha);
        switch (escolha)
        {
            case 'C':
            printf("Digite a temperatura em °C: ");
            scanf("%d", &celcius);
            printf("A temperatura em °F é: %.1f\n", (celcius * 1.8) + 32);
            break;
            case 'F':
            printf("Digite a temperatura em °F: ");
            scanf("%d", &fahren);
            printf("A temperatura em °C é: %.1f\n", (fahren - 32) * (float) 5 / 9);
            break;
        }
        printf("Deseja converter novamente(S/N)? ");
        scanf(" %c", &continuar);
    }while(continuar != 'N');
    return 0;
}