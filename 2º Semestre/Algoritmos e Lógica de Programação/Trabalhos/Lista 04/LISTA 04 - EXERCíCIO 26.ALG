Algoritmo "Lista 04 - Exercício 26"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e descriptografa ela.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, letra, palavra_d: caractere
   letra_a, desloc, cont: inteiro

Inicio
      // Entrada
      escreva("Digite a palavra criptografada: ")
      leia(palavra)
      escreva("Digite o deslocamento escolhido: ")
      leia(desloc)
      
      // Processamento e Saída
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;cont;1)
           letra_a <- asc(letra)
           se (letra_a >= 65) e (letra_a <= 90) entao
              letra_a <- ((letra_a - 65) - desloc + 26) % 26 + 65)
           senao
                letra_a <- ((letra_a - 97) - desloc + 26) % 26 + 97)
           fimse
           palavra_d <- palavra_d + carac(letra_a)
      fimpara
      escreva("A palavra descriptografada é: ",palavra_d)

Fimalgoritmo