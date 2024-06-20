# um professor quer sortear um dos seus quatros alunos para apagar o quadro, faça um programa que ajude ele, lendo o nome deles e escrevendo o nome escolhido

import random

aluno1 = input("Digite o nome do aluno 1: ")
aluno2 = input("Digite o nome do aluno 2: ")
aluno3 = input("Digite o nome do aluno 3: ")
aluno4 = input("Digite o nome do aluno 4: ")

alunos = [aluno1, aluno2, aluno3, aluno4]
sorteio = random.choice(alunos)
print("O aluno sorteado aleatoriamente para apagar o quadro foi: {}".format(sorteio))