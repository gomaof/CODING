# faça um programa que leia o nome completo de uma pessoa, mostrando em seguida o primeiro nome e o ultimo nome separadamente

nome = str(input("Escreva seu nome completo: ")).strip()

print("Seu primeiro e último sobrenome é: {} {}".format(nome.split()[0], nome.split()[-1]))