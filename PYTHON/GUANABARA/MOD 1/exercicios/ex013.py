# faça um algoritmo que leia o salário de um funcionario e mostre seu novo salário com aumento de 15% 

n1 = float(input("Digite o valor total: "))
n2 = n1 * 0.15
t = n1 + n2

print("Seu salário informado foi de R${:.2f}\nCom o aumento de 15%, seu salário atual ficou R${:.2f}".format(n1, t))