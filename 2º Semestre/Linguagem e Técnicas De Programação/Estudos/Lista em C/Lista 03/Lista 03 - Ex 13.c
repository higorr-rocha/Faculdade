/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista - Ex 11
    Descrição   : Solicita o nome completo e a idade de 5 pessoas. 
                  No final, apresente o nome da pessoa mais velha e mais jovem.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int idade, idade_v, idade_n, i;
    char nome[40], nome_v[40], nome_n[40];
    setlocale(LC_ALL, "Portuguese-Brazilian");
    for (i = 1; i < 6; i++)
    {
        printf("Digite o nome da %dº pessoa: ",i);
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0;
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        getchar();
        if(idade > idade_v) {idade_v = idade; strcpy(nome_v,nome);}
        else if(idade < idade_n) {idade_n = idade; strcpy(nome_n,nome);}
    }
    printf("%s é o mais velho.\n", nome_v);
    printf("%s é o mais novo.\n", nome_n);
    return 0;
}