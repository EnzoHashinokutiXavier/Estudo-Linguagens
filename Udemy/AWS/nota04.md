# AWS IAM
Identity and Access Management

O AWS Identity and Access Management (IAM) é um serviço da AWS que ajuda a controlar quem está autenticado (assinado) e autorizado (tem permissões) para usar os recursos da AWS.

- Controle Granular de Acesso a AWS: Com o IAM, você pode criar usuários, grupos, papéis e políticas de permissão para controlar o acesso aos serviços e recursos da AWS de uma maneira granular. Por exemplo, você pode permitir que um usuário tenha acesso somente leitura ao Amazon S3 e acesso total ao EC2.

- Compartilhamento Seguro de Acesso: O IAM permite compartilhar o acesso à sua conta AWS de maneira segura. Em vez de compartilhar suas credenciais de root, você pode criar vários usuários IAM, cada um com suas próprias credenciais e permissões.

- Identidade Federada: Com o IAM, você também pode permitir usuários que já tenham senhas em outros lugares, como na sua rede corporativa ou em um provedor de identidade baseado em SAML, a obter acesso temporário à sua conta AWS.

- Compatível com Multi-Fator Authentication (MFA): O IAM é compatível com a autenticação de vários fatores para fornecer uma camada adicional de proteção de segurança ao gerenciar o acesso aos serviços e recursos da AWS.

- Integrado com AWS Services: O IAM está integrado com todos os serviços da AWS, o que significa que você pode definir permissões para qualquer serviço que desejar.

- Auditoria com AWS CloudTrail: Com o AWS CloudTrail, você pode registrar todas as ações de usuários e APIs IAM para fins de auditoria.

- Gratuito: O IAM é um recurso gratuito da AWS; você só paga pelos outros recursos da AWS que seus usuários acessam.

Em suma, o AWS IAM é um serviço de segurança crítico que ajuda a proteger o acesso aos recursos da AWS, permitindo que você controle quem pode fazer o quê em sua conta AWS.

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

A Autenticação Multifator (MFA) é um método de controle de acesso que exige que um usuário verifique sua identidade usando duas ou mais evidências (fatores) antes que o acesso seja concedido. Estes fatores podem ser algo que o usuário sabe (como uma senha), algo que o usuário tem (como um telefone celular ou um token de hardware) e algo que o usuário é (como uma impressão digital ou reconhecimento facial).

- Segurança Aprimorada: O principal benefício da MFA é que ela aumenta significativamente a segurança, tornando muito mais difícil para os invasores ganharem acesso não autorizado a um sistema. Mesmo que um fator de autenticação seja comprometido (por exemplo, se uma senha for roubada), os outros fatores ainda protegem o sistema.

- Diversos Métodos de Autenticação: A MFA pode usar uma variedade de métodos de autenticação, como códigos de verificação por SMS, aplicativos de autenticação, tokens de hardware, impressões digitais, reconhecimento facial e muito mais.

- Compatibilidade: A MFA é compatível com muitos sistemas e serviços, incluindo a maioria das plataformas de nuvem (como AWS, Google Cloud e Azure), serviços de email, redes sociais, plataformas de pagamento online, entre outros.

- AWS MFA: A AWS suporta MFA e recomenda que os usuários a utilizem para proteger suas contas. Com a MFA ativada, quando um usuário se conecta à AWS, ele é solicitado a inserir seu nome de usuário e senha (primeiro fator) e um código de autenticação de um dispositivo MFA (segundo fator).

Resumindo, a Autenticação Multifator é uma medida de segurança essencial que protege os sistemas de acesso não autorizado, exigindo que os usuários verifiquem sua identidade com vários fatores de autenticação.

- google authenticator
    - autenticação de duas etapas
    - 6 digitos que mudam a cada 30 segundos
    - acessado no telefone

# AWS Organizations

O AWS Organizations é um serviço da AWS que permite a você centralizar e gerenciar de forma unificada várias contas AWS. Com o AWS Organizations, você pode criar uma organização para administrar suas contas da AWS a partir de um único local.

- Gerenciamento Centralizado de Contas: O AWS Organizations permite agrupar e gerenciar todas as suas contas AWS de um único local centralizado. Isso facilita o gerenciamento de contas e recursos em uma organização.

- Controle de Acesso Hierárquico: Com o AWS Organizations, você pode criar uma estrutura hierárquica de Unidades Organizacionais (OUs) para agrupar suas contas. Isso ajuda a organizar suas contas em uma estrutura que melhor se alinhe com o uso dos recursos em sua organização.

- Políticas de Controle de Serviço: O AWS Organizations oferece políticas de controle de serviço (SCPs) que permitem que você controle as permissões para as contas em sua organização. Isso permite que você aplique regras de acesso uniformes em todas as suas contas.

- Consolidação de Cobrança: O AWS Organizations também oferece a capacidade de consolidar sua cobrança em todas as suas contas AWS, o que pode simplificar a gestão de custos e permitir um melhor rastreamento e controle dos gastos da AWS.

- Automação: Com o AWS Organizations, você pode automatizar a criação e o gerenciamento de contas por meio de APIs e integrações com outras ferramentas da AWS, como o AWS CloudFormation.

Em suma, o AWS Organizations é uma ferramenta poderosa para empresas e equipes que gerenciam várias contas da AWS, permitindo o gerenciamento centralizado de contas, a aplicação de políticas em todas as contas, a consolidação de cobranças e a automação de tarefas de gerenciamento de contas.

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