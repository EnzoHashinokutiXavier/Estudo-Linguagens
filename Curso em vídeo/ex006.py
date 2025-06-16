from datetime import date
from time import sleep
import random
# stilo 0 nenhum, 1 negrito, 4 sublinhado, 7 invertido
# cores  branco vermelho verde amarelo azul lilás ciano cinza
# texto  30     31       32    33      34   35    36    37
# back   40     41       42    43      44   45    46    47


# if     - alternativa
# elif   - outra alternativa
# else   - nenhuma das alternativas

# empréstimo sem taxas e juros
print('\033[36m''='*80)
v = float(input('\033[35mEm reais, qual o valor do empréstimo que deseja para comprar sua casa ?'))
s = float(input('Quantos reais você recebe de salário ?'))
a = float(input('Em quantos anos deseja pagar o empréstimo ?'))
p = v/(a * 12)
if p <= (s/10)*3:
    print('\033[1;32mSeu empréstimo foi aprovado e será cobrado {:.2f} reais por mês.'.format(p))
elif p > (s/10)*3:
    print('\033[1;31mSeu empréstimo foi negado por corresponder acima de 30% da sua renda mensal.')
print('\033[36m''='*80)

# Número Maior
n1 = float(input('Digite um número :'))
n2 = float(input('Agora digite outro número :'))
if n1 > n2:
    print('O número maior é {}'.format(n1))
elif n2 > n1:
    print('O número maior é {}'.format(n2))
else:
    print('Não há número maior, ambos são iguais')

# Alistamento Militar
nasc = int(input('Em que ano você nasceu ?'))
ano = int(date.today().year)
idad = ano - nasc
if idad == 18:
    print('Você faz/fez 18 anos este ano, é hora de se alistar para o exército')
elif idad < 18:
    print('Você ainda não pode se alistar, seu alistamento será daqui {} ano(s).'.format(18-idad))
elif idad > 18:
    print('Já passou o tempo do seu alistamento. Seu alistamento foi a {} ano(s).'.format(idad-18))

# Natação
print('Você tem {} anos !'.format(idad))
if idad <= 9:
    categoria = str('mirim')
elif idad <= 14:
    categoria = str('infantil')
elif idad <= 19:
    categoria = str('junior')
elif idad <= 25:
    categoria = str('sênior')
else:
    categoria = str('master')
print('Você está na categoria {} da natação !'.format(str(categoria)))

# IMC
peso = float(input('Digite seu peso em kg :'))
altura = float(input('Digite sua altura em metros :'))
imc = peso / (altura**2)
print('Seu IMC é de {:.2f}'.format(imc))
if imc <= 18.5:
    classifi = str('abaixo do peso')
elif 25 > imc > 18.5:
    classifi = str('no peso ideal, parabéns')
elif 30 > imc >= 25:
    classifi = str('levemente acima do peso')
elif 35 > imc >= 30:
    classifi = str('com obesidade grau 1')
elif 40 > imc >= 35:
    classifi = str('com obesidade grau 2 (severa)')
elif imc >= 40:
    classifi = str('com obesidade grau 3 (mórbida')
print('Você está {} !'.format(classifi))

# preço do produto
print('\033[32m''=='*20)
valor = float(input('Digite o valor do produto em reais :'))
print('=='*20)
print('\033[33;1m''-'*57)
print("""Pagamentos em dinheiro ou cheque recebem 10% de desconto;
Pagamentos no cartão a vista recebem 5% de desconto;
Em até 2x no cartão não tem o preço alterado;
3x ou mais recebe 20% de juros simples por mês.""")
print('-'*57)
confirmar = input('\033[32m-Aperte enter para continuar-')
print('\033[35m''-'*40)
metodo = int(input("""Para pagamento em dinheiro ou cheque digite 1 (um).
Para cartão a vista, digite 2 (dois).
Para cartão parcelado em duas vezes, digite 3 (três).
Para cartão parcelado em 3 ou mais vezes, digite 4 (quatro):"""))
print('-'*40)
if metodo == 1:
    vf = (valor / 10)*9
    desconto = str('10%')
elif metodo == 2:
     vf = (valor / 100)*95
     desconto = str('5%')
elif metodo == 3:
    vf = valor
    desconto = str('0%')
elif metodo == 4:
    vezes = int(input('Em quantas vezes será parcelado :'))
    vf = valor + ((valor*20*vezes)/100)
    desconto = str('{}%'.format(-(20 * vezes)))
if metodo == 1 or metodo == 2 or metodo == 3 or metodo == 4:
    print("""Valor do produto : {}
Porcentagem de desconto : {}
Valor Total : {}""".format(valor, desconto, vf))
else: print('Nenhum método de pagamento selecionado')
print('-'*40)

# Jokenpo
print('\033[37m')
print('-_-_-_JoKenPô!_-_-_-')
itens = ('Pedra', 'Papel', 'Tesoura')
robo = random.randint(0, 2)
sleep(2)
escolha = int(input('''[ 0 ] Pedra
[ 1 ] Papel
[ 2 ] Tesoura
Escolha uma opção :'''))
if escolha != 1 and escolha != 2 and escolha != 0:
    print('Você não selecionou uma das opções !')
    breakpoint()
print('Jo')
sleep(1)
print('Ken')
sleep(1)
print('Pô!')
sleep(1)
print('-_'*20)
print("""Você escolheu {} !
A máquina escolheu {} !""".format(itens[escolha], itens[robo]))
if escolha == robo:
    resultado = 0
elif escolha == 0:
    if robo == 1:
       resultado = 1
    else:
       resultado = 2
elif escolha == 1:
    if robo == 2:
        resultado = 1
    else:
        resultado = 2
elif escolha == 2:
    if robo == 0:
        resultado = 1
    else:
        resultado = 2
if resultado == 0:
    print('---Vocês empataram!---')
    sleep(1)
    print('Tente novamente!')
elif resultado == 1:
    print('---Você perdeu!---')
    sleep(1)
    print('Boa sorte na próxima!')
elif resultado == 2:
    print("---Você ganhou!---")
    sleep(1)
    print('Parabéns!')
