/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Calculadora de Triãngulo Retângulo
    Descrição   : Recebe três número e informa se eles pertencem a um triângulo retângulo.
    Autor       : Higor Rocha
    Data atual  : 13/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num_1, num_2, num_3;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite três números inteiros: ");
    scanf("%d%d%d", &num_1,&num_2,&num_3);
    num_1=num_1*num_1;
    num_2=num_2*num_2;
    num_3=num_3*num_3;
    if(num_1==num_2+num_3 || num_2==num_1+num_3 || num_3==num_1+num_2){
        printf("Esses números pertencem à um Triângulo Retângulo.");
    } else printf("Esses números não pertencem à um Triângulo Retângulo.");
}