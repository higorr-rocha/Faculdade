/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 24
    Autor       : Higor Rocha
    Data        : 19/06/2025
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct apelido_no {
    int dado;
    struct apelido_no *proximo;
} No;

No *top = NULL;

int entrada_dados() {
    int valor;
    printf("\nValor a empilhar: ");
    scanf("%d", &valor);
    return valor;
}

void push(int item) {
    No *novo = (No *) malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro: Nao ha memoria suficiente!\n");
        return;
    }
    
    novo->dado = item;
    novo->proximo = top;
    top = novo;
    printf("Elemento %d empilhado com sucesso!\n", item);
    system("pause");
}

void pop() {
    if (top == NULL) {
        printf("\nA pilha esta vazia!\n");
    } else {
        No *temp;
        temp = top;
        printf("\nElemento %d desempilhado.\n", temp->dado);
        top = top->proximo;
        free(temp);
    }
    system("pause");
}

// Função para sair e liberar toda a memória
void sair() {
    No *temp;

    if (top == NULL)
        return;
    while (top != NULL) {
        temp = top;
        top = top->proximo;
        free(temp);
    }
    printf("Todos os elementos foram desempilhados.\n");
    system("pause");
}

// Função principal
int main() {
    int n, opcao;

    do {
        system("cls");
        printf("\nMenu\n1. Empilhar");
        printf("\n2. Desempilhar");
        printf("\n3. Sair");
        printf("\n\nOpcao (0-3): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                //empilhar
                n = entrada_dados();
                push(n);
                break;
            case 2:
                //desempilhar
                pop();
                break;
            case 3:
                //sair
                sair(); // Chamada para a função de sair
                break;
            default:
                printf("Opcao invalida!\n");
                system("pause");
                break;
        }

    } while (opcao != 3);

    printf("\nFinalizando o programa...\n");
    system("pause");
    return 0;
}