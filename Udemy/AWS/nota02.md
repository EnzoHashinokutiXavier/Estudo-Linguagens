# AWS S3
### Simple storage service

- "HD na nuvem"

- Escalabilidade infinita : sem tamanho máximo

- Doc, xls, mp3, mp4, etc

- PAY-AS-YOU-GO

- Durabilidade 99.999...% : o quão é confiável

- S3 é como um armário, que pode criar várias gavetas
- As gavetas seriam as Buckets, como pasta no windows

### Buckets

- upload de arquivos ou folders (pastas)

- pode criar quantas buckets quiser, aonde quiser

- cada bucket tem nome único

- 3 a 63 caracteres, pode ter ponto e hifem

- General : Recomendado para mistura de az
- Directory : Baixissima latência, ex : jogos

- Copy settings from existing bucket
    - copiar configuração de bucket já existente

- Object Ownership
    - ACLs : lista de acessos / permissões e bloqueios

- Ao criar todo acesso público é bloqueado

- Tags : organizar recursos na AWS

- Encriptação

- Bucket key

normalmente não se envia arquivos diretamente para bucket
mas envia de algum serviço da aws através de algum software, api ou app para o S3  
ex : servidor envia via api backup do banco de dados


### Classes de armazenamento

- S3 Standard
    - Alta durabilidade, disponibilidade e baixa latencia
    - acesso frequente
    - sites, arquivos usados diariamente

- S3 Intelligent-Tiering
    - Move automaticamente entre níveis com base no uso
    - padrão de acesso imprevisível 
    - fotos de um app que o usuário pode ou não acessar

- S3 Standard-IA
    - IA = infrequent access, meor custo, cobra por acesso
    - acesso raro, mas precisa estar disponível rápido
    - backup mensal de sistemas críticos

- S3 One Zone-IA
    - Igual standard-ia mas em uma AZ
    - dados acessados raramente e regraváveis
    - backup de arquivos que podem ser recriados

- S3 Glacier Instant Retrival
    - Acesso quase imediato a arquivos de arquivamento
    - arquivos antigos acessados a qualquer momento
    - histórico de faturamento 

- S3 Glacier Flexible Retrival
    - Mais barato, mas leva minutos ou horas para acesso
    - arquivamento a longo prazo, pouco acesso
    - arquivos de compliance de 7 anos atrás

- S3 Glacier Deep Archive
    - Mais barata, ideal para arquivamento de longo prazo
    - recuperação demora até 12h
    - notas fiscais antigas exigidas por lei por 10 anos

- S3 Reduced Redundancy (obsoleta)
    - Menor durabilidade e menor custo, nao recomendada
    - dados não críticos (quase em desuso)
    - não utilizar atualmente

Antes de armazenar arquivos no S3, pense na frequencia de acessos