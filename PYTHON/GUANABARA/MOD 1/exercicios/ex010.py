# crie um programa que leia quanto dinheiro uma pessoa tem na carteira e mostre quantos dolares ela pode comprar
# considere o dolar: US$1,00 = R$3,27

carta = float(input("Digite o saldo total de sua carteira: R$"))
dolar = carta / 3.27

print("\nSaldo total digitado é R${:.2f}\nConvertendo em Dolar, seu saldo disponível será de U${:.2f}".format(carta, dolar))