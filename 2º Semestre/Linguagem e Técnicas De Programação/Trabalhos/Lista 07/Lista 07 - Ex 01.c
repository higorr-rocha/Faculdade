/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 07 - Ex 01
    Autor       : Higor Rocha
    Data atual  : 15/11/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, y, num[3][3] = {1,2,3,4,5,6,7,8,9};
    float maior = 0, menor = 100, soma = 0, notas[4];
    char alunos[4][40], nome[10][2][40];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", num[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº nome: ", i+1);
        scanf("%s", nome[i][0]);
        printf("Digite o %dº sobrenome: ", i+1);
        scanf("%s", nome[i][1]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%s %s\n", nome[i][0], nome[i][1]);
    }
    
    for (int i = 0; i < 4; i++)
    {
        printf("Digite o %dº nome: ", i+1);
        scanf("%s", alunos[i]);
        printf("Insira a nota: ");
        scanf("%f", &notas[i]);

        soma += notas[i];

        if (notas[i] > maior)
        {
            maior = notas[i];
            x = i;
        }
        else if (notas[i] < menor)
        {
            menor = notas[i];
            y = i;
        }
    }
    printf("A média das notas é: %.2f\n", soma/4);
    printf("A maior nota é do aluno: %s\nNota: %.2f\n", alunos[x], maior);
    printf("A menor nota é do aluno: %s\nNota: %.2f\n", alunos[y], menor);

    return 0;
}