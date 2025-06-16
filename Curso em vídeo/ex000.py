n1 = float(input('\033[1;35mDigite um número.'))
n2 = float(input('Agora, digite outro número.'))

s = n1 + n2

print('\033[1;30;46mA soma de \033[1;41m{}\033[1;30;46m com \033[1;30;41m{}\033[1;30;46m é igual a {}\033[m'.format(n1,
                                                                                                            n2, s))
print('\033[1;35mA soma vale \033[1;33m{}\033[1;35m !'.format(n1+n2))
print('A soma vale \033[1;36m{}\033[1;35m !'.format(s))

m = n1 * n2
d = n1 / n2
di = n1//n2
es = n1**n2
media = (n1 + n2) / 2

print('\033[0;31m{} \033[4;34mvezes\033[0;31m {} \033[4;34mda\033[0;31m {}\033[0;32m'.format(n1, n2, m))
print('{} dividido por {} dá {:.3f}'.format(n1, n2, d))
print('{} dividido em partes inteiras por {} dá {}'.format(n1, n2, di))
print('{} elevado a {} da {:.3f}'.format(n1, n2, es))
print('A media de {} e {} é {:.2f}'.format(n1, n2, media))

print('\033[1;35mUma parede de {} metros por {} metros tem {} metros quadrados.'.format(n1, n2, m))
print('Se 1 litro de tinta pinta 2 metros quadrados.\nSerá necessário {} litros de tinta para pintar a parede'
      .format(m/2))

n3 = (float(input('Digite mais um número : ')))

na = n3 - 1
np = n3 + 1

print('O número que vem antes de {} é {}, já o número posterior a {} é {}.'.format(n3, na, n3, np))

print('O número antecessor de {} é {}, e o número posterior é {}'.format(n3, (n3-1), (n3+1)))

n3x2 = n3*2
n3x3 = n3*3
rn3 = n3**(1/2)

print('O dobro de {} é {} '.format(n3, n3x2))
print('O triplo de {} é {}'.format(n3, n3x3))
print('A raiz quadrada de {} é {:.2f}'.format(n3, rn3))

print('Para {} metros, há {:.0f} centímetros ou {:.0f} milímetros'.format(n3, n3*100, n3*1000))

print('\033[33m''-'*20)
print('\033[1;36mA taboada de {} é :\
\n\033[0;32m{} x 1  = {}\n{} x 2  = {}\n{} x 3  = {}\n{} x 4  = {}\n{} x 5  = {}\
\n{} x 6  = {}\n{} x 7  = {}\n{} x 8  = {}\n{} x 9  = {}\n{} x 10 = {}'
      .format(n3, n3, n3, n3, n3 * 2, n3, n3 * 3, n3, n3 * 4, n3,
              n3 * 5, n3, n3 * 6, n3, n3 * 7, n3, n3 * 8, n3, n3 * 9, n3, n3 * 10))
print('\033[33m''-'*20)

print('\033[1;35m{:.2f} reais, convertidos pra dolars, em uma comparaçao de 3.27rs pra 1us, dão {:.2f} dolars'
      .format(n3, n3/3.27))

desc5percent = (n3/100)*5
valor = n3 - desc5percent

print('Um produto de {} reais, com 5% de desconto passa a valer {} reais.'.format(n3, valor))

salario15percent = (n3/100)*15
salarioaumentado = n3 + salario15percent

print('Um salario de {} reais, com aumento de 15%, passa a valer {} reais.'.format(n3, salarioaumentado))

print('_'*30)
print('-Você alugou um carro !-\nVocê ira pagar 60 reais por dia e 25 centavos por km rodado')
d = int(input('Por quantos dias você alugou ?'))
km = float(input('Quantos Kms foram rodados ?'))
v = float((d*60) + (km*0.25))
print('Você irá pagar {:.2f} reais pelo aluguel !'.format(v))
print('_'*30)

# divisão com 3 flutuantes - depois da virgula
print('{} dividido por {} dá {:.3f}'.format(n1, n2, d))

# juntar linhas --- ,end=''
print('{} vezes {} da {}'.format(n1, n2, m), end=' e ')
print('{} dividido por {} dá {:.3f}'.format(n1, n2, d))

# quebrar linha --- \n
print('{} vezes {} \nda {}'.format(n1, n2, m))
