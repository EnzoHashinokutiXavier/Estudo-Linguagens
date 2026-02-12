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

# Senhas

- IAM -> Configurações da conta -> Políticas de senha
    - Aplica tanto pro IAM quanto p identity center

- Padrão IAM ou Personalizado

- Empresas alteram os requisitos mínimos de senha para aumentar a segurança

- Letras maiusculas, minusculas, numeros, caracteres especiais, quantia minima de caracteres, tempo de expiração de senha, permitir alterar, reutizilar senha 

# Acessar os serviços da aws

- Console Web

- CLI
    - Comand line interface
    - script
    - software que pede as credenciais da aws
        - aws cli é um plugin
    - digitar comandos, gerenciar scripts
    - autenticação
        - Username
        - Access Key
        - Private key
        - usuário -> credenciais de segurança -> chaves de acesso

- Cloudshell
    - quase identico ao cli
    - não está instalado local na sua maquina
    - não precisa de autenticação pq está instalada dentro da aws

- SDK
    - aplicação acessando serviços da AWS
        - como uma api
    
### Chave de acesso 
- CLI
- Código local
    - ambiente local acesse a sua conta aws
- Aplicação em serviço computacional na nuvem
- Serviços de terceiros
- Aplicação fora da aws
Chave de acesso também gera uma chave de acesso secreta  
Só se tem acesso as chaves quando elas são geradas, baixa o arquivo .csv para ver depois

# AWS Accounts : REPORTS  
Os reports são relatórios   
verificar oq cada usuário tem feito ou tem acesso
- Username
    - Credentials Report CR
        - usuários
        - data de criação
        - senha abilitada
        - ultima utilização
        - ultima troca de senha
        - proxima troca de senha
        - MFA abilitado
        - ...
    - Access Advicer AA
        - Acesso a nivel de usuário
        - quais serviços permitidos para o usuario
        - alguns serviços para ter acesso precisam de acesso a outros 