/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Prova Prática - Exercício 02
    Autor       : Higor Rocha
    Data atual  : 17/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
	char nome[40], cargo;
	int idade, salario, salario_a, aumento;
	printf("Digite seu nome: ");
	gets(nome);
	printf("Qual sua idade? ");
	scanf("%d", &idade);
	printf("Qual seu salario? ");
	scanf("%d", &salario);
	getchar();
	printf("Qual seu cargo? ");
	scanf("%c", &cargo);
	if (cargo != 'A' && cargo != 'G' && cargo != 'T' && cargo != 'S')
	{
		printf("Cargo Invalido! Digite novamente.");
	}
	else
	{
		switch (cargo)
		{
	        case 'A':
	            salario_a = salario;
	            aumento = salario * 0.10;
		        if (salario >= 1499 && salario <= 2499)
			    {
				    salario_a += salario * 0.10;
			    }
			printf("Caro %s de %d anos.\nSeu novo salario como Analista é de: %d\n", nome, idade, salario_a);
            printf("Salario original: %d\n", salario);
            printf("Aumento: %d", aumento);
		    break;
		    case 'G':
		    salario_a = salario;
	        aumento = salario * 0.15;
                if (salario >= 2500 && salario <= 3499)
                {
                    salario_a += salario * 0.15;
                }
            printf("Caro %s de %d anos.\nSeu novo salario como Gerente é de: %d\n", nome, idade, salario_a);
            printf("Salario original: %d\n", salario);
            printf("Aumento: %d", aumento);
            break;
            case 'T':
            salario_a = salario;
	        aumento = salario * 0.05;
                if (salario >= 3500 && salario <= 4999)
                {
                    salario_a += salario * 0.05;
                }
            printf("Caro %s de %d anos.\nSeu novo salario como Técnico é de: %d\n", nome, idade, salario_a);
            printf("Salario original: %d\n", salario);
            printf("Aumento: %d", aumento);
            break;
            case 'S':
            printf("Cara %s de %d anos.\nSeu salario como Secretária é de: %d", nome, idade, salario);
            break;
	    }
    }
	return 0;
}
