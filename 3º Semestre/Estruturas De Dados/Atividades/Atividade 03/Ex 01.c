/*
    Disciplina  : [Estruturas De Dados]
    Nome        : Exercício 01
    Autor       : Higor Rocha
    Data atual  : 26/03/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void apresentar(int vet[], int tamanho);
void gerar(int vet[], int tamanho, int intervalo_1, int intervalo_2);

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int *vetor;
    vetor = malloc(10 * sizeof(int));

    if (vetor)
    {
        gerar(vetor,10,90,10);
        apresentar(vetor,10);

        vetor = realloc(vetor,15);
        gerar(vetor,15,99,100);
        apresentar(vetor,15);

        vetor = realloc(vetor,8);
        apresentar(vetor,8);
    } 
    else
        printf("Erro ao alocar memória\n");
    
    printf("Memória Limpa!");
    free(vetor);

    return 0;
}

void apresentar(int vet[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (i < 9)
            printf("  ");
        else
            printf(" ");
        printf("%dº valor: %d", i+1, *(vet + i));
        printf("    ");
        printf("Endereço de memória: %p\n", &*(vet + i));
    }

    printf("\n");
}

void gerar(int vet[], int tamanho, int intervalo_1, int intervalo_2)
{
    for (int i = 0; i < tamanho; i++)
    {
            int tmp, liberado = 0;

            while(!liberado)
            {
                tmp = (rand() % intervalo_1) + intervalo_2;
                liberado = 1;

                for (int j = 0; j < i; j++)
                {
                    if (vet[i] == tmp)
                    {
                        liberado = 0;
                    }
                }
            }

            if (liberado)
            {
                vet[i] = tmp;
            }
    }
}