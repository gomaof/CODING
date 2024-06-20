#Crie um programa que leia um numero inteiro e mostre na tela se ele é PAR ou IMPAR.
num = int(input("Digite um número: "))
div = num % 2
if div == 0:
    print('O número {} é PAR!'.format(num))
else:
    print("O número {} é IMPAR!".format(num))