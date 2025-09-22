import csv

nome = input("Digite seu nome : ")
numero = input("Digite seu numero : ")

with open("lista2.csv", "a") as arquivo:
    escrever = csv.DictWriter(arquivo, fieldnames=["nome", "numero"])
    escrever.writerow({"nome":nome, "numero":numero})