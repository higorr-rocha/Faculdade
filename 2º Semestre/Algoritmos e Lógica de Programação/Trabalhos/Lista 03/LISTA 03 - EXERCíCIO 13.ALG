Algoritmo "Lista 03 - Exercício 13"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno
// Descrição   : Solicita o nome completo e a idade de 5 pessoas.
//               Após, informa o mais velho e o mais novo.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 17/08/2024
Var
nome, nome_maior, nome_menor: caractere
idade, idade_maior, idade_menor, cont: inteiro

Inicio
// Entrada e Processamento
para cont de 1 ate 5 faca
     escreva("Qual é seu nome completo? ")
     leia(nome)
     escreva("Qual sua idade? ")
     leia(idade)
     se cont = 1 entao
        nome_maior <- nome
        nome_menor <- nome
        idade_maior <- idade
        idade_menor <- idade
      senao
           se idade > idade_maior entao
              idade_maior <- idade
              nome_maior <- nome
            senao
                 se idade < idade_menor entao
                    idade_menor <- idade
                    nome_menor <- nome
                 fimse
           fimse
     fimse
fimpara

// Saída
escreval(nome_maior,", é o(a) mais velho(a)!")
escreva(nome_menor,", é o(a) mais novo(a)!")

Fimalgoritmo