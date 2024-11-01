/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 05 - Ex 04
    Autor       : Higor Rocha
    Data atual  : 01/11/2024
*/

#include <locale.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
    int busca, quant = 0, vetor[] = {1,2,3,4,5,6,7,8,9,10};
    bool existe = false;
    setlocale(LC_ALL, "Portuguese");
    
    printf("Qual número deseja buscar? ");
    scanf("%d", &busca);
    for (int i = 0; i < 10; i++)
    {
        if (busca == vetor[i]) existe = true;
    }
    if (existe) printf("%d foi encontrado.\n", busca);
    else printf("%d não foi encontrado.\n", busca);

    printf("Qual número deseja contar? ");
    scanf("%d", &busca);
    for (int i = 0; i < 10; i++)
    {
        if (busca == vetor[i]) quant++;
    }
    if (quant > 0) printf("%d aparece %d vez(es).\n", busca, quant);
    else printf("O número %d não aparece.\n", busca);

    return 0;
}