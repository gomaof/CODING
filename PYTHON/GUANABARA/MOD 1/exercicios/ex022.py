#Crie um programa que leia o nome completo de uma pessoa e mostre:
# Nome com todas as letras maiusculas
# Nome com todas as letras minusculas
# Quantas letras ao todo (sem considerar espaços)
# quantas letras tem o primeiro nome

nome = str(input("Escreva seu nome completo: ")).strip()

separa = nome.split()

upper = nome.upper()
low = nome.lower()
letras = len(nome) - nome.count(' ')
first = separa[0]

print("""Com letra Maiscula:
      {}
Com letra Minuscula:
      {}
Quantidade de letras ao todo:
      {}
Seu primeiro nome e sua quantidade de letras no primeiro nome:
      {}  |   {}
      Nome    QTD  
 """.format(upper, low, letras, first, len(first)))