/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 07 - Exercício 03 - Desafio
    Descrição   : Calculadora Completa.
    Autor       : Higor Rocha
    Data atual  : 24/08/2024
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

double soma(double num_1, double num_2);
double sub(double num_1, double num_2);
double mult(double num_1, double num_2);
double div(double num_1, double num_2);
double pot(double num_1, double num_2);
void raiz(double num_1);
double porc(double num_1, double num_2);
double media(double num_1, double num_2);
void equa_seg(double num_1, double num_2, double num_3);

int main(){
    double num_1, num_2, num_3;
    char op;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Escolha um operação matemática:\n+ = Soma\n- = Subtração\n* = Multiplicação\n/ = Divisão\nP = Potenciação\nR = Raiz Quadrada\n%% = Porcentagem\nM = Média\nS = Equação de Segundo Grau\n");
    scanf("%c", &op);
    if (op == 'S'){
        printf("Digite o valor de A: ");
        scanf("%lf", &num_1);
        printf("Digite o valor de B: ");
        scanf("%lf", &num_2);
        printf("Digite o valor de C: ");
        scanf("%lf", &num_3);
    }
    else if (op == 'R'){
        printf("Digite o número: ");
        scanf("%lf", &num_1);
    }
    else 
    {
        printf("Digite o 1º Número: ");
        scanf("%lf", &num_1);
        printf("Digite o 2º número: ");
        scanf("%lf", &num_2);
    }

    switch (op)
    {
    case '+':
        printf("A soma de %.2lf + %.2lf é: %.2lf\n", num_1, num_2, soma(num_1, num_2));
        break;
    case '-':
        printf("A subtração de %.2lf - %.2lf é: %.2lf\n", num_1, num_2, sub(num_1, num_2));
        break;
    case '*':
        printf("%.2lf X %.2lf é: %.2lf\n", num_1, num_2, mult(num_1, num_2));
        break;
    case '/':
        if(num_2 != 0){
            printf("%.2lf ÷ %.2lf é: %.2lf\n", num_1, num_2, div(num_1, num_2));
        }
        else printf("Não é possível dividir por 0.");
        break;
    case 'P':
        printf("%.2lf elevado a %.2lf é: %.2lf", num_1, num_2, pot(num_1, num_2));
        break;
    case 'R':
        raiz(num_1);
        break;
    case '%':
        printf("%.0lf%% de %.2lf é: %.2lf", num_1, num_2, porc(num_1, num_2));
        break;
    case 'M':
        printf("A média de %.2lf e %.2lf é: %.2lf", num_1, num_2, media(num_1, num_2));
        break;
    case 'S':
        equa_seg(num_1, num_2, num_3);
        break;
    default:
        printf("Operação Inválida.");
        break;
    }
    return 0;
}

double soma(double num_1, double num_2){
    return num_1 + num_2;
}

double sub(double num_1, double num_2){
    return num_1 - num_2;
}

double mult(double num_1, double num_2){
    return num_1 * num_2;
}

double div(double num_1, double num_2){
    return num_1 / num_2;
}

double pot(double num_1, double num_2){
    return pow(num_1, num_2);
}

void raiz(double num_1){
    if(num_1 > 0){
        printf("A Raiz Quadrada de %.0lf é: ", sqrt(num_1));
    }
    else if (num_1 == 0){
        printf("Zero não possui raiz.");
    }
    else
    {
        printf("Números negativos não possuem raiz quadrada real.");
    }
}

double porc(double num_1, double num_2){
    return mult(div(num_1, 100), num_2);
}

double media(double num_1, double num_2){
    return div(soma(num_1, num_2), 2);
}

void equa_seg(double num_1, double num_2, double num_3){
    int delta;
    delta = sub(pow(num_2, 2), mult(4, mult(num_1, num_3)));
    if(delta > 0){
        printf("X1 é: %.0lf\n", (-num_2 + sqrt(delta)) / mult(2,num_1));
        printf("X2 é: %.0lf", (-num_2 - sqrt(delta)) / mult(2,num_1));
    }
    else if(delta == 0){
        printf("X é: %.2lf", (-num_2 + sqrt(delta)) / mult(2,num_1));
    }
    else printf("A equação não possui solução real.");
}


