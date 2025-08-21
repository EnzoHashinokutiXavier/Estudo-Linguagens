import csv

with open("lista3.csv", "r") as file:
    reader = csv.DictReader(file)
    counts = {}
    for row in reader:
        if row:
            name = row["nome"]
            if name in counts:
                counts[name] += 1
            else:
                counts[name] = 1

# Printa em ordem de entrada (quais foram os primeiros a serem contabilizados)
for nome in counts:
    print(f"{name}: {counts[name]}")

# Printa em ordem alfabetica
for nome in sorted(counts):
    print(f"{name}: {counts[name]}")

# Printa em ordem crescente
for nome in sorted(counts, key=counts.get):
    print(f"{name}: {counts[name]}")

# Printa em ordem decrescente
for nome in sorted(counts, key=counts.get, reverse = True):
    print(f"{name}: {counts[name]}")