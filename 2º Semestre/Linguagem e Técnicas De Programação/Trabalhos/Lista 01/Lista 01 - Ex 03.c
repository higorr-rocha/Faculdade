/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 03
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    int salar;
    char aval;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o salarário: ");
    scanf("%d", &salar);
    getchar();
    printf("Digite a avaliação do funcionário: ");
    scanf("%c", &aval);
    switch (aval)
    {
    case 'A':
        salar += salar * 0.15;
        break;
    case 'B':
        salar += salar * 0.10;
        break;
    case 'C':
        salar += salar * 0.05;
    default:
        break;
    }
    printf("O salarário será de: %d.", salar);
    return 0;
}