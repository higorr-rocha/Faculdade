/*
    Disciplina  : [Linguagem e Técnicas de ProgramaÃ§Ã£o]
    Nome        : Lista - Ex 03
    Descrição   : Pede nome e idade de 3 pessoas. (For)
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <string.h>

int main(){
    char nome[100];
    int idade, i;
    for(i = 1; i < 4; i++){
        printf("Digite seu Nome: ");
        fgets(nome, 100, stdin);
        nome[strcspn(nome, "\n")] = '\0';
        printf("Insira sua idade: ");
        scanf("%d", &idade);
        getchar();
    }  
}