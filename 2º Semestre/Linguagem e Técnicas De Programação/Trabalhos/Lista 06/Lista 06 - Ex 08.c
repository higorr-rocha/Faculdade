/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 06 - Ex 08
    Autor       : Higor Rocha
    Data atual  : 08/11/2024
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char txt[100], palavra[40];
    int cont = 0;
    FILE *arquivo;
    arquivo = fopen("meuarquivo.txt", "r");

    printf("Insira a palavra que deseja procurar: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = 0;

    while (fscanf(arquivo, "%s", txt) != EOF)
    {
        if (strcmp(palavra, txt) == 0) cont++;
    }
    
    printf("A palavra %s aparece %d vez(es).", palavra, cont);

    fclose(arquivo);

    return 0;
}