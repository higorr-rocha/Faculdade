/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 10 - Ex 05
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int numE, num = rand() % 100;
    setlocale(LC_ALL, "Portuguese");
    printf("O computador escolheu um número entre 1 e 100. Adivinhe-o.\n");
    printf("%d\n", num);
    for (int i = 0; i < 10; i++)
    {
        if (i < 9) printf("Você tem %d tentativas!\n", 10 - i);
        else printf("Você tem 1 tentativa!\n");
        printf("Qual foi o número escolhido? ");
        scanf("%d", &numE);
        if (numE == num) 
        {
            printf("Parabéns! Você acertou.\n");
            i = 11;
        }
        else if (i < 9) printf("Você errou! Tente Novamente.\n");
        else printf("Sinto Muito! Você perdeu.\n");
    }
    return 0;
}
