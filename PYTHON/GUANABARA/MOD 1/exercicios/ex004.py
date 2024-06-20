# faça um programa que leia algo pelo teclado e mostre na tela o seu tipo primitivo e todas as informações possiveis sobre ele.

texto = input('Digite algo: ')

print('O tipo primitivo desse valor é ', type(texto))

print('Só tem espaços? ', texto.isspace())

print('É um número? ', texto.isnumeric())

print('É alfabético? ', texto.isalpha())

print('É alfanumérico? ', texto.isalnum())

print('Está em maiúsculas? ', texto.isupper())

print('Está em minúsculas? ', texto.islower())

print('Está capitalizada? ', texto.istitle())