for c in range(1, 6):
    h = float(input('\033[1;34mDigite a altura da pessoa  {}\033[m'.format(c)))
    if c == 1:
        menor = h
        maior = h
    else:
        if h > maior:
         maior = h
        if h < menor:
         menor = h
print('\033[4;36m A menor altura é \033[4;31m{}\033[4;36m, e a maior \033[4;32m{}\033[m '.format(menor, maior))
