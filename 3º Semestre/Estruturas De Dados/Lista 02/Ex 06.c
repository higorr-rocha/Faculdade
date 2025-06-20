/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Exercício   : PILHA 1
    Nome        : Ex 06
    Autor       : Higor Rocha
    Data        : 18/06/2025
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char nome[30];
    int idade;
    struct node *proximo;
}no;

void push(no **topo) {
    int idade;
    char nome[30];
    no *novo = malloc(sizeof(no));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        return;
    }
    printf("Nome: ");
    fgets(nome, 30, stdin);
    nome[strcspn(nome, "\n")] = 0;
    printf("Idade: ");
    scanf("%d", &idade);
    strcpy(novo->nome, nome);
    novo->idade = idade;
    novo->proximo = *topo;
    *topo = novo;
    printf("Empilhado com sucesso!\n\n");
}

void pop(no **topo) {
    if (*topo == NULL) {
        printf("Pilha vazia.\n");
        return;
    }
    no *temp = *topo;
    *topo = temp->proximo;
    free(temp);
    printf("Desempilhado com sucesso!\n\n");
}

void imprimir(no *topo) {
    if (topo == NULL) {
        printf("Pilha vazia.\n\n");
        return;
    }
    no *aux = topo;
    while (aux != NULL) {
        printf("Nome: %s, Idade: %d\n", aux->nome, aux->idade);
        aux = aux->proximo;
    }
    printf("\n");
}

int main () {
    setlocale(LC_ALL, "Portuguese");

    no *topo = NULL;
    int opcao;

    while (opcao != 0) {
        printf("Menu de Opções:\n");
        printf("1. Empilhar\n");
        printf("2. Desempilhar \n");
        printf("3. Listar\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        printf("\n");
        fflush(stdin); 

        switch (opcao)
        {
        case 1:
            push(&topo);
            break;
        case 2:
            pop(&topo);
            break;
        case 3:
            imprimir(topo);
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
        }
    }

    return 0;
}