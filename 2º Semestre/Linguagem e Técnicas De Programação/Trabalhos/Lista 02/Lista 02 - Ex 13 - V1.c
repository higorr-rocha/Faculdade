/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 02 - Ex 13
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int dia, mes;
    char continuar;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    do
    {
        printf("Digite o dia em que você nasceu (1-31): ");
        scanf("%d", &dia);
        getchar();
        printf("Digite o mês em que você nasceu (1-12): ");
        scanf("%d", &mes);
        getchar();
        if ((dia >= 21 && mes == 1) || (dia <= 19 && mes == 2)) printf("Seu signo é Aquário.\n");
        else if ((dia >= 20 && mes == 2) || (dia <= 20 && mes == 3)) printf("Seu signo é Peixes.\n");
        else if ((dia >= 21 && mes == 3) || (dia <= 20 && mes == 4)) printf("Seu signo é Áries.\n");
        else if ((dia >= 21 && mes == 4) || (dia <= 20 && mes == 5)) printf("Seu signo é Touro.\n");
        else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6)) printf("Seu signo é Gêmeos.\n");
        else if ((dia >= 21 && mes == 6) || (dia <= 21 && mes == 7)) printf("Seu signo é Câncer.\n");
        else if ((dia >= 22 && mes == 7) || (dia <= 22 && mes == 8)) printf("Seu signo é Leão.\n");
        else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)) printf("Seu signo é Virgem.\n");
        else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)) printf("Seu signo é Libra.\n");
        else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)) printf("Seu signo é Escorpião.\n");
        else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)) printf("Seu signo é Sagitário.\n");
        else if ((dia >= 22 && mes == 12) || (dia <= 20 && mes == 1)) printf("Seu signo é Capricórnio.\n");
        printf("Deseja repetir (S/N)? ");
        scanf("%c", &continuar);
        getchar();
    }while(continuar != 'N');
    return 0;
}