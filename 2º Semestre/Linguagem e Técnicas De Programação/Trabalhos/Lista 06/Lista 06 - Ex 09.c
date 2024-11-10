/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 06 - Ex 09
    Autor       : Higor Rocha
    Data atual  : 08/11/2024
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, cont = 0;
    int maior, menor;
    FILE *arquivo;
    arquivo = fopen("numeros.txt", "r");

    while (fscanf(arquivo, "%d", &num) != EOF) 
    {
        if (cont == 0) {maior = num; menor = num;}
        else if (num > maior) maior = num;
        else if (num < menor) menor = num;
        cont++;
    }
    
    printf("O maior número é: %d.\n", maior);
    printf("O menor número é: %d.\n", menor);

    fclose(arquivo);

    return 0;
}