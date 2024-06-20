# desenvolva um programa que leia o comprimento de tres retas e diga ao usiario se elas podem ou nao formar um triangulo.
print("--="*20)
print("Analisador de TRIANGULOS...")
print("--="*20)
r1 = float(input("Primeiro Segmento: "))
r2 = float(input("Segundo Segmento: "))
r3 = float(input("Terceiro Segmento: "))

if r1 < r2 + r3 and r2 < r1 + r3 and r3 < r1 + r2:
    print("Os Segmentos acima PODEM FORMA UM TRIGANGULO!")
else:
    print("Os Segmentos acima NÃO PODEM FORMAR UM TRIANGULO!")