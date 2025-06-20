/*
    Disciplina  : [Estruturas De Dados]
    Nome        : Exerc�cio 01
    Autor       : Higor Rocha
    Data atual  : 14/05/2025
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50]; // Nome do Jogador Ex: Moreno
    int idade; // Idde do jogador Ex: 41
    char classe[20]; // Classe do Jogador Ex: "Guerreiro", "Mago", etc.
} personagem;
//------------------------------------------------------------------------------
typedef struct {
    int nivel; // N�vel do jogador no jogo Ex: 12
    int experiencia; // Pontua��o de experi�ncia Ex: 890
    personagem p; // Dados do personagem
} jogador;
//------------------------------------------------------------------------------
typedef struct apelido {
    jogador jog; //jog � uma vari�vel do tipo jogador
    struct apelido *proximo; //*proximo � um ponteiro do n�
} no;
//------------------------------------------------------------------------------
no *topo = NULL; //topo � ponteiro que indica o TOPO da pilha

void push(jogador j);     // procedimento Empilhar
void pop();               // procedimento Desempilhar
void mostra_pilha();      // procedimento Imprimir pilha
void liberar_pilha();     // procedimento Limpar mem�ria
jogador entrada_dados();  // fun��o Entrada de dados que retorna dados do jogador

//-------------------------------------------
int main() {
    setlocale(LC_ALL, ""); //ativa teclado padr�o do windows
    int opcao; //op��o para o MENU
    jogador dados; //dados � uma vari�vel do tipo jogador
    do {
        system("cls");
        printf("\nMenu - Pilha de Jogadores");
        printf("\n1. Empilhar Jogador");
        printf("\n2. Desempilhar Jogador");
        printf("\n3. Apresenta Pilha");
        printf("\n4. Limpar Mem�ria");
        printf("\n5. Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);
        fflush(stdin); // limpa buffer do teclado

        switch (opcao) {
            case 1:
                dados = entrada_dados(); //vari�vel dados recebe informacoes do jogador
                push(dados); //empilha dados do jogador
                break;
            case 2:
                pop(); //desempilha o jogador do topo
                break;
            case 3:
                mostra_pilha(); //apresenta a pilha toda
                break;
            case 4:
                liberar_pilha();
                break;
            default:
                printf("Op��o inv�lida\n");
        }
        system("pause");
    } while (opcao != 5);
    liberar_pilha(); // limpeza final
    printf("\nFim do programa.\n");
    system("pause");
    return 0;
}
//-------------------------------------------
void push(jogador j) {
    no *aux;
    aux = malloc(sizeof(no));

    aux->jog = j;
    aux->proximo = topo;
    topo = aux;

    printf("\nJogador %s, empilhado com sucesso!\n", j.p.nome);
}
//-------------------------------------------
void pop() {
    no *aux;

    if (topo == NULL)
        printf("Pilha Vazia.");
    else {
        aux = topo;
        topo = topo -> proximo;
        free(aux);
    }
}
//-------------------------------------------
void mostra_pilha() {
    no *aux;
    aux = topo;

    while (aux != NULL)
    {
        printf("%s\n", aux -> jog.p.nome);
        aux = aux -> proximo;
    }
}
//-------------------------------------------
void liberar_pilha() {
    while (topo != NULL)
        pop();

    printf("\nMem�ria liberada com sucesso.\n");
}
//-------------------------------------------
jogador entrada_dados() {
    jogador jog;

    printf("\nCadastro do Jogador:\n");
    printf("Nome: ");
    fgets(jog.p.nome, 50, stdin);
    jog.p.nome[strcspn(jog.p.nome, "\n")] = 0;
    fflush(stdin);
    printf("Idade: ");
    scanf("%d", &jog.p.idade);
    fflush(stdin);
    printf("Classe: ");
    fgets(jog.p.classe, 20, stdin);
    jog.p.classe[strcspn(jog.p.classe, "\n")] = 0;
    fflush(stdin);
    printf("N�vel: ");
    scanf("%d", &jog.nivel);
    fflush(stdin);
    printf("Experi�ncia: ");
    scanf("%d", &jog.experiencia);
    fflush(stdin);
   
    return jog;
}
