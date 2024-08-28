Algoritmo "Lista 04 - Exercício 21"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e verifica se
//               é um palídromo ignorando espaços
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, palavra2, palin: caractere
   cont: inteiro

Inicio
      
      // Entrada
      escreva("Digite uma palavra de no mínimo 5 caracteres: ")
      leia(palavra)
      
      // Processamento
      para cont de 1 ate compr(palavra) faca
           se (copia(palavra; cont; 1) <> " ") entao
              palavra2 <- palavra2 + copia(palavra; cont; 1)
           fimse
      fimpara
      para cont de compr(palavra) ate 1 passo -1 faca
           se (copia(palavra; cont; 1) <> " ") entao
              palin <- palin + copia(palavra; cont; 1)
           fimse
      fimpara
      
      // Saída
      se palin = palavra2 entao
         escreva("É um palídromo.")
      senao
           escreva("Não é um palíndromo.")
      fimse

Fimalgoritmo