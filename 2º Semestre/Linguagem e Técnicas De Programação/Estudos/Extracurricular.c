/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Testes de Loop de Reptição
    Descrição   : Pede nome e idade de 5 pessoas e diz o mais novo.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    char nome[100], nomeN[100];
    int idade, idadeN=150, cont;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    for (cont = 0; cont < 5; cont++)
    {
        printf("Digite seu nome: ");
        fgets(nome, 100, stdin);
        nome[strcspn(nome, "\n")] = '\0';  // Remove o caractere de nova linha no final
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        getchar();                         // Limpa o caractere de nova linha deixado por scanf
        if(idade < idadeN){
            strcpy(nomeN, nome);           // Copia o nome atual para nomeN
            idadeN = idade;
        }   
    }    
    printf("A pessoa mais nova é: %s", nomeN);
}