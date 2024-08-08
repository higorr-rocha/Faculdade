Algoritmo "Bolo De Cenoura"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Calcula o preço final gasto para fazer um bolo de cenoura.
// Autor(a)    : Higor Rocha
// Data atual  : 01/08/2024
Var
oleo_val, oleo_custo:real
cenoura_val, cenoura_custo:real
ovos_val, ovos_custo:real
acucar_val, acucar_custo:real
farinha_val, farinha_custo:real
fermento_val, fermento_custo:real
chocolate_val, chocolate_custo:real
manteiga_val, manteiga_custo:real
bolo_custo, cobertura_custo:real

Inicio
// A) Entrada dos Dados - Início
escreva("Insira o valor do óleo: ")
leia(oleo_val)
oleo_custo <- oleo_val/1000*120
escreva("Insira o valor da cenoura: ")
leia(cenoura_val)
cenoura_custo <- cenoura_val/7*3
escreva("Insira o valor dos ovos: ")
leia(ovos_val)
ovos_custo <- ovos_val/12*4
escreva("Insira o valor do açúcar: ")
leia(acucar_val)
acucar_custo <- acucar_val/1000*320
escreva("Insira o valor da farinha: ")
leia(farinha_val)
farinha_custo <- farinha_val/1000*300
escreva("Insira o valor do fermento: ")
leia(fermento_val)
fermento_custo <- fermento_val/2
escreva("Insira o valor do chocolate: ")
leia(chocolate_val)
chocolate_custo <- chocolate_val/200*18
escreva("Insira o valor da manteiga: ")
leia(manteiga_val)
manteiga_custo <- manteiga_val/500*12
// Fim

// B) Cálculo da Etapa 1 - Início
bolo_custo <- oleo_custo + cenoura_custo + ovos_custo + acucar_custo + farinha_custo + fermento_custo
// Fim

// C) Cálculo da Etapa 2 - Início
cobertura_custo <- chocolate_custo + manteiga_custo + acucar_val/1000*150
// Fim

// D) Saída dos Resultados - Início
escreval("O custo para preparar o bolo é: ", bolo_custo:1:2)
escreval("O custo para preparar a cobertura é: ",cobertura_custo:1:2)
escreva("O custo total do bolo é: ", bolo_custo + cobertura_custo:1:2)
// Fim
Fimalgoritmo