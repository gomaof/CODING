# escreva um programa que leia um valor em metros e o exiba convertido em centimetros e milimetros

n1 = int(input("Escreva a quantidade de metros: "))
cent = n1*100
mili = n1*1000

print("Quantidade de metros {}M, convertido em:\n\nCentimetros: {}C\nMilimetros: {}Ml".format(n1, cent, mili))