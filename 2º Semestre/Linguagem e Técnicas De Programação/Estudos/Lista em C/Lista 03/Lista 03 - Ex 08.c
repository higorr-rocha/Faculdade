/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista - Ex 08
    Descrição   : Apresente todos os números pares entre 5 e 50. (REPITA ATE)
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int i=5;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Números pares: ");
    do
    {
        if(i % 2 == 0){
            printf("%d",i);
            if(i < 50) printf(",");
            else printf(".");
        } 
        i++;
    } while (i < 51);
    return 0;
}