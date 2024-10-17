/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 02 - Ex 08
    Autor       : Higor Rocha
    Data atual  : 16/10/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num, quant = 0;
    float impar;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    for(int i = 1; i < 11; i++)
    {
        printf("Digite o %dº número: ",i);
        scanf("%d", &num);
        if(num % 2 != 0){
            printf("Ímpar.\n");
            impar += num;
            quant += 1;
        }
        else printf("Par.\n");
    }
    printf("A média dos %d números ímpares é: %.2f", quant, impar/10);
    return 0;
}