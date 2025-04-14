/*
    Disciplina  : [Estruturas De Dados]
    Nome        : Exercício 01
    Autor       : Higor Rocha
    Data atual  : 26/02/2025
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct veiculo
{
    char marca[20],modelo[30],cor[20],combustivel[15], placa[15];
    short int ano_m,ano_f;
};
struct veiculo ve[5];

int main(){
    setlocale(LC_ALL, "Portuguese");

    char placa_b[15];
    short int i = 0, encontrado = 0;
    
    for (short int i = 0; i < 5; i++)
    {
        printf("Informe a marca do veículo %d:", i+1);
        fgets(ve[i].marca, 20, stdin);
        ve[i].marca[strcspn(ve[i].marca, "\n")] = 0;
        printf("Informe o modelo do veículo %d:", i+1);
        fgets(ve[i].modelo, 30, stdin);
        ve[i].modelo[strcspn(ve[i].modelo, "\n")] = 0;
        printf("Informe a cor do veículo %d:", i+1);
        fgets(ve[i].cor, 20, stdin);
        ve[i].cor[strcspn(ve[i].cor, "\n")] = 0;
        printf("Informe o tipo de combustível do veículo %d:", i+1);
        fgets(ve[i].combustivel, 15, stdin);
        ve[i].combustivel[strcspn(ve[i].combustivel, "\n")] = 0;
        printf("Informe a placa do veículo %d:", i+1);
        fgets(ve[i].placa, 15, stdin);
        ve[i].placa[strcspn(ve[i].placa, "\n")] = 0;
        printf("Informe o ano de fabricação do veículo %d:", i+1);
        scanf("%hi", &ve[i].ano_f);
        fflush(stdin);
        printf("Informe o ano do modelo do veículo %d:", i+1);
        scanf("%hi", &ve[i].ano_m);
        fflush(stdin);
    }
    
    printf("Informe a placa a ser buscada: ");
    fgets(placa_b, 15, stdin);
    placa_b[strcspn(placa_b, "\n")] = 0;

    do
    {
        if(strcmp(ve[i].placa,placa_b) == 0)
        {
            printf("Seu carro é o: %s\nMarca: %s\n", ve[i].modelo,ve[i].marca);
            printf("Cor: %s\nPlaca: %s\n", ve[i].cor, ve[i].placa);
            printf("Combustível utilizado: %s\n", ve[i].combustivel);
            printf("Ano do Modelo: %hi\nAno de Fabricação: %hi\n", ve[i].ano_m, ve[i].ano_f);
            encontrado = 1;
        }
        else if(i == 4 && !encontrado)
            printf("Veículo não localizado.");

        i++;

    } while(i < 5);
    
    return 0;
}
