# AWS S3
### Simple storage service

- "HD na nuvem"

- Escalabilidade infinita : sem tamanho máximo

- Doc, xls, mp3, mp4, etc

- PAY-AS-YOU-GO

- Durabilidade 99.999...% : o quão é confiável

- S3 é como um armário, que pode criar várias gavetas
- As gavetas seriam as Buckets, como pasta no windows

### Estrutura do S3

- Bucket : pasta raiz onde ficam os arquivos
- Objetos : arquivos
- Key : caminho + nome do objeto
- Region : local onde a bucket foi hospedada fisicamente

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
(storage class)

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
Mover entre classes você paga

### Oq pode fazer na bucket

- copiar uri (uniform resource identifier)

- abrir arquivo
    - renomear
    - editar a classe dele
    - editar as tags do arquivo
    - compartilhar com uma presigned url

- Access control list
    - criar uma ACL pro arquivo em específico

- Object overview
    - owner
    - aws region
    - last modified
    - size
    - type
    - key
    - s3 uri
    - amazon resource name (arn)
    - entity tag (Etag)
    - object url

- Block puclic access (bucket settings)
    - acesso público
    - bucket policy
        - qual usuário pode acessar o arquivo
        - acessar, deletar ou somente modificar o nome
        - controle total
        - politicas em arquivo json
        ```
        {
        "Version": "2012-10-17",
        "Statement": [
            {
            "Sid": "PublicReadGetObject",
            "Effect": "Allow",
            "Principal": "*",
            "Action": "s3:GetObject",
            "Resource": "arn:aws:s3:::meu-bucket/*"
            }
        ]
        }
        ```

- Hospedar um site 100% estatico (não dinâmico)
    - upload arquivo html
    - acesso tem que ser público
    - aplicar bucket policy
    - habilitar Static website hosting
    - digitar o nome do arquivo index
    - acessar no Bucket Website Endpoint

### Calculator AWS
- calculator.aws
- calcular custos 
- ex : 
    - 10 tera no standard = 235 dol por mês  
    - no deep archive = 10 dol por mês
    - no one zone = 102 dol por mês
