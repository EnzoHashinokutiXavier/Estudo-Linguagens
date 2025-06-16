#while = até acontecer algo

#Abrir e Fechar arquivo                  - abriu fechou, para nao ocupar ram do pc
#arquivo = open('arquivo.txt','r')        - r para leitura read
#leitura = arquivo.read()
#arquivo.close()
#print(leitura)

#Abrir um arquivo sem precisar fechar
#with open('caminho', 'r') as arquivo:'             - r para leitura
#    leitura = arquivo.read()
#print(leitura)
#Arquivo fecha apos terminar o with

#Criar arquivo                                 - se o arquivo nao existe é criado, se existe, substituido
#with open('caminho', 'w')  as arquivo:     - w para criar write
#   arquivo.write('mensagem q vc quer escrever')

#para adicionar ao arquivo ou se le oq tem nele e escreve denovo ou adiciona diretamente

#adicionar fake
#with open('caminho') as arquivo:
#   conteudo = arquivo.read()
#conteudo = conteudo + '\ninformaçao adicionada'
#with open('caminho', 'w') as arquivo:
#   arq.write(conteudo)

#adicionar uma lista de strings
#lista = ('palavra1', 'palavra2', ...)
#with open('caminho', 'w') as abrir
#   abrir.writelines(lista)
