/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 12
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int base, add, km;
    printf("Informe a taxa base do aluguel: ");
    scanf("%d", &base);
    fflush(stdin);
    printf("Informe a taxa adicional: ");
    scanf("%d", &add);
    fflush(stdin);
    printf("Informe a quilometragem percorrida: ");
    scanf("%d", &km);
    fflush(stdin);
    printf("O valor total é de: %.2f", (float)(add * km) + base);
    return 0;
}