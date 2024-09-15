/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 07
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char usuario_s[10] = {"admin"};
    char senha_s[10] = {"admin"};
    char usuario[10], senha[10];
    printf("Digite o nome de usuário: ");
    gets(usuario);
    printf("Digite a senha: ");
    gets(senha);
    if (strcmp(usuario, usuario_s) + strcmp(senha, senha_s) == 0) printf("Acesso concedido!");
    else printf("Acesso negado!");
    return 0;
}