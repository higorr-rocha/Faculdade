Algoritmo "Lista 04 - Exercício 25"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e criptografa ela.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, letra, palavra_c: caractere
   letra_a, desloc, cont: inteiro

Inicio
      // Entrada
      escreva("Digite uma palavra: ")
      leia(palavra)
      escreva("Digite um deslocamento(1-25): ")
      leia(desloc)
      
      // Processamento e Saída
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;cont;1)
           letra_a <- asc(letra)
           se (letra_a >= 65) e (letra_a <= 90) entao
              letra_a <- ((letra_a - 65) + desloc) % 26 + 65)
           senao
                letra_a <- ((letra_a - 97) + desloc) % 26 + 97)
           fimse
           palavra_c <- palavra_c + carac(letra_a)
      fimpara
      escreva("A palavra criptografada é: ",palavra_c)

Fimalgoritmo