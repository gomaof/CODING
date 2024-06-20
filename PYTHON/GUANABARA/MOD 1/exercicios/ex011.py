# faça um programa que leia a largura e a altura de uma parede em metros, calcule a sua área e a quantidade de tinta necessaria para pinta-la, sabendo que cada litro de tinta, pinta uma área de 2m quadrados

l = float(input("Digite a largura da parede: "))
a = float(input("Digite a altura da parede: "))
area = l * a
tinta = area / 2
print("A area da parede é {}m² e a quantidade de tinta necessaria é {}l".format(area, tinta))