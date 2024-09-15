/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 15
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <ctype.h>
#include <locale.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tamanho;
    char senha[40];
    bool maiusc, minusc, num, carac_e;
    printf("Digite uma senha: ");
    gets(senha);
    for (int i = 0; i < (int)strlen(senha); i++)
    {
        if (isupper(senha[i])) maiusc = 1;
        if (islower(senha[i])) minusc = 1;
        if (isdigit(senha[i])) num = 1;
        if (!isalnum(senha[i])) carac_e = 1;
        tamanho++;
    }
    if (tamanho >= 8 && maiusc && minusc && num && carac_e) printf("Senha Válida.");
    else printf("Senha Inválida.");
    return 0;
}