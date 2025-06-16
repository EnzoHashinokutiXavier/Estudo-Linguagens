import math
import random
#from math import sqrt
#import vem no começo

#math- ceil = arrendondar pra cima, floor = arrendondar pra baixo, trunc = eliminar da virgula pra frente
#      pow = potencia, sqrt = raiz quadrada, factorial = fatorial

n = float(input('Digite um número :'))
r = math.sqrt(n)
print('A raiz de {} é {}'.format(n, r))
print('A raiz de {}, arrendondada pra cima, é {}'.format(n, math.ceil(r)))
print('A raiz de {}, arrendondada pra baixo, é {}'.format(n, math.floor(r)))

pi = math.trunc(n)
print('A parte inteira do número é {} !'.format(pi))
print('A sua parte inteira é {} !'.format(int(n)))

#aleatório entre 0 e 1
p = random.random()
print(p)

#aleatório inteiro
i = random.randint(1, 10)
print(i)

#Sorteio
'''Choise = escolha ; shuffle = embaralhar'''
lista = ('João', 'Pedro', 'Cléber', 'Você')
sorteado = random.choice(lista)
print('O sorteado foi {:^6} !'.format(sorteado))
sorteio = random.sample(lista, k=4)
print('A ordem de sorteio foi :', sorteio)

n1 = str(input('Digite um nome'))
n2 = str(input('Digite outro nome'))
n3 = str(input('Digite mais um nome'))
lista2 = [n1, n2, n3]
random.shuffle(lista2)
print('A sequencia é :', lista2)

# Triângulo retângulo
c1 = float(input('Digite o comprimento em centímetros do cateto oposto de um triângulo retângulo'))
c2 = float(input('Agora, digite o comprimento em centímetros do cateto adjacente'))
h2 = (c1*c1) + (c2*c2)
h = math.sqrt(h2)
hi = (c1**2 + c2**2)**(1/2)
hip = math.hypot(c1, c2)
print('A hipotenusa do triângulo vale {:.2f} centímetros !'.format(h))
print('A hipotenusa do triângulo vale {:.2f} centímetros !'.format(hi))
print('A hipotenusa do triângulo vale {:.2f} centímetros !'.format(hip))

# Sen Cos Tan
# o math so calcula sen,cos e tan em radiano, nao calcula em graus
'''Conversão de grau pra radiano é -math.radians()-'''
angulo = math.radians(float(input('Digite um ângulo :')))
sen = math.sin(angulo)
cos = math.cos(angulo)
tan = math.tan(angulo)
print('O ângulo tem como seno, cosseno e tangente respectivamente iguais a {:.3f} ; {:.3f} e {:.3f}'
      .format(sen, cos, tan))

# diferente !=
