/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 08 - Exercício 03 - Prova Prática
    Descrição   : Recebe 6 números e diz qual o maior sem usar laço de repetiçao e função.
    Autor       : Higor Rocha
    Data atual  : 24/08/2024
*/

#include <stdio.h>
#include <locale.h>

int maior(int num, int num_m);

int main(){
    int num, num_m;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite o 1º Número: ");
    scanf("%d", &num);
    num_m = num;
    printf("Digite o 2º Número: ");
    scanf("%d", &num);
    num_m = maior(num,num_m);
    printf("Digite o 3º Número: ");
    scanf("%d", &num);
    num_m = maior(num,num_m);
    printf("Digite o 4º Número: ");
    scanf("%d", &num);
    num_m = maior(num,num_m);
    printf("Digite o 5º Número: ");
    scanf("%d", &num);
    num_m = maior(num,num_m);
    printf("Digite o 6º Número: ");
    scanf("%d", &num);
    num_m = maior(num,num_m);
    printf("O maior número é %d.", num_m);
    return 0;
}

int maior(int num, int num_m){
    if (num > num_m) return num;
    return num_m;
}