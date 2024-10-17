/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 03 - Ex 08
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    int num, quant = 0;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d", &num);
    getchar();
    for (int i = 1; i < num + 1; i++)
    {
        if (num % i == 0)
        {
            quant += 1;
        }
    }
    if (quant > 2) printf("Não é primo.");
    else printf("É um número primo.");
}