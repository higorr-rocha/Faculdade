/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 06 - Exercício 02
    Descrição   : Recebe dois números e diz se o 1º é divisível pelo 2º.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

void divisor(int num, int div){
    if(num % div == 0){
        printf("O número %d é divisível por %d.", num,div);
    }
    else printf("O número %d não é divisível por %d.", num,div);
    
}

int main(){
    int valor, valor_2;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite um número: ");
    scanf("%d", &valor);
    printf("Digite o divisor: ");
    scanf("%d", &valor_2);
    divisor(valor,valor_2);
    return 0;
}