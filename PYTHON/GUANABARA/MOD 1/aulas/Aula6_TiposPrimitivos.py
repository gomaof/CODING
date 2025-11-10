# o tipo da variavel deve ser especifica incialmente


n1 = input("Digite um valor: ")
print("Tipo do valor = ", type(n1))
print("valor digitado = ", n1)

# Agora com o tipo da variavel;

n1 = int(n1)
print("Valor com tipo inteiro agora = ", type(n1))

# Temos agora o .format e chaves {}

# As chaves {} são marcadores de posição dentro de uma string.
# O método .format() serve para substituir essas chaves pelos valores que você passar dentro dos parênteses.



# agora com float

numero1 = float(input("Digite um novo valor para somar: "))
numero2 = float(input("Digite outro valor para somar: "))
soma = numero1 + numero2
print("A soma entre {} e {} vale {}".format(numero1, numero2, soma))

# com .format antes de iniciar para ficar mais limpo e não precisar escrever .format e usar o atalho:

print(f"Agora sem .format e do tipo float/real. A soma entre {numero1} e {numero2} vale {soma}")


# agora com str

print("#######################")

soma = str(soma)
print("Tipo do valor = ", type(soma))
print("valor = ", soma)

# agora tipo booleano, lembrando que se tiver valor ele vira verdadeiro, se não tiver nada ele é falso

print("#######################")

soma = bool(soma)
print("Tipo do valor = ", type(soma))
print("valor = ", soma)

# agora sem o tipo primitivo

print("#######################")

soma = str(soma)
print("Tipo do valor = ", type(soma))
print("valor = ", soma)
print(soma.isnumeric())

# "123".isnumeric()     # True
# "12.3".isnumeric()    # False  (porque tem ponto)
# "abc".isnumeric()     # False
# "".isnumeric()        # False  (string vazia)

print("É um alpha? ", soma.isalpha())