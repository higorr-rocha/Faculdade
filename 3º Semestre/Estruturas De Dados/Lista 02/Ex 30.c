/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Exerc�cio   : Separa��o de Lista em Pares e �mpares
    Nome        : Ex 30
    Autor       : Higor Rocha
    Data        : 19/06/2025
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
    int dado;
    struct node *proximo;
} no;

void insere_no_fim(no **topo, int valor) {
    no *novo = malloc(sizeof(no));
    if (novo == NULL) {
        printf("Erro ao alocar memoria.\n");
        return;
    }
    novo->dado = valor;
    novo->proximo = NULL;

    if (*topo == NULL) {
        *topo = novo;
    } else {
        no *ultimo = *topo;
        while (ultimo->proximo != NULL) {
            ultimo = ultimo->proximo;
        }
        ultimo->proximo = novo;
    }
}

void imprime_lista(no *topo, const char *titulo) {
    printf(" --- %s ---\n", titulo);
    if (topo == NULL) {
        printf(" Lista vazia.\n");
    } else {
        no *aux = topo;
        printf(" ");
        while (aux != NULL) {
            printf("%d -> ", aux->dado);
            aux = aux->proximo;
        }
        printf("NULL\n");
    }
    printf("\n");
}

void libera_lista(no **topo) {
    no *aux;
    while (*topo != NULL) {
        aux = *topo;
        *topo = (*topo)->proximo;
        free(aux);
    }
}

void separa_pares_impares(no *original, no **pares, no **impares) {
    no *aux = original;
    while (aux != NULL) {
        if (aux->dado % 2 == 0) {
            insere_no_fim(pares, aux->dado);
        } else {
            insere_no_fim(impares, aux->dado);
        }
        aux = aux->proximo;
    }
}

int main() {
    no *lista_original = NULL;
    no *lista_pares = NULL;
    no *lista_impares = NULL;

    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    printf("Gerando 10 n�s aleat�rios (0 a 50) sem repeti��o...\n\n");
    int numeros_usados[51] = {0}; // Vetor para garantir que n�o haja repeti��o
    int contador = 0;

    while (contador < 10) {
        int num_aleatorio = rand() % 51; // Gera n�mero entre 0 e 50
        if (numeros_usados[num_aleatorio] == 0) {
            insere_no_fim(&lista_original, num_aleatorio);
            numeros_usados[num_aleatorio] = 1; // Marca o n�mero como usado
            contador++;
        }
    }

    // 1. Mostra a lista original criada
    imprime_lista(lista_original, "LISTA ORIGINAL");

    // 2. Executa a fun��o principal do exerc�cio
    separa_pares_impares(lista_original, &lista_pares, &lista_impares);
    printf("Separando a lista em pares e impares...\n\n");

    // 3. Mostra as duas novas listas
    imprime_lista(lista_pares, "LISTA DE PARES");
    imprime_lista(lista_impares, "LISTA DE IMPARES");

    // 4. Libera a mem�ria de todas as listas ao final
    printf("Limpando a mem�ria...\n");
    libera_lista(&lista_original);
    libera_lista(&lista_pares);
    libera_lista(&lista_impares);
    printf("Programa finalizado.\n");

    return 0;
}