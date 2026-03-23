# Virtual Private Cloud (VPC)

Amazon VPC é um serviço que permite criar uma rede virtual isolada e lógica dentro da nuvem AWS, proporcionando controle total sobre o ambiente de rede, incluindo endereçamento IP, sub-redes, tabelas de rotas e gateways de segurança. Ela simula um data center tradicional, permitindo lançar recursos como instâncias EC2 e RDS em sub-redes públicas ou privadas para maior segurança.

![alt text](image-4.png)

- cada subrede deve estar em cada zona
    - consegue manter 4091 endereços de ip por subrede

- internet gateway é o que controla o acesso a internet
    - ele sabe chegar em todas as subnets dentro do vpc

![alt text](image-5.png)

- O VPC precisa de 4 pontos :
    - VPCs
    - Sub-redes
    - Tabelas de rotas
    - Gateways

- VPC possui um endereçamento de ipv4 base, as subnets consegue saber seus endereços por calculadora de endereçameno de ip de subnet

- Deve ir em Gateways da Internet e associar VPC

- Deve adicionar as subnets criadas a tabela de roteamento para permitir trafego

- Tabela de roteamento serve para ensiar a subnet a chegar no gateway

- Crie instancia no ec2, na configuração de rede coloque na vpc que criou, seleciona uma subrede, habilita ip publico

- Muitas possibilidades, crie suas redes da forma que voce quiser, crie um vcp e subredes pra cada projeto que fizer

# NACL - Network Access List

lista de regras que define tudo oq deseja passar pela internet, praticamente um firewall

- Enquanto o security group protege a instancia ec2, a ACL protege a subnet inteira, e todas as instancias dentro dela

- Network ACLs sao criadas automaticamente ao criar o VPC

- Varias regras dando permissões e por ultimo uma bloqueando tudo

- Le de cima para baixo -> vai verificando a cada item se é um acesso permitido, ao encontrar para de ler, se chegar ao final sem ser encontrado é barrado

- A ordem das regras influenciam o trafego