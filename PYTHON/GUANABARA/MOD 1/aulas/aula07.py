# ordem de precedência dos operadores aritméticos: () ** / * // % + -

#Aula a
# 4**3 = 64   ou  pow(4,3)
n1 = int(input('Um valor: '))
n2 = int(input('outro valor:'))

s = n1+n2
m = n1*n2
d = n1/n2
di = n1//n2
e = n1**n2

print ("A soma é {}, o produto é {} e a divisão é {:.1f}".format(s, m, d))
print("Divisão inteira {} e potência {}".format(di, e))