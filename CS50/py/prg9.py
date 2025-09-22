import csv

with open("lista3.csv", "r") as file:
    reader = csv.DictReader(file)
    enzo, paulo, luiz = False, False, False
    for row in reader:
        if row:
            nome = row["nome"]
            print(nome)
            if nome == "Enzo":
                enzo = True
            elif nome == "Luiz":
                luiz = True
            elif nome == "Paulo":
                paulo = True

print(f"Enzo = {enzo}")
print(f"Paulo : {paulo}")
print(f"Luiz : {luiz}")
