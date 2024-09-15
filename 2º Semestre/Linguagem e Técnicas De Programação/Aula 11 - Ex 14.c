/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 14
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int preco_f = 50, preco_r = 35, preco_i = 45, quant, quant_f, quant_r, quant_i;
    float total = 0;
    char categoria;
    printf("Qual a quantidade de livros comprados? ");
    scanf("%d", &quant);
    fflush(stdin);
    for (int i = 0; i < quant; i++)
    {
        printf("Qual a categoria do %dº livro?\nF - Ficção\nR - Romance\nI - Infantil\n", i+1);
        scanf("%c", &categoria);
        fflush(stdin);
        switch (categoria)
        {
        case 'F':
            quant_f++;    
            break;
        case 'R':
            quant_r++;    
            break;
        case 'I':
            quant_i++;    
            break;
        }
    }
    total = (preco_f * quant_f) + (preco_r * quant_r) + (preco_i * quant_i);
    if (quant_f >= 10) total -= total * 0.25;
    else if (quant_f >= 5 && quant_f < 10) total -= total * 0.20;
    if (quant_r >= 10) total -= total * 0.25;
    else if (quant_r >= 5 && quant_r < 10) total -= total * 0.20;
    if (quant_i >= 10) total -= total * 0.25;
    else if (quant_i >= 5 && quant_i < 10) total -= total * 0.20;
    printf("O preço total é de: %.2f", total);
    return 0;
}