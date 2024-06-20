# faça um algoritmo que leia o preço de um produto e mostre seu nome preço com 5% de desconto
p = float(input("Digite o preço do produto: "))
d = p * 0.05
t = p - d

print("O preço do produto digitado foi de R${:.2f}\nO desconto de 5% foi aplicado, ou seja, desconto de R${:.2f} foi feito.\n\n sendo assim o valor total será de R${:.2f}".format(p, d, t))