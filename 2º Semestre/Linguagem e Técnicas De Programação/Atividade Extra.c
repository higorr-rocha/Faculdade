/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Métodos de Ordenação  
    Descrição   : Exemplifica três métodos de ordenação existentes em C
    Autor       : Higor Rocha
    Data atual  : 28/12/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vetor_1[] = {9,5,3,7,6,4,10,1,8,2}, vetor_2[] = {9,5,3,7,6,4,10,1,8,2}, vetor_3[] = {9,5,3,7,6,4,10,1,8,2};
    int i, j, temp, x = 10;

    // Ordenação Bubble Sort
    for (i = 0; i < x - 1; i++)                     // O loop externo controla o número de passagens no vetor
    {
        for (j = 0; j < x - (i + 1); j++)           // O loop interno compara pares de elementos e os troca se necessário
        {
            if (vetor_1[j] > vetor_1[j + 1])        // Caso o 1º valor comparado seja maior que o 2º, invertemos suas posições
            {
                temp = vetor_1[j];                  // Troca os elementos usando uma variável temporária
                vetor_1[j] = vetor_1[j + 1];
                vetor_1[j + 1] = temp;
            }
        }
    }
    
    // Ordenação Insertion Sort
    for (i = 1; i < x; i++)                         // Inicia o loop começando do 2º valor    
    {
        temp = vetor_2[i];                          // Copia o valor na posição atual de "i" para "temp"
        j = i - 1;                                  // Inicia "j" uma posição atrás de "i"

        while (j >= 0 && vetor_2[j] > temp)         // Compara o valor em "temp" com os anteriores e os troca se preciso
        {
            vetor_2[j + 1] = vetor_2[j];            // Desloca o elemento para a direita
            j = j - 1;                              // Diminui "j" para comparar com o anterior ao deslocado
        }
        
        vetor_2[j + 1] = temp;                      // Coloca "temp" na posição certa
    }

    // Ordenação Selection Sort
    for (i = 0; i < x - 1; i++)                     // Loop externo percorre até o penútimo valor do vetor
    {
        for (j = i + 1; j < x; j++)                 // Inicializa o loop a partir do valor seguinte de "i"
        {
            if (vetor_3[i] > vetor_3[j])            // Compara o valor à esquerda com o da direita e os inverte se preciso 
            {
                temp = vetor_3[j];                  // Copia o valor na posição "j" para "temp"
                vetor_3[j] = vetor_3[i];            // Troca o valor na posição "j" pelo valor na posição "i"
                vetor_3[i] = temp;                  // Troca o valor da posição "i" pelo salvo em "temp"
            }
        }
    }

    // Apresentação

    printf("Ordenação Bubble Sort: \n");
    for (i = 0; i < x; i++)
    {
        printf("%d", vetor_1[i]);
        if (i < x-1) printf(",");
        else printf(".\n");
    }
    printf("Ordenação Insertion Sort: \n");
    for (i = 0; i < x; i++)
    {
        printf("%d", vetor_2[i]);
        if (i < x-1) printf(",");
        else printf(".\n");
    }
    printf("Ordenação Selection Sort: \n");
    for (i = 0; i < x; i++)
    {
        printf("%d", vetor_3[i]);
        if (i < x-1) printf(",");
        else printf(".\n");
    }

    return 0;
}