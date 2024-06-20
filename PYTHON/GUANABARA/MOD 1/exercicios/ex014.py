# Escreva um programa que converta uma temperatura digitada em ºC e converta em ºF.

temp = float(input('Digite a temperatura em ºC: '))
f = temp * 1.8 + 32

print('A temperatura de {}ºC corresponde a {:.1f}ºF.'.format(temp, f))

