nome = input('Qual é o seu nome ?')
# normal
print('Olá {} !'.format(nome))

# min 10 de espaço
print('Olá {:10} !'.format(nome))

# 10 espaço pra esquerda
print('Olá {:<10} !'.format(nome))

# 10 espaço pra direita
print('Olá {:>10} !'.format(nome))

# 10 espaço centralizado
print('Olá {:^10} !'.format(nome))

# 10 espaço centralizado preenchido com x
print('Olá {:x^10} !'.format(nome))

# juntar linhas --- ,end=''
# quebrar linha --- \n
# texto grande = """ no começo e no final

x = input('Digite algo.')
print('O valor primitivo é ', type(x))
print('Isso é um número ?', x.isnumeric())
print('Isso é formado apenas de letras ?', x.isalpha())
print('Isso é formado por números e/ou letras ?', x.isalnum())
print('Isso é formado por letras maiúsculas ?', x.isupper())
print('Isso é formado por letras minúsculas ?', x.islower())
print('Isso é formado por espaços ?', x.isspace())

frase = 'Curso em vídeo Python'
#        0123456789   ...    20

# letra
print(frase[3])

# dividir por palavras
frase_separada = (frase.split())
print(frase_separada)
print(frase.split())

# frase_separada é uma lista, para escolher uma das palavras :
print(frase_separada[0])

# para escolher um letra em uma palavra :
print(frase_separada[0][3])

# fatiar  --- 3 a 12, a última não conta
print(frase[3:13])

# fatiar do inicio ao 12
print(frase[:13])

# dividir de 2 em 2
print(frase[::2])

# fatia de 2 em 2
print(frase[0:15:2])
# inicio, fim, sequência

# contar o minusculo na frase
print(frase.count('o'))

# contar O na frase
print(frase.upper().count('O'))
# upper = deixar tudo maiúsculo, lower = minúsculo

# len --- tamanho da frase
print(len(frase.strip()))
# strip tira os espaços vazis no começo e fim

# trocar palavra na frase
print(frase.replace('Python', 'Android'))
# a frase so tem a palavra trocada na linha de comando, para manter a alteraçao :
frase = frase.replace('Python', 'Android')

#verificar se um palavra esta dentro da frase - T ou F
print('Python' in frase)

#find - aonde fica - o primeiro que aparece
print(frase.find('Curso'))
#encontrar o ultimo - r = direita
print(frase.rfind('Curso'))
#ou, para nao ter erro de maiusculo e minusculo
print(frase.lower().find('curso'))
