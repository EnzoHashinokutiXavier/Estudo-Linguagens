from time import sleep
from datetime import date

# Contagem regressiva
print('Se prepare para o estouro dos fógos !')
for c in range(3, 0, -1):
    sleep(1)
    print(c)
print('*fogos explodem*')

# Números pares entre 1 e 50
for c in range(2, 51, 2):
    print(c, end=' ')

# Soma dos ímpares, múltiplos de 3, entre 1 e 500
s = 0
for c in range(3, 501, 6):
    s += c
print(s)

# Tabuada
print('-_-_-_Tabuada_-_-_-')
n = int(input('Digite um número:'))
for c in range(1, 11):
    print('{} x {:2} = {:2}'.format(n, c, c*n))

# Soma de numeros pares
s = 0
for c in range(0, 6):
    n = int(input('Digite um número:'))
    if (n % 2) == 0:
        s += n
print('A soma dos números pares é {}'.format(s))

# PA
print('Vamos fazer uma progressão aritimética!')
n = int(input('Digite o primeiro termo:'))
r = int(input('Digite a razão:'))
print(n , end=' -> ')
for c in range(0, 10):
    n += r
    print('{}'.format(n), end=' -> ')
print('FIM')

# Númro primo
q = 0
n = int(input('Digite um número:'))
for c in range(1, n + 1):
    if n % c == 0:
        print('\033[35m', end='')
        q += 1
    else :
        print('\033[m', end='')
    print('{}'.format(c), end=' ')
if q > 2:
    print("\033[31mO número digitado não é primo")
else:
    print("\033[36mO número digitado é primo")

# Palíndromo
frase = str(input('Digite uma frase :')).strip().upper()
palavras = frase.split()
junto = ''.join(palavras)
inverso = ''
for letra in range(len(junto) -1, -1, -1):
    #começa na ultima, para na primeira, desce uma casa a cada letra
    #contagem das letras do fim ao começo
    inverso += junto[letra]
if inverso == junto:
    print('É um palíndromo')
else:
    print("Não é um palíndromo")

# Maioridade
maior = 0
x = 0
tempo = int(date.today().year)
for c in range(1, 6):
    x += 1
    nasc = int(input('Digite o ano de nascimento da pessoa {}:'.format(x)))
    if (tempo - nasc) >= 18:
        maior += 1
menor = 5 - maior
print('{} pessoas são de maior e {} são menor de idade'.format(maior, menor))

# Alturas
for c in range(1, 6):
    h = float(input('Digite a altura da pessoa {}'.format(c)))
    if c == 1:
        menor = h
        maior = h
    else:
        if h > maior:
         maior = h
        if h < menor:
         menor = h
print('A menor altura é {}, e a maior {}'.format(menor, maior))

# Analise de dados    - Deu erro   NAO FUNCIONA
mulheres = 0
mediaidade = 0
idadehomem = 0
nomehomem = ''
for c in range(1, 5):
    print('-------{}ºPessoa-------'.format(c))
    nome = str(input('Nome:')).strip()
    idade = int(input('Idade:'))
    sexo = str(input('Sexo [M/F]:').upper())
    if sexo in 'Mm' and idade > idadehomem:
        idadehomem = idade
        nomehomem = str(nome)
    if idade < 20 and sexo in 'Ff':
        mulheres += 1
    mediaidade += (idade/4)

print('---------------------')
print('A média das idades é {:.1f}'.format(mediaidade))
print('O grupo tem {} mulheres com menos de vinte anos'.format(mulheres))

if idadehomem == 0:
    print('Não hà homens no grupo')
else:
    print('O homem mais velho tem {} anos e se chama {}.'.format(idadehomem, nomehomem))
