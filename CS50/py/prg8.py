import csv

with open("lista2.csv", "r") as file:
    reader = csv.reader(file)
    for row in reader:
        if row:  # ignora linhas vazias
            print(row[1])
