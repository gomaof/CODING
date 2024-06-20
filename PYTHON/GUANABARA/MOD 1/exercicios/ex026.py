# faça um programa que leia uma frase pelo teclado e mostre:
# quantas vezes aparece a letra "A"
# em que posição ela aparece a primeira vez
# em que posição ela aparece a ultima vez

frase = str(input("Digite uma frase: ")).strip()

print("A quantidade de letras 'A' que aparecem é igual: {}".format(frase.upper().count('A')))
print("A sua primeira aparição foi no caractere: {}".format(frase.replace(" ", '').upper().find('A')))
print("A sua ultima aparição foi no caractere: {}".format(frase.replace(" ", '').upper().rfind('A')))