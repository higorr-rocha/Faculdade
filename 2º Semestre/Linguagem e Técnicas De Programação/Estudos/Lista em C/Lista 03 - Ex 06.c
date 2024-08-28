/*
    Disciplina  : [Linguagem e Técnicas de ProgramaÃ§Ã£o]
    Nome        : Lista - Ex 06
    Descrição   : Solicita o nome, idade e sexo de uma pessoa. 
                  Valida o sexo entre (?F? / ?M?) e idade entre 10 e 100 anos.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int idade, cont;
    char nome[100], sexo;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    getchar();
    while (cont < 1)
    {
        printf("Digite seu sexo(M/F): ");
        scanf("%c", &sexo);
        getchar();
        if (sexo == 'M' || sexo == 'F') cont++;
        else printf("Sexo Inválido!\n");
    }
    cont = 0;
    while (cont < 1)
    {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        getchar();
        if (idade >= 10 && idade <= 100) cont++;
        else printf("Idade Inválida!\n");
    }
    return 0;
}