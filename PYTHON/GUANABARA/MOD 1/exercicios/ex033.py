#faça um programa que leia tres numeros e mostre qual é o maior e qual é o menor

n1 = int(input("Digite um numero: "))
n2 = int(input("Digite outro numero: "))
n3 = int(input("Digite outro numero: "))

maior = n1
if n2 > maior:
    maior = n2
if n3 > maior:
    maior = n3

menor = n1
if n2 < menor:
    menor = n2
if n3 < menor:
    menor = n3
print (f"O maior numero foi: {maior}")
print (f"E o menor numero foi: {menor}")