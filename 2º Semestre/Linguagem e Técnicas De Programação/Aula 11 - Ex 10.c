/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 10
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int nota, soma = 0, alunos;
    float media;
    printf("Insira a quantidade de alunos: ");
    scanf("%d", &alunos);
    for (int i = 0; i < alunos; i++)
    {
        printf("Insira a nota do %dº aluno (0-10): ", i+1);
        scanf("%d", &nota);
        fflush(stdin);
        soma += nota;
    }
    media = soma / alunos;
    if (media >= 7) printf("Turma Aprovada.");
    else if (media < 7 && media > 5) printf("Turma de Recuperação.");
    else printf("Turma Reprovada.");
    return 0;
}