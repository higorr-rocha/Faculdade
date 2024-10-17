/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 02 - Ex 12
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int idade, idade_n=200, filhos, mulheres=0, mulheres_f, cont, cont2;
    float homens, idade_sf;
    char nome[40], nome_n[40], sexo;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    for (int i = 0; i < 12; i++)
    {
        printf("Digite seu nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0;
        cont = 0;
        cont2 = 0;
        while(cont < 1)
        {
            printf("Digite sua idade: ");
            scanf("%d", &idade);
            getchar();
            if(idade > 0 && idade <= 100){
                while (cont2 < 1){
                    printf("Digite seu sexo (M/F): ");
                    scanf("%c", &sexo);
                    getchar();
                    if (sexo == 'M' || sexo == 'F'){
                        if (sexo == 'M') homens += 1;
                        else if (sexo == 'F') mulheres += 1;
                        cont2 = 1;
                    }
                    else printf("Sexo Inválido.\n");
                }
                printf("Digite a quantidade de filhos: ");
                scanf("%d", &filhos);
                getchar();
                if (sexo == 'F' && filhos == 0) {mulheres_f += 1; idade_sf += idade;}
                cont = 1;
            }
            else printf("Idade Inválida.\n");
        }
        if (idade < idade_n) {
            idade_n = idade; 
            strcpy(nome_n, nome);
        }
    }
    printf("O percentual de Homens entrevistados é de: %.0f%%\n", (homens/12)*100);
    printf("A média da idade de mulheres sem filhos é: %.1f\n", idade_sf/mulheres_f);
    printf("%s de %d anos é a pessoa mais nova.\n", nome_n, idade_n);
    printf("A quantidade de mulheres entrevistadas foi de: %d mulheres.", mulheres);
    return 0;
}