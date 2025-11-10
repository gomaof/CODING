# Faça um programa que leia algo pelo teclado e mostre na tela o seu tipo primitivo e todas as informações possiveis sobre ele 
# Se ele pode ser um numero, alfabetico e qualquer informação possível para extrair sobre ele


algo = input("Digite algo: ")

print("O tipo primitivo é: ", type(algo))
print("Só tem espaços? ", algo.isspace())
print("É um numero? ", algo.isnumeric())
print("É alfanumerico? ", algo.isalnum())
print("É alfabético? ", algo.isalpha())
print("Está em maiúsculas? ", algo.isupper())
print("Está em minúsculas? ", algo.islower())
print("Está capitalizada (quando inicio é maisculo e resto minusculo)? ", algo.istitle())