/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Exercício   : PILHA 1
    Nome        : Ex 09
    Autor       : Higor Rocha
    Data        : 18/06/2025
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct node{
    int valor;
    struct node *proximo;
} no;

no *topo = NULL;

int gerador(no *topo) {
    int temp, unico;
    no *aux;

    if (topo == NULL) {
        return rand() % 101;
    }

    do {
        temp = rand() % 101;
        unico = 1;
        aux = topo;
        while (aux != NULL && unico) {
            if (aux->valor == temp) {
                unico = 0;
            }
            aux = aux->proximo;
        }
    } while (!unico);

    return temp;
}

void push() {
    no *novo = malloc(sizeof(no));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        return;
    }
    novo->valor = gerador(topo);
    novo->proximo = topo;
    topo = novo;
}

void imprimir() {
    int i = 0;
    no *aux = topo;
    while (aux != NULL) {
        if (i < 9)
            printf("  %dº Valor: %d\n", i + 1, aux->valor);
        else
            printf(" %dº Valor: %d\n", i + 1, aux->valor);
        aux = aux->proximo;
        i++;
    }
}

int main () {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    no *aux;

    for (int i = 0; i < 10; i++) {
        push();
    }

    printf("Pilha:\n");
    imprimir();
    
    while (topo != NULL) {
        aux = topo;
        topo = topo->proximo;
        free(aux);
    }

    return 0;
}
