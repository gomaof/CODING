#cadeia de caracteres (string)
#modos de manipular
#o python nao diferencia letra maiuscula de minucula
# ========================================================================================================================================================

#fatiamento
# frase(9:21:2)     1 numero é o inicio 2 é o final 3 é de quanto em quanto ele deve pular

# ========================================================================================================================================================

#análise (EXEMPLOS ABAIXO)
# = len(frase)     essa funcao conta quantos carecteres tem na frase

# frase.count('o') vai buscar por todos os caracteres com letra o e contar quantas vezes aparece a letra o em minisculo
# se eu colocar frase.count('o',0, 13) ele vai contar com fatiamento, do 0 ao 13 quantos 'o' tem

# frase.find('deo')    ele vai encontrar aonde tem essa frase e aonde começou   / se n houver nenhuma frase que exista o valor recebe o valor -1 pois nao foi encontrado

# 'curso' in frase      ele vai escrever true porque existe a frase


# ========================================================================================================================================================
# Transformação
# frase.replace('python', 'android')     ele substitue a frase python por android

# frase.upper()   siginifica para cima ou seja, oque não for maiusculo ele opera e aumenta

# frase.lower()    é o contrario da de cima

# frase.captalize()     ele vai pegar todos os caracteres da frase e APENAS O PRIMEIRO caractere, ou seja, a primeira letra da frase que vai ficar Maiuscula, enquanto o resto fica em minuscula

# frase.title()   parecido com o de cima, mas a cada palavra suas iniciais serão transformadas em maiusculas

# frase.strip()   ele vai remover todos os espaços inuteis da string

# frase.rstrio()   ele vai remover somente o lado direito da string (right)
# frase.lstrip()    vai remover apenas o lado esquerdo da string (left)


# ========================================================================================================================================================
# DIVISÃO
# frase.split()   cada palavra dentro de uma string recebe uma indexisação nova, ou seja, cada palavra tem seus proprios caracteres. TIPO... a primeira palavra é seperada e tem no total 4 caracteres, e no final de tudo tem tantas palavras acumuladas dentro da mesma string (ELE GERA UMA LISTA PARA CADA PALAVRA)

# ========================================================================================================================================================
# JUNÇÃO
# '-'.join(frase)    ele vai juntar todas as palavras dentro da string porem com o '-' sinal no meio delas como se estivesse substituindo o espaço entre elas

# ========================================================================================================================================================
#  DICAS
# se eu escrever um texto grande tipo:

print("""blablablablbalabllabablblabllbalba
ablalblbalbslaskkbmwakmwkmabawbaw
wapmrkowmadoiwnmadpmnwandwadawdmawdmawnmdkiwamdwa?
wmdoanmdwjnwakdbgkawbdbawjbdshndasdawhd1111111\n\n\n""")

# essa interatividade vai levar ele a escrever exatamente como esta acima

# outra dica:
# se eu fizer     frase.replace('python', 'android')   ele não vai substitiur salvando o valor a essa frase, até porque a frase criada ela é imutável, só pode-se alterar se for atribuida um valor a ela, tipo declarar frase = frase.replace('python', 'android') ai ele carrega o resultado com essa nova alteração.

frase = "Curso em Vídeo Python"
dividido = frase.split()
print(dividido[0])

print(dividido[2] [3]) #ele vai mostrar a palavra listada e o caractere solicitado