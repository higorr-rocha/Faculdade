/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista - Ex 11
    Descrição   : Solicite ao usuário o nome, idade e sexo (F/M). A cada entrevista, deve perguntar
                  se deseja continuar a informar dados, caso não, apresenta a média de idade das mulheres.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int idade, idade_m, mulher;
    char nome[40], sexo, i;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    do
    {
        printf("Digite seu nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0;
        printf("Insira sua idade: ");
        scanf("%d", &idade);
        getchar();
        printf("Digite seu sexo: ");
        scanf("%c", &sexo);
        getchar();
        if(sexo == 'M' || sexo == 'F'){
            if(sexo == 'F'){
                mulher += 1;
                idade_m += idade;
            }
            printf("Deseja continuar (S/N)? ");
            scanf("%c", &i);
            getchar();
            if(i == 'N') printf("A média de idade das mulheres é: %d.", idade_m/mulher);
        }
        else printf("Sexo deve ser M ou F.\n");
    } while (i != 'N');
    return 0;
}