/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 06 - Ex 03
    Autor       : Higor Rocha
    Data atual  : 08/11/2024
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[40], cont;
    FILE *arquivo;

    do
    {
        printf("Insira o nome do arquivo: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0;

        arquivo = fopen(nome, "r");

        if (arquivo == NULL) printf("Esse arquivo não existe.\n");
        else printf("O arquivo existe.\n");

        printf("Deseja continuar(S/N)? ");
        scanf("%c", &cont);
        getchar();
    } while (cont != 'N');

    fclose(arquivo);

    return 0;
}
