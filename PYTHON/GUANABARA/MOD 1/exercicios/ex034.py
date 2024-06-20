#Escreva um programa que pergunte ao usuário o salário de um funcionario e calcule o valor do seu aumento.
# Para salários superiores a R$1.250,00, calcule um aumento de 10%
# Para inferiores ou iguais, o aumento é de 15%
salario = float(input("Digite o valor de seu salário atual: R$ "))
if salario > 1250:
    total = salario +(salario * 0.10)
    print(f"Seu salário teve um aumento de 10% portanto a partir de agora seu salário será de R${total}")
else:
    total = salario + (salario * 0.15)
    print(f"Seu salário teve um aumento de 15%, portanto agora seu valor atual será de R${total}")