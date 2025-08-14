pessoas = {
    "Enzo" : "123456",
    "Luiz" : "2345678",
    "Paulo": "8922"
}

resposta = input("Digite seu nome : ")

if resposta in pessoas:
    print("Seu código : {}".format(pessoas[resposta]))

else:
    print("Código não encontrado")
