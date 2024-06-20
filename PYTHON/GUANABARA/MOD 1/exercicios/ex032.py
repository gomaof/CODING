# faça um programa que leia um ano qualquer e mostre se ele é BISSEXTO.
from datetime import date

print("DIGITE ' 0 'para analisar o ano atual; ")
ano = int(input("Digite o ano desejado: "))

if ano == 0:
    ano = date.today().year
if ano % 4 == 0 and ano % 100 != 0 or ano % 400 == 0:
    print(f"\nO ano {ano} é um ano BISSEXTO!\n")
else:
    print(f"\nO ano {ano} NÃO É um ano BISSEXTO!\n")