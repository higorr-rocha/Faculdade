/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 03 - Ex 06
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int alunos;
    float media;
    setlocale(LC_ALL, "Portuguese");
    printf("Qual a quantidade de alunos? ");
    scanf("%d", &alunos);
    for (int i = 1; i < alunos + 1; i++)
    {
        printf("Digite a altura do %dº aluno (Em CM): ", i);
        scanf("%f", &media);
    }
    printf("A média de altura dos alunos é de: %.2fcm", media / alunos);
}