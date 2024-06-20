# faça um programa que leia o comprimento de cateto oposto e do cateto adjacente de um triangulo. calcule e mostre o comprimento da hipotenusa
# a² = b²+c²
import math
cato = int(input("Digite o valor do cateto oposto: "))
cata = int(input("Digite o valor do cateto adjacente: "))

soma = (cato**2) + (cata**2)
hipo = math.sqrt(soma)

print("O comprimento da Hipotenusa e igual a: {}".format(hipo))