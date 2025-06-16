idade = int(input('Digite a idade no nadador para saber sua categoria :\n'))
if idade <= 4:
    print('Idade nn permitida')
elif idade <= 7:
    print('Infantil A')
elif idade <= 10:
    print('Infantil B')
elif idade <= 13:
    print('Juvenil A')
elif idade <= 17:
    print("Juvenil B")
else:
    print('Adulto')


