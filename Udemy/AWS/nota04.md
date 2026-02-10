# AWS IAM
Identity and Access Management

- Organizar usuários que tem ou não acesso a AWS

### Estrutura

- Conta master (root)
    - Users
        - Marcos -> EC2
        - Alice -> EC2
        - João -> S3
    - Groups
        - Adimin -> EC2, S3
        - Developer -> Lambda
        - um usuário recebe as politicas que foram associados ao grupo 
    - Roles
        - relacionado a serviços
        - regras de acesso de maquinas a serviços

### Grupos de usuários

- Criar um grupo
    - ex : criar o grupo chamado Admin 

- Políticas de permissões
    - Onde indica quais serviços tem acesso
    - ex : AmazonEC2FullAccess

### Usuários

- Adicionar usuários
    - nome
    - Fornecer acesso a console
    - senha personalidade ou gerada automaticamente

- Acesso ao console
    - Centro de identidade
    - IAM

- Grupos de usuários
    - Seleciona os grupos que o usuário terá as permissões

# Identity center

- Sucessor do Single Sign-On (SSO)

- Compartilhar o usuário entre os serviços

- IAM : Acesso a criar usuarios grupos e regras
- Identity Center : vantagens de se fazer tudo isso e associar a aplicações
