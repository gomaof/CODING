# escreva um programa que faça o computador "pensar" em um numero inteiro entre 0 e 5 e peça para o usuário tentar descobrir qual foi o numéro escolhido pelo computador.
# O PROGRAMA DEVERÁ encrever na tela se o usuário venceu ou perdeu
import random
n0 = 0
n1 = 1
n2 = 2
n3 = 3
n4 = 4
n5= 5

#DE ACORDO COM A RESOLUÇÃO eu podia ter usado:
# from random import randint
# computador = randint(0,5)

#Dica EXTRA USAR O SLEEP.
#from time import sleep
#sleep(3)

lista = [n0, n1, n2, n3, n4, n5]
sorteio = random.choice(lista)

desafio = int(input('Desafio você adivinhar o numero de 0 a 5 que o computador escreveu.\nTente acertar o numero digitando qual você acha que ele escolheu: '))
if desafio == sorteio:
    print('O número sorteado foi {}.\nPARABÉNS! Você ACERTOU!'.format(sorteio))
else:
    print('O número sorteado foi {}.\nVocê ERROU!'.format(sorteio))
print("BOM JOGO!")

