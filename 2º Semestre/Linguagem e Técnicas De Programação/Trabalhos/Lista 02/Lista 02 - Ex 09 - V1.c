/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 02 - Ex 09
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int idade, idade_m, mulher;
    char nome[40], sexo, i;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    do
    {
        printf("Digite seu nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0;
        printf("Insira sua idade: ");
        scanf("%d", &idade);
        getchar();
        do
        {
            printf("Digite seu sexo: ");
            scanf("%c", &sexo);
            getchar();
            if(sexo == 'M' || sexo == 'F'){
                if(sexo == 'F'){
                    mulher += 1;
                    idade_m += idade;
                }
                printf("Deseja continuar (S/N)? ");
                scanf("%c", &i);
                getchar();
                if(i == 'N') printf("A média de idade das mulheres é: %d.", idade_m/mulher);
            }
            else printf("Sexo deve ser M ou F.\n");
        }while(sexo != 'M' && sexo != 'F');
    } while (i != 'N');
    return 0;
}