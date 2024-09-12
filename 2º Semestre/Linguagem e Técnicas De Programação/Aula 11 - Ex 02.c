/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 10 - Ex 02
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int cem(int notas);
int cinquenta(int notas);
int vinte(int notas);
int dez(int notas);
int cinco(int notas);

int main()
{
    int notas;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor: ");
    scanf("%d", &notas);

    int cemN = cem(notas);
    notas -= cemN * 100;
    int cinquentaN = cinquenta(notas);
    notas -= cinquentaN * 50;
    int vinteN = vinte(notas);
    notas -= vinteN * 20;
    int dezN = dez(notas);
    notas -= dezN * 10;
    int cincoN = cinco(notas);
    notas -= cincoN * 5;

    printf("São necessárias %d notas de 100.\n", cemN);
    printf("São necessárias %d notas de 50.\n", cinquentaN);
    printf("São necessárias %d notas de 20.\n", vinteN);
    printf("São necessárias %d notas de 10.\n", dezN);
    printf("São necessárias %d notas de 5.\n", cincoN);
    return 0;
}

int cem(int notas)
{
    int cemN = 0;
    while (notas >= 100)
    {
        notas -= 100;
        cemN++;
    }
    return cemN;
}

int cinquenta(int notas)
{
    int cinquentaN = 0;
    while (notas >= 50)
    {
        notas -= 50;
        cinquentaN++;
    }
    return cinquentaN;
}

int vinte(int notas)
{
    int vinteN = 0;
    while (notas >= 20)
    {
        notas -= 20;
        vinteN++;
    }
    return vinteN;
}

int dez(int notas)
{
    int dezN = 0;
    while (notas >= 10)
    {
        notas -= 10;
        dezN++;
    }
    return dezN;
}

int cinco(int notas)
{
    int cincoN = 0;
    while (notas >= 5)
    {
        notas -= 5;
        cincoN++;
    }
    return cincoN; 
}