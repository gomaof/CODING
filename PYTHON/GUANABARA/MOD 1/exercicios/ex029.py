# escreva um programa que leia a velocidade de um carro.
# SE ele ULTRAPASSAR 80Km/h, mostre uma mensagem dizendo que ele foi multado.
# A multa vai custar R$7,00 por Km acima do limite.
V = int(input("Digite a velocidade que o carro estava: "))
if V > 80:
    print("Como a velocidade foi acima de 80Km/h, você foi MULTADO!")
    multa = (V - 80) * 7
    print('\nO valor da multa foi de R${:.2f}!'.format(multa))
else:
    print("A velocidade estava de acordo com a via.")