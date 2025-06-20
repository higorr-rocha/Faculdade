/*
    Disciplina  : [Estruturas De Dados]
    Nome        : Exercício 01
    Autor       : Higor Rocha
    Data atual  : 07/05/2025
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int dado;
    struct no *prox;
}node;
node *topo=NULL;

void menu ();
void push (int item);
void pop ();
void imprimir();

int main () {
    setlocale(LC_ALL, "Portuguese");

    menu();

    return 0;
}

void menu () {
    int opcao, valor;

    while (1)
    {
        printf(" Menu\n 1 - Empilhar\n 2 - Desempilhar\n 3 - Imprimir\n 4 - Sair\n");
        printf(" Escolha a opção desejada (0-4): ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("\n");
            printf("Insira o valor: ");
            scanf("%d", &valor);
            push(valor);
            printf("\n");
            break;
        case 2:
            printf("\n");
            pop();
            printf("\n");
            break;
        case 3:
            printf("\n");
            imprimir();
            printf("\n");
            break;
        case 4:
            return;
        }
    }
}

void push (int item) {
    node *aux;
    aux = malloc(sizeof(node));
    if (aux == NULL) {
        printf("Erro ao alocar memória\n");
        return;
    }
    aux -> dado = item;
    aux -> prox = topo;
    topo = aux;
    printf("Valor: %d, empilhado com sucesso.\n", item);
}

void pop () {
    node *aux;
    if (topo == NULL) {
        printf("Pilha vazia!\n");
    } else {
        aux = topo;
        topo = topo -> prox;
        printf("Valor: %d, desempilhado com sucesso.\n", aux -> dado);
        free(aux);
    }
}

void imprimir() {
    node *aux;
    aux = topo;
    if (topo == NULL) {
        printf("Pilha vazia!\n");
    } else {
        while (aux != NULL) {
            printf("%d ", aux -> dado);
            aux = aux -> prox;
        }
        printf ("\n");
    }
}
