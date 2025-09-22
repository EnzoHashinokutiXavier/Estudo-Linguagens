
## Acessar pasta oculta do git
- Gerenciador de arquivos
```
C:\programas\.git
```
## Iniciar Repositorio Local
```
git init
```

## Conectar repositório remoto
```
git remote add <nome> <link>
```

## Clonar repositório online
```
git clone <link>
```

## Clonar pasta trocando nome
```
git clone link novo-nome-da-pasta
```

## Clonar apenas uma branch
```
git clone link --branch nome --single-branch
```

## Status dos arquivos
```
git status
```

## Adicionar novo arquivo nao listados
```
git add nome
```

## Adicionar todos arquivos
```
git add .
```

## Commitar
```
git commit -m 'nome_do_commit'
```

## Enviar para repositório remoto
```
git push origin <branch>
```

## Ver branch e commit
```
git log
```

## Restaurar alterações
```
git restore <nome do arquivo>
```

## Mudar mensagem do ultimo commit
```
git commit --amend -m"nova mensagem"
```

## Acessar editor do nome de commit
```
git commit --amend
```

## Desfazer commit e retornar prum anterior
- pegar arquivos anteriores e adicionar na area de preparação
```
git reset --soft <hash do commit>
```

- adicionar arquivos como untracked files
```
git reset --mixed <hash do commit>
```

- ir direto para o commit anterior ignorando arquivos
```
git reset --hard <hash>
```

## Criar branch novabaseada na atual
```
git checkout -b <nome da branch>
```

## Mudar de branch
```
git checkout <nome>
```

## Mostrar ultimo commit de cada branch
```
git branch -v
```

## Deletar branch
```
git branch -d <nome>
```

## Quando tiver conflito entre branch local e remoto
```
git pull
```
- Apaga oq for excluir
```
git add .
git commit -m "frase"
git push
```

## Baixar alteração remota sem mesclar com local
```
git fetch origin <branch>
```

## Ver diferenças 
```
git diff <branch local> origin/<branch remoto> 
```

## Juntar
```
git merge origin/<branch remoto>
```

## Arquivar mudança para criar nova branch sem as alterações
```
git stash
```

## Listar modificação arquivada
```
git stash list
```

## Trazer modificação de volta excluindo da lista de arquivados
```
git stash pop
```

## Trazer deixando modificação nos arquivados
```
git stash apply
```