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

# MFA
Multi Factor Autentication

- autenticação de duas etapas

- 6 digitos que mudam a cada 30 segundos

- acessado no telefone

- google authenticator

# AWS Organizations

- Criar subcontas

- Não precisa de varias contas master

- Integração de subcontas

- Politicas em JSON

- Precisa dele habilitado para trabalhar com o identity center

- AWS Organizations -> Criar uma organização

# Usuários IAM  x  IAM Identity Center

- Identity and Access Management (IAM)
    - Acesso a serviços e recursos da plataforma da aws
    - Usuário que configura maquinas virtuais

- IAM Identity Center
    - Criar usuários e grupos para quem pode usar aplicações da sua empresa
    - Usuário final