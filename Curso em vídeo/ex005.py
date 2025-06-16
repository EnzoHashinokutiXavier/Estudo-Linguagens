import random

# média
n1 = int(input('Digite uma nota :'))
n2 = int(input('Agora, digite outra nota :'))
m = (n1 + n2)/2
print('Sua média deu {:.1f} !'.format(m))
if m >= 6.0:
    print('Sua média foi boa ! Parabéns !')
else:
    print('Sua média foi ruim ! Estude mais !')
print('Muito bem !' if m >= 6.0 else 'Boa sorte na próxima !')

# Par ou ímpar
n1 = int(input('Digite um número inteiro'))
print('O número', n1, 'é par') if (n1 % 2) == 0 else print('O número', n1, 'é impar')

# adivinhe o número
n = random.randint(0, 5)
e = int(input('Escolha um número inteiro de 1 a 5'))
if n == e:
    print('Você acertou ! O número escolhido foi {}'.format(n))
else:
    print('Você errou ! O número escolhido foi {}'.format(n))

# multa de velocidade
v = int(input('Qual velocidade em km/h está seu veículo ?'))
if v <= 80:
    print('Parabéns, você está dentro do limite de velocidade')
else:
    print('Você ultrapassou o limite de velocidade !')
    print('Você recebeu uma multa de {} reais pelo excesso de velocidade'.format(7*(v-80)))

# aluguel de carro
d = int(input('Por quantos km você deseja alugar o carro ?'))
if d <= 200:
    print('O valor para o aluguél de {}km é {:.2f} reais'.format(d, d/2))
else:
    print('O valor para o aluguél de {}km é {:.2f} reais'.format(d, d*0.45))

# ano bisexto
a = int(input('Digite um ano'))
unidade = a % 10
numero = a - unidade
dezena = numero % 100
du = dezena + unidade
resto = du % 4
if resto == 0:
    print('O ano {} é bisexto.'.format(a))
else:
    print('O ano {} não é bisexto'.format(a))

# ordem de valor
n1 = int(input('Digite um valor inteiro :'))
n2 = int(input('Agora digite outro valor :'))
n3 = int(input('Digite mais um valor :'))
menor = n1
if n2 < n1 and n2 < n3:
    menor = n2
if n3 < n1 and n3 < n2:
    menor = n3
maior = n1
if n2 > n1 and n2 > n3:
    maior = n2
if n3 > n2 and n3 > n1:
    maior = n3
print('O maior valor é {} e o menor valor é {}.'.format(maior, menor))

# triãngulo
if n1 + n2 > n3 and n1 + n3 > n2 and n2 + n3 > n1:
    print('É possível formar um triângulo com essas medidas.')
    if n1 == n2 == n3:
        tipo = str('equilátero')
    elif n1 != n2 != n3 != n1:
        tipo = str('escaleno')
    else:
        tipo = str('equilátero')
    print('O triângulo é {}'.format(tipo))
else:
    print('Não é possível formar um triângulo com essas medidas.')

# Aumento de salário
s = int(input('Qual o seu salário em reais ?'))
if s <= 1250:
    al = (s*1.15)-s
    print('O aumento do seu salário em 15% equivale à {} reais'.format(al))
else:
    al = (s*1.10)-s
    print('O aumento do seu salário em 10% equivale à {:.2f} reais'.format(al))
