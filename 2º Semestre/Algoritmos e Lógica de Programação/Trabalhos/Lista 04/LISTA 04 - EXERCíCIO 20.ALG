Algoritmo "Lista 04 - Exercício 20"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e verifica se é um palídromo
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, palin: caractere
   cont: inteiro

Inicio
      
      // Entrada
      escreva("Digite uma palavra de no mínimo 5 caracteres: ")
      leia(palavra)
      
      // Processamento
      para cont de compr(palavra) ate 1 passo -1 faca
           palin <- palin + copia(palavra; cont; 1)
      fimpara
      
      // Saída
      se palin = palavra entao
         escreva("É um palídromo.")
      senao
           escreva("Não é um palíndromo.")
      fimse

Fimalgoritmo