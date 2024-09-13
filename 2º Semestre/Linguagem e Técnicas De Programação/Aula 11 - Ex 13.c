/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 13
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int pontos;
    printf("Informe a quantidade de pontos alcançados pelo funcionário: ");
    scanf("%d", &pontos);
    if (pontos > 300) printf("Ele alcançou o nível 3 de premiação.");
    else if (pontos > 200 && pontos <= 300) printf("Ele alcançou o nível 2 de premiação.");
    else if (pontos > 100 && pontos <= 200) printf("Ele alcançou o nível 1");
    else printf("Ele não alcançou um nível de premiação.");
    return 0;
}