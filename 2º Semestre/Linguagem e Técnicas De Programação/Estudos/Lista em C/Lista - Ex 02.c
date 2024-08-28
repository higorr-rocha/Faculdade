/*
    Disciplina  : [Linguagem e Técnicas de ProgramaÃ§Ã£o]
    Nome        : Lista - Ex 02
    Descrição   : Pede nome e idade de 3 pessoas. (While Do)
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <string.h>

int main(){
    char nome[100];
    int idade, cont=1;
    while(cont < 4){
        printf("Digite seu Nome: ");
        fgets(nome, 100, stdin);
        nome[strcspn(nome, "\n")] = '\0';
        printf("Insira sua idade: ");
        scanf("%d", &idade);
        getchar();
        cont ++;
    }  
}