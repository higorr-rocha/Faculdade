/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Prova Prática - Exercício 01
    Autor       : Higor Rocha
    Data atual  : 17/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int estoque, temp;
    char escolha;
    printf("Escolha uma operação:\nA - Adicionar ao estoque\nB - Remover do estoque\nC - Consultar o estoque atual\n");
    scanf("%c", &escolha);
    getchar();
    printf("Informe o estoque inicial: ");
    scanf("%d", &estoque);
    if (escolha == 'A')
    {
        printf("Quanto deseja adicionar ao estoque? ");
        scanf("%d", &temp);
        estoque += temp;
        printf("O estoque atualizado é de: %d", estoque);
    }
    if (escolha == 'B')
    {
        printf("Quanto deseja remover do estoque? ");
        scanf("%d", &temp);
        if (temp > estoque) printf("Valor Inválido! Insira um valor menor que o estoque atual.");
        else
        {
            estoque -= temp;
            printf("O estoque atual é de: %d", estoque);
        }
    }
    if (escolha == 'C')
    {
        printf("O valor atual do estoque é de: %d", estoque);
    }
    return 0;
}