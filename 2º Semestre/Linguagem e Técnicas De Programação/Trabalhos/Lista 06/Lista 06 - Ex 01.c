/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 06 - Ex 01
    Autor       : Higor Rocha
    Data atual  : 08/11/2024
*/

#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("meuarquivo.txt", "w");

    fprintf(arquivo, "Olá, Mundo!");

    fclose(arquivo);

    return 0;
}