/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 08 - Exercício 03 - Prova Prática
    Descrição   : Recebe a data de nascimento e informa quantos dias se passaram de 1/1/1900 até a data.
    Autor       : Higor Rocha
    Data atual  : 24/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int dia, mes, ano;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o dia em que nasceu(1-31): ");
    scanf("%d", &dia);
    printf("Digite o mês em que nasceu(1-12): ");
    scanf("%d", &mes);
    printf("Digite o ano em que nasceu(Ex. 2024): ");
    scanf("%d", &ano);
    if(ano >= 1900)
    {
        if(ano == 1900) printf("Se passaram %d dias.", dia-31+mes*30);
        else if(mes == 1) printf("Se passaram %d dias.", dia-1+((ano-1900)*365) + ((ano-1900)/4));
        else if(mes == 2) printf("Se passaram %d dias.", dia-1+31+((ano-1900)*365) + ((ano-1900)/4));
        else if(mes == 3) printf("Se passaram %d dias.", dia-1+28+31+((ano-1900)*365) + ((ano-1900)/4));
        else if(mes == 4) printf("Se passaram %d dias.", dia-1+29+31*2+((ano-1900)*365) + ((ano-1900)/4));
        else if(mes == 5) printf("Se passaram %d dias.", dia-1+29+31*2+30+((ano-1900)*365) + ((ano-1900)/4));
        else if(mes == 6) printf("Se passaram %d dias.", dia-1+29+31*3+30+((ano-1900)*365) + ((ano-1900)/4));
        else if(mes == 7) printf("Se passaram %d dias.", dia-1+29+31*3+30*2+((ano-1900)*365) + ((ano-1900)/4));
        else if(mes == 8) printf("Se passaram %d dias.", dia-1+29+31*4+30*2+((ano-1900)*365) + ((ano-1900)/4));
        else if(mes == 9) printf("Se passaram %d dias.", dia-1+29+31*5+30*2+((ano-1900)*365) + ((ano-1900)/4));
        else if(mes == 10) printf("Se passaram %d dias.", dia-1+29+31*5+30*3+((ano-1900)*365) + ((ano-1900)/4));
        else if(mes == 11) printf("Se passaram %d dias.", dia-1+29+31*6+30*3+((ano-1900)*365) + ((ano-1900)/4));
        else printf("Se passaram %d dias.", dia-1+29+31*6+30*4+((ano-1900)*365) + ((ano-1900)/4));
    }
    else printf("O ano deve ser a partir de 1900.");
    return 0;
}