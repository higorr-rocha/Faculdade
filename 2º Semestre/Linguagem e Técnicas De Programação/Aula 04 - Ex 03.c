/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Calculadora de Médias
    Descrição   : Recebe quatro números e informa o resultado da média escolhida. 
                  Categorizando entre aprovado e reprovado.
    Autor       : Higor Rocha
    Data atual  : 09/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    float num_1, num_2, num_3, num_4, resul;
    char media;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Escolha a média desejada:\nA - Média Aritmética\nB - Média Ponderada\nC - Média Harmônica\n");
    scanf("%c", &media);
    printf("Digite o 1º Número: ");
    scanf("%f", &num_1);
    printf("Digite o 2º Número: ");
    scanf("%f", &num_2);
    printf("Digite o 3º Número: ");
    scanf("%f", &num_3);
    printf("Digite o 4º Número: ");
    scanf("%f", &num_4);
    if(media == 'A'){
        resul = (num_1 + num_2 + num_3 + num_4)/4;
    }
    if(media == 'B'){
        resul = num_1*2+num_2*3+num_3*5+num_4*10/20;
    }
    if(media == 'C'){
        resul = (num_1*num_2*num_3*num_4)/(num_1+num_2+num_3+num_4);
    }
    if(resul >= 6){
        printf("O resultado da média é: %.2f\nParabéns! Você foi Aprovado.", resul);
    }else{
        printf("O resultado da média é: %.2f\nSinto Muito! Você foi Reprovado.", resul);
    }
    return 0;
}