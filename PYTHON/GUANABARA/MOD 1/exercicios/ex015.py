# Escreva um programa que pergunte a quantidade de Km percorridos por um carro alugado e a quantidade de dias pelos quais ele foi alugado
# calcule entao o preço a pagar, sabendo que o carro custa R$60 por dia e R$0,15 por km rodado.

km = int(input("Digite a quantidade de KM percorrido: KM"))
dias = int(input("Digite a quantidade de dias alugado: "))
d = 60
KMs = 0.15

print("O preço total pelo aluguel do carro foi de R${}".format((km*KMs) + (dias * d)))