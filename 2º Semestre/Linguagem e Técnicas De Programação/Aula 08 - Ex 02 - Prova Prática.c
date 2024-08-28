/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 08 - Exercício 02 - Prova Prática
    Descrição   : Recebe nome e ano de nascimento e diz se é ano bissexto.
    Autor       : Higor Rocha
    Data atual  : 24/08/2024
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int ano;
    char nome[100];
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;
    printf("%s, digite o ano em que você nasceu: ", nome);
    scanf("%d", &ano);
    if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
        printf("%s, você nasceu em ano bissexto.", nome);
    }
    else printf("%s, você não nasceu em ano bissexto.", nome);
    return 0;
}