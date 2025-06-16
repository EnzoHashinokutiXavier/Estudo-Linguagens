

# Laço = for
# laço c no intervalo(0,3)
# for c in range(0,3):     -> 3 vezes (0, 1, 2. 3para)

# contar:
# for c in range(0, 3):
#    print(c)
# 0
# 1
# 2

# contar para trás :
# for c in range(3, 0, -1)
# 3
# 2
# 1

# contar de 2 em 2
# for c in range(0, 5, 2)
# 0
# 2
# 4

n = int(input('Digite um número:'))
for c in range(0, n+1):
    print(c)
print('Fim')

i = int(input('Início:'))
f = int(input('Fim:'))
p = int(input('Passo:'))
for c in range(i, f+1, p):
    print(c)

# Somando   ->  s += n
s = 0
for c in range(0, 4):
    n = int(input('Digite um número:'))
    s += n
print('A soma deu {}'.format(s))
