/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Exercício   : PILHA 1
    Nome        : Ex 08
    Autor       : Higor Rocha
    Data        : 18/06/2025
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char *nome;
    int idade;
    struct node *proximo;
}no;

no *topo = NULL;

void push() {
    int idade;
    char nome[60];
    no *novo = malloc(sizeof(no));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        return;
    }
    printf("Nome: ");
    fgets(nome, 60, stdin);
    nome[strcspn(nome, "\n")] = 0;
    novo->nome = malloc(strlen(nome) + 1);
    strcpy(novo->nome, nome);
    printf("Idade: ");
    scanf("%d", &idade);
    novo->idade = idade;
    novo->proximo = topo;
    topo = novo;
    printf("\nEmpilhado com sucesso!\n\n");
}

void pop() {
    if (topo == NULL) {
        printf("Pilha vazia.\n");
        return;
    }
    no *temp = topo;
    topo = temp->proximo;
    free(temp->nome);
    free(temp);
    printf("Desempilhado com sucesso!\n\n");
}

void imprimir() {
    if (topo == NULL) {
        printf("\nPilha vazia.\n\n");
        return;
    }
    no *aux = topo;
    while (aux != NULL) {
        printf("Nome: %s, Idade: %d\n", aux->nome, aux->idade);
        aux = aux->proximo;
    }
    printf("\n");
}

int quantidade() {
    int cont = 0;
    no *aux = topo;
    while (aux != NULL) {
        cont++;
        aux = aux->proximo;
    }
    return cont;
}

int main () {
    setlocale(LC_ALL, "Portuguese");

    int opcao = -1;

    while (opcao != 0) {
        printf("Menu de Opções:\n");
        printf("1. Empilhar\n");
        printf("2. Desempilhar \n");
        printf("3. Listar\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        fflush(stdin);
        printf("\n");

        switch (opcao)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            imprimir();
            break;
        case 0:
            printf("Saindo...\n");
            while (topo != NULL) {
                pop();
            }
            break;
        default:
            printf("Opção inválida!\n");
        }
    }

    return 0;
}
