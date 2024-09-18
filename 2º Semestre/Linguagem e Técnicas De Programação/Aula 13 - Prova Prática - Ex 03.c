/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Prova Prática - Exercício 03
    Autor       : Higor Rocha
    Data atual  : 17/09/2024
*/

#include <stdio.h>

int calculo_a(int num_1, int num_2, int num_3, int num_4, int num_5, int num_6, int num_7, float media);
int calculo_ac(int num_1, int num_2, int num_3, int num_4, int num_5, int num_6, int num_7, float media);
int calculo_m(int num_1, int num_2, int num_3, int num_4, int num_5, int num_6, int num_7, float media);

int main()
{
    int num_1, num_2, num_3, num_4, num_5, num_6, num_7;
    int dias_a, dias_ac, dias_m, media;
    printf("Digite a producao do Dia 1: ");
    scanf("%d", &num_1);
    printf("Digite a producao do Dia 2: ");
    scanf("%d", &num_2);
    printf("Digite a producao do Dia 3: ");
    scanf("%d", &num_3);
    printf("Digite a producao do Dia 4: ");
    scanf("%d", &num_4);
    printf("Digite a producao do Dia 5: ");
    scanf("%d", &num_5);
    printf("Digite a producao do Dia 6: ");
    scanf("%d", &num_6);
    printf("Digite a producao do Dia 7: ");
    scanf("%d", &num_7);
    media = (num_1 + num_2 + num_3 + num_4 + num_5 + num_6 + num_7)/7;
    dias_a = calculo_a(num_1, num_2, num_3, num_4, num_5, num_6, num_7, media);
    dias_ac = calculo_ac(num_1, num_2, num_3, num_4, num_5, num_6, num_7, media);
    dias_m = calculo_m(num_1, num_2, num_3, num_4, num_5, num_6, num_7, media);
    printf("Dias abaixo: %d\n", dias_a);
    printf("Dias acima: %d\n", dias_ac);
    printf("Dias iguais: %d\n", dias_m);
    return 0;
}
int calculo_a(int num_1, int num_2, int num_3, int num_4, int num_5, int num_6, int num_7, float media)
{
    int dias_ab = 0;
    if (num_1 < media) dias_ab++;
    if (num_2 < media) dias_ab++;
    if (num_3 < media) dias_ab++;
    if (num_4 < media) dias_ab++;
    if (num_5 < media) dias_ab++;
    if (num_6 < media) dias_ab++;
    if (num_7 < media) dias_ab++;
    return dias_ab;
}
int calculo_ac(int num_1, int num_2, int num_3, int num_4, int num_5, int num_6, int num_7, float media)
{
    int dias_ac = 0;
    if (num_1 > media) dias_ac++;
    if (num_2 > media) dias_ac++;
    if (num_3 > media) dias_ac++;
    if (num_4 > media) dias_ac++;
    if (num_5 > media) dias_ac++;
    if (num_6 > media) dias_ac++;
    if (num_7 > media) dias_ac++;
    return dias_ac;
}
int calculo_m(int num_1, int num_2, int num_3, int num_4, int num_5, int num_6, int num_7, float media)
{
    int dias_m = 0;
    if (num_1 == media) dias_m++;
    if (num_2 == media) dias_m++;
    if (num_3 == media) dias_m++;
    if (num_4 == media) dias_m++;
    if (num_5 == media) dias_m++;
    if (num_6 == media) dias_m++;
    if (num_7 == media) dias_m++;
    return dias_m;
}