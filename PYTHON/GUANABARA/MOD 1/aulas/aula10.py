#CONDIÇÕES
#se = IF
#Senão = ELSE
#Estrura apenas com IF é simples, com ELSE é composta

jao = str(input('Qual é seu nome? '))
if jao == 'João':
    print('Que lindo nome você tem! <3')
else:
    print('Seu nome é bem comum!')
print('\nOlá, seja bem-vindo {}!'.format(jao))

print('\nPROXIMO EXEMPLO!')

n1 = float(input("Digite sua nota 1: "))
n2= float(input("Digite sua nota 2: "))
m = (n1 + n2)/ 2

if m >= 6.0:
    print('\nAPROVADO!')
else:
    print("REPROVADO!")

#PODEMOS USAR DE MODO SIMPLIFICADO TAMBÉM!
# print('APROVADO!' if m>=6 else 'REPROVADO!')