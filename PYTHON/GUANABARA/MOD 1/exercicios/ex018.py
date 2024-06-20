# faca um programa que leia o angulo qualquer e mostre na tela o valor do seno, cosseno e tangente desse angulo
import math
ang = float(input("Digite o angulo desejado: "))

seno = math.sin(math.radians(ang))
coss = math.cos(math.radians(ang))
tang = math.tan(math.radians(ang))

print("O SENO do angulo {} é igual a: {:.2f}\n\nO COSSENO do angulo {} é igual a: {:.2f}\n\nA TANGENTE do angulo {} é igual a: {:.2f}\n".format(ang, seno, ang, coss, ang, tang))