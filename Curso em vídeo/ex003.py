import emoji
from math import sin, cos, tan, radians
from time import sleep
from datetime import date
import pygame
pygame.init()

# emojize --- vira emoji
# demojize --- transforma em texto
# lista dos emojis no pypi
# https://carpedm20.github.io/emoji/all.html?enableList=enable_list_pt

# joinha
print(emoji.emojize(':thumbs_up:'))
print(emoji.demojize('Python is 👍'))

print(emoji.emojize(':backhand_index_pointing_right:'))
print(emoji.demojize('👉'))

#Audio mp3
print(input('Agora, aprecie a miku'))
pygame.mixer.music.load('ex004m.mp3')
pygame.mixer.music.play()
pygame.event.wait()
print(input('Só escute'))

angulo = radians(float(input('Digite um ângulo :')))
sen = sin(angulo)
coss = cos(angulo)
tang = tan(angulo)
print('O ângulo tem como seno, cosseno e tangente respectivamente iguais a {:.3f} ; {:.3f} e {:.3f}'
      .format(sen, coss, tang))

# enfeite
print('-=-'*10)
print('='*30)

# esperar
print('PROCESSANDO...')
sleep(2)
print('CONCLUIDO.')

# saber data do aparelho
ano = date.today().year
print('O ano atual é {}'.format(ano))

# coloração padrão ANSI
# \033[ m    é o padrão
# entre o [ e o m : stilo, texto, background
# stilo 0 nenhum, 1 negrito, 4 sublinhado, 7 invertido
# cores  branco vermelho verde amarelo azul lilás ciano cinza
# texto  30     31       32    33      34   35    36    37
# back   40     41       42    43      44   45    46    47
# testo branco sem stilo com fundo vermelho
# \033[0;30;41m
# texto amarelo sublinhado de fundo azul
# \033[4;33;44m
# texto branco, estilo padrão com fundo preto (Padrão do terminal)
# \033[m
# fundo branco com letra preta --- coloca letra branca e inverte no 7
# /033[7;30m
print('\033[1;41mTeste')
print('\033[1;41mTeste\033[m')

a = 3
print('O valor é \033[7;40m{}\033[m.'.format(a))
print('O valor é {}{}{}'.format('\033[4;30;45m', a, '\033[m'))
cores = {'padrao': '\033[m',
         'invertido': '\033[7m',
         'fundovermelho': '\033[41m'}
print('O número {}{}{} é ímpar'.format(cores['fundovermelho'], a, cores['padrao']))
