nome = input('Digite um nome composto')
print('-Seu nome é {} !-'.format(nome.upper()))
print('Olá {} !'.format(nome.lower()))
nome_sujo = int(len(nome))
espassos = int(nome.count(' '))
nome_limpo = int(nome_sujo - espassos)
print('Seu nome tem {} letras !'.format(nome_limpo))
lista = nome.split()
print('Seu primeiro nome é {} !'.format(lista[0]))
print('Seu ultimo nome é {} !'.format(lista[len(lista)-1]))
print('Você tem "silva" no nome ?', 'silva' in nome.lower())
print('Seu nome tem {} vezes a letra A'.format(nome.lower().count('a')))
loc = int(nome.strip().lower().find('a'))+1
print('A primeira letra "a" aparece na posição {}'.format(loc))
print('A ultima vez que aparece a letra "A" é na posição {}'.format(nome.lower().strip().rfind('a')+1))

n = int(input('Digite um número de 0 a 9999'))
numero = '{:>4}'.format(n)
print('Seu numero é {} !'.format(numero.strip()))
print('''A unidade desse numero é igual a {}
a dezena é igual a {}
a centena é igual a {}
a quarta casa do numero é representada por {} !'''
      .format(numero[3], numero[2], numero[1], numero[0]))
# matematiamente
'''unidade = n % 10'''
unidade = n // 1 % 10
dezena = n // 10 % 10
centena = n // 100 % 10
milhar = n // 1000 % 10
print('unidade = {}\ndezena = {}\ncentena = {}\nmilhar = {}'.format(unidade, dezena, centena, milhar))
# n // 10 retira oq vem antes da casa da dezena, ja a %10 retira oq vem depois da dezena

c = str(input('Digite o nome de uma cidade :').lower())
print('Essa cidade começa com o nome "Santo"?', 'santo' in c.split()[0])
