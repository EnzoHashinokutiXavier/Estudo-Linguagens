import csv

arquivo = open("lista.csv", "a")

nome = input("Digite seu nome : ")
numero = input("Digite seu numero : ")

escrever = csv.writer(arquivo)
escrever.writerow([nome, numero])

arquivo.close