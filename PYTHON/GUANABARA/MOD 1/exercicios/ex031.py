# desenvolva um progama que pergunte a distancia de uma viagem em KM.
#Calcule o preço da passagem, cobrando R$0,50 por Km para viagens de até 200Km e R$0,45 para viagens mais longas.
km = float(input("Digite a distancia percorrida em KMs: "))
if km <= 200:
    p1 = 0.50 * km
    print("Como a Distância foi INFERIOR à 200Km, o preço da passagem foi de R${:.2f} por Kms rodados.".format(p1))
else:
    p2 = 0.45 * km
    print("Como a Distância foi SUPERIOR à 200Km, o preço da passagem foi de R${:.2f} por Kms rodados.".format(p2))
