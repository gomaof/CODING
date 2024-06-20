#faça um programa que leia um numero inteiro e mostre na tela o seu sucessor e seu antecessor.
n1 = int(input("Escreva um numero: "))
ant = n1-1
suc = n1+1
print ("O numero escolhido foi {}:\n\nSeu antecessor é: {}\nE seu sucessor é: {}".format(n1, ant, suc))