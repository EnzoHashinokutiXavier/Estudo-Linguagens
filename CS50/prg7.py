from csv import DictReader

with open("lista2.csv", "r") as ler:
    leitura_arquivo = DictReader(ler, fieldnames=["nome", "numero"])
    for linha in leitura_arquivo:
        print(linha)