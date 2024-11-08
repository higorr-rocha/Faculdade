/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 06 - Ex 06
    Autor       : Higor Rocha
    Data atual  : 08/11/2024
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[40], txt[100];
    int cont = 0;
    FILE *arquivo;
    
    printf("Insira o nome do arquivo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    arquivo = fopen(nome, "r");

    while (fscanf(arquivo, "%s", txt) != EOF)
    {
        cont++;
    }
    
    printf("O arquivo tem %d palavras.", cont);

    fclose(arquivo);

    return 0;
}
