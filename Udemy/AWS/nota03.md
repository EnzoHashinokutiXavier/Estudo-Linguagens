# AWS EC2
Elastic Compute Cloud

O Amazon Elastic Compute Cloud (EC2) é um componente central da plataforma de computação em nuvem da Amazon. O EC2 permite aos usuários alugar máquinas virtuais usando a infraestrutura da Amazon. Ele foi projetado para tornar a computação em escala na web mais acessível para os desenvolvedores.

- Máquinas Virtuais: EC2 fornece instâncias, que são máquinas virtuais executando os sistemas operacionais que você escolher.

- Várias Regiões e Zonas de Disponibilidade: As instâncias do EC2 podem ser implantadas em várias regiões geográficas e zonas de disponibilidade. Isso ajuda a reduzir latência, aumentar a tolerância a falhas e cumprir os requisitos de residência de dados.

- Armazenamento Integrado: As instâncias do EC2 podem ser integradas com outros serviços da AWS para fornecer armazenamento (por exemplo, Amazon EBS), bancos de dados (por exemplo, Amazon RDS), e redes (por exemplo, Amazon VPC).


- Um dos serviços com maior demanda na AWS

- IAAS : Infraestrutura como serviço da aws para maquinas virtuais

- Em resumo, o Amazon EC2 é um serviço poderoso e flexível que forma a espinha dorsal da computação na plataforma AWS, permitindo que as empresas executem e dimensionem aplicativos na nuvem de forma eficiente e segura.

### Casos de uso comum

- Hospedagem de websites (webserver)

- Servidor de banco de dados

- Testes (ambiente de desenvolvimento)    
A diferença de um ambiente de desenvolvimento para um ambiente de produção é o processamento, memória, disco, potencia das suas instancias

- IA   
EC2 é muito usado em Machine learning

- Jogos online

### Conceitos

- Elasticidade : Ajusta recurso conforme demanda 

- Escalabilidade: Você pode dimensionar a capacidade de computação facilmente, criando e lançando novas instâncias conforme necessário, o que é útil para lidar com picos de demanda e escala.

### EC2 global view

- Verificar quantas instancias eu tenho em cada regiao

### Tipos de instancias

- O Amazon EC2 oferece uma variedade de tipos de instâncias otimizados para atender diferentes casos de uso. Os tipos de instâncias compreendem combinações variadas de capacidade de CPU, memória, armazenamento e rede e proporcionam a flexibilidade para escolher a combinação apropriada de recursos para seus aplicativos. 

- Os tipos de instâncias do Amazon EC2 são constantemente atualizados e ampliados para suportar uma gama cada vez maior de casos de uso. É importante verificar a documentação mais recente da AWS para obter as informações mais atualizadas.
    - Amazon EC2 Instance types

- Aplicações comuns : 
    - Servidor de internet / website

- Não é uma aplicação comum (específico) :
    - Robo de ia
    - Machine learning
    - Banco de dados
    - Servidor de arquivos

- Quando sobe uma maquina virtual, sobe em cima de uma pré configuração de hardware

- Graviton : processador criado pela própria amazon

- Instâncias de Uso Geral (A, T, M): Essas instâncias proporcionam um bom equilíbrio de computação, memória e rede e são uma boa escolha para muitas cargas de trabalho que não requerem especificações de hardware específicas.

- Instâncias Otimizadas para Computação (C): Essas instâncias são otimizadas para cargas de trabalho que exigem alta performance de CPU, como computação científica, modelagem e análise financeira, e renderização de mídia.

- Instâncias Otimizadas para Memória (R, X, Z): Essas instâncias são projetadas para cargas de trabalho que processam grandes conjuntos de dados na memória, como bancos de dados em memória, caches distribuídos, análise em memória e aplicações de big data.

- Instâncias Otimizadas para Armazenamento (D, I, H): Essas instâncias são projetadas para cargas de trabalho que requerem alto desempenho de armazenamento local, como bancos de dados escalonáveis, processamento de dados em escala de petabytes e aplicações de data warehousing.

- Instâncias Otimizadas para GPU (P, G, F, Inf): Essas instâncias são projetadas para cargas de trabalho de computação gráfica, como aprendizado de máquina, mineração de criptomoedas, renderização 3D, e aplicações de streaming de jogos.

- Instâncias Arm (A1, M6g, C6g, R6g): Essas instâncias são baseadas na arquitetura Arm e são uma opção de baixo custo para cargas de trabalho que requerem um bom desempenho de CPU e suportam a arquitetura Arm.

- Siglas (não precisa decorar)
    - t = testes 
        - workloads leves
        - uso intermitente
    - m = uso geral balanceado 
        - aplicações web
        - banco de dados pequenos
    - c = compute optimized
        - processamento intenso
        - alta cpu
    - r = memory optimized
        - bancos de dados
        - cache em memória
    - x = extra memory
        - SAP HANA
        - cargas de memória altíssima
    - p = gpu para machine learning
        - treinamento e interferencia em ia
    - g = gpu para gráficos
        - renderização
        - streaming
    - inf = inferencia de ia
        - modelos de machine learning em produção
    - i = I/O otimizado para storage
        - banco de dados 
        - com alta taxa de leitura / escrita
    - d = dense storage
        - armazenamento em grande volume local
    - h = armazenamento em alta densidade HDD
        - Hadoop, Data Warehousing
    - f = FPGA
        - processamento customizado de hardware

- cada tipo tem varias variações

- Sufixos comuns
    - a = processador amd
    - n = rede otimizada (maior largura de banda)
    - d = armazenamento local NVMe/HDD incluso
    - g = gpu inclusa
    - i = intel cpu
    - e = versão aprimorada (enhanced)
    - z = alta frequencia de cpu

- General purpose = Aplicações comuns

- Compute optimized = Alto uso de CPU

- Computação acelerada é usada placas de vídeo
    - placa de vídeo processa muito mais rápido que processador

- Otimizada para armazenamento
    - acesso rápido a disco
    - alta performance, largura de banda alta

### Custo
    
- Preços Flexíveis: O EC2 oferece várias opções de preços, incluindo On-Demand (pague pelo que usar), Reservado (reserve uma instância por um período e obtenha um desconto) e Spot (licitação por capacidade não utilizada a preços mais baixos).

AWS cobra por segundos com a maquina ligada

- On Demand : paga conforme usa, modelo mais caro
    - $ $$ $

- Savings Plans : reduz custo em troca de compromisso de uso
    - $
    - 1 a 3 anos
    - Quanto mais comprometido mais barato voce paga

- Instâncias Spots : Aproveita capacidade não utilizada do EC2 na nuvem
    - $ 
    - Até 90% de desconto em comparação com sob demanda
    - Para teste, pode ser tirado a qualquer momento
    - Maior capacidade, menor preço, sem garantia

- Hosts Dedicados : paga pelo host em si, mais caro
    - $$$$$$$
    - governos, empresas financeiras ou dados que não podem ser compartilhados em rede publica

- Capacidade por Demanda
    - $ $$
    - define memoria, processamento, cpu, tipo de maquina, por tantas horas a partir de tal dia
    - aws aloca o serviço para você e ela sabe quando você vai precisar e quando não vai precisar   

Nível gratuito : AWS oferece gratuitamente 750 horas de EC2 t2.micro

Sempre verifique a calculadora da AWS antes de iniciar um projeto

### Criar instancias

- Launch instances / Executar instâncias

- Name and tags / Nome

- Aplication and OS images (Amazon Machine Image)
    - Imagem que foi criada e aprovada pela AWS 
    - Não é instalado o sistema operacional
    - Quando inicia a instancia fica pronta em segundos
    - É uma cópia na sua instancia virtual

- Tipo de instância 
    - ex : t2.micro

- Create key pair / chave de login
    - chave para conectar com a instancia em segurança
    - chave de autenticação para ssh
    - .pem : para uso com OpenSSH
    - .ppk : para uso com PuTTY

- Firewall
    - Criar grupo de segurança
    - Selecionar grupo de segurança existente

- Permitir tráfego SSH de 
    - ajuda voce a conectar a sua instancia

- Permitir tráfego HTTPS da internet
    - para configurar um endpoint, por exemplo, ao criar um servidor Web

- Permitir tráfego HTTP da internet
    - para configurar um endpoint, por exemplo, ao criar um servidor Web

- Configurar armazenamento

- Detalhes avançados

- Executar instancia

### Maquina virtual

- Controle Completo: Os usuários têm controle total sobre as instâncias do EC2. Eles têm acesso de root, e podem interagir com elas como fariam com qualquer máquina.

- "Conectada" a um cabo de rede

- Tem endereçamento ip
    - Por default é bloqueado
    - Precisa criar um security group
        - Permit IP enzo
        - Permit IP ALL

### Conectar na instancia

- EC2 Instance Connect
    - pagina web aws, forma recomendada
    - utiliza uma outra maquina virtual para conectar via terminal
    - por isso é necessário habilitar conecção SSH

- SSH client
    - via terminal
    - apartir da sua máquina

### Monitoramento

- da maquina, cpu, rede, ...

- varios paineis de monitoramento

### Remover maquina

- da pra parar ela em stop instance

- se clicar em Skip OS shutdown pode corromper dados
    - como desligar um pc direto da tomada

- quando a maquina estiver parada
    - nao é mais cobrado por transferencia de dados
    - ainda cobra por endereçamento ip elastico
    - e EBS volumes (disco)

- terminate (delete) / Encerrar instância
    - ação padrão deleta tudo oq tiver dentro da maquina
    - não tem como voltar sem snapshot (backup)
    - Instance state fica como terminated
    - não cobra mais
    - some o volume do elastic block store

### Segurança

- quais portas estao abertas

- quais protocolos estao abertos e apartir de que

- Segurança: O EC2 trabalha com o Amazon VPC para fornecer segurança e robustez por meio de grupos de segurança e redes isoladas.

### Security Groups (grupos de segurança)

Os Security Groups atuam como um firewall virtual para as suas instâncias Amazon EC2 para controlar o tráfego de entrada e saída. Eles operam ao nível da instância, o que significa que você pode associar diferentes security groups a diferentes instâncias, o que é útil para configurar a segurança a um nível granular.

- Regras de entrada e saída: Cada security group consiste em um conjunto de regras de entrada e saída. As regras de entrada controlam o tráfego que é permitido chegar à instância associada ao security group, enquanto as regras de saída controlam o tráfego permitido para sair da instância.

- Estado de conexão: Os security groups são "stateful", o que significa que se você enviar uma solicitação de uma instância, a resposta é permitida automaticamente, independentemente das regras de saída.

    - Statefull
        - permite automaticamente as respostas
        - só precisa de uma regra de entrada
        - regra de saida gerada automaticamente

- Permissões por protocolo: As regras em um security group permitem especificar protocolos permitidos, portas e origem (para tráfego de entrada) ou destino (para tráfego de saída). Isso permite que você restrinja o tráfego para um protocolo ou porta específicos e controle de onde o tráfego é originado ou para onde ele é direcionado.

- Flexibilidade e controle: Você pode associar diferentes security groups a diferentes instâncias e também pode modificar as regras de um security group a qualquer momento. As novas regras são aplicadas automaticamente a todas as instâncias associadas ao security group.

- Isolamento de instâncias: Os security groups ajudam a isolar suas instâncias de outras instâncias na mesma rede, uma vez que as regras são aplicadas por instância e não por sub-rede.

- pode permitir trafego
    - SSH
    - HTTPS
    - HTTP

- se uma instancia nao tiver permissão para receber um tipo de protocolo, ela não vai receber e muito menos responder, mesmo que ela tenha permissão para responder o tipo

- se A quer enviar um ping para B, B tem que permitir receber ping
    - senao B nao recebe e nao vai responder

- Inbound : regras de entrada
    - Type
    - Source type
    - Source : daonde recebe

- Outbound : regras de saida

- Quando salva alterações aplica imediatamente

- Da pra fazer um padrão e usar em outras instancias

- Da para ter mais de um security group em uma instancia

- Statefull, firewall, aplicado a placa de rede

- Quando varios servidores utilizam os mesmo security group, ao alterar alguma regra, todos vao ser afetados imediatamente

Em resumo, os Security Groups são uma ferramenta crucial para gerenciar a segurança na AWS, permitindo que você controle e restrinja o tráfego de entrada e saída para suas instâncias do EC2 de uma maneira muito granular e específica.

### Snapshots

- "Pontos no tempo", como o versionamento do github

- Você define quando fazer os snapshots

- Você nao paga por ele, paga pelo oq armazena

- Um snapshot é uma cópia de um disco então ocupa espaço na aws, logo é cobrado

- Adiciona nome e tags aos snapshots

- Não interfere a utilização atual do servidor

- Pode compartilhar com outras contas 

- Pode transformar o snapshot em disco denovo "criar volume com snapshot"


### AMI 
Amazon Machine Image

- Da para criar uma imagem de um servidor completo (não só o disco)

- Da para criar outro servidor sem precisar instalar nada utilizando uma image

**Como fazer um servidor :**

- Adicione acesso HTTP e HTTPS no grupo de segurança para transformar um servidor em um webserver

- Instala e inicia o HTTP

- Copia o ip

- lembre de colocar http antes do ip para entrar no site

**Criar uma imagem a partir do servidor :**

- seleciona o servidor

- Ações

- Imagem e modelos

- Criar imagem

**Ver imagem :**

- menu esquerdo

- Imagens

- AMIs

**Gerar outro servidor a partir do AMI :**

- Criar nova instância

- Minhas AMIs

- De minha propriedade   
ou   
Compartilhado comigo

- selecionar grupo de segurança

- no script não precisa escrever nada porque a AMI ja vem com tudo instalado

### EBS
Elastic Block Store

O Amazon Elastic Block Store (EBS) é um serviço de armazenamento de alto desempenho oferecido pela AWS para uso com Amazon Elastic Compute Cloud (EC2). Ele foi projetado para aplicativos que exigem armazenamento de baixa latência para ler e escrever dados em blocos.

- Disco de HD "nas" maquinas

- Tambem sao virtuais

- Disco de rede (não é disco físico)

- Maioria dos casos o disco nao esta no servidor

- Cluster de storage que as maquinas acessam por fibra

- 30 gigas de armazenamento gratuito por 12 meses

- O armazenamento só pode ser conectado com servidores da mesma zona de disponibilidade

- Desempenho de Armazenamento: EBS fornece armazenamento em bloco de alto desempenho que pode ser anexado a uma instância EC2. Os volumes EBS são otimizados para cargas de trabalho que exigem operações de E/S de baixa latência, como bancos de dados e aplicativos que exigem muita E/S.

- Durabilidade: O EBS é projetado para durabilidade. Os volumes EBS são automaticamente replicados em sua zona de disponibilidade para proteger contra falhas de componentes, proporcionando alta disponibilidade e durabilidade.

- Tipos de Volume: EBS oferece vários tipos de volume para atender às necessidades de armazenamento e desempenho. Isso inclui os volumes SSD-backed para cargas de trabalho transacionais de uso geral (gp2 e gp3) e de alto desempenho (io1 e io2), e os volumes HDD-backed para cargas de trabalho throughput intensivas (st1 e sc1).

- Backup com Snapshots: O EBS oferece a capacidade de criar snapshots (cópias) dos seus volumes, que são armazenados no Amazon S3 para durabilidade. Esses snapshots podem ser usados para criar novos volumes EBS ou para aumentar o tamanho do volume.

- Criptografia: O EBS oferece a opção de criar volumes criptografados e controlar as chaves de criptografia usando o AWS Key Management Service (KMS). Isso ajuda a atender aos requisitos de conformidade e segurança.

- Integração com a AWS: EBS é profundamente integrado com outros serviços da AWS, como Amazon CloudWatch para monitoramento, AWS Identity and Access Management (IAM) para controle de acesso, e AWS Snapshot Scheduler para automação de backup.

- Mais de um tipo de disco
    - ex : um disco para armazenar um banco de dados SQL precisa ser muito mais rápido do que um para backup
    - cada um possui suas caracteristicas, de uma leitura antes de iniciar um projeto

- HDD : Hard Disk Drive
    - lento 
    - maior espaço
    - barato

- SSD : Solid State Drive
    - rapido 
    - menor espaço
    - muito mais caro

- IOPS : é a quantia de operações feitas por segundo
    - Input e Output

- Em resumo, o Amazon EBS é uma solução de armazenamento em bloco de alto desempenho que é fundamental para muitas aplicações em execução na AWS devido à sua durabilidade, flexibilidade e integração com a AWS.

- **Criar**

    - Iniciar instância EC2

    - Selecionar servidor, armazenamento, EBS  
    ou  
    Elastic Block Store, Volumes

    - Selecionando o volume consegue ver informações

    - Para criar um outro novo volume :
        - Criar volume
        - Selecionar tipo, tamanho, zona de disponibilidade
        - A zona deve ser a mesma do servidor
        - Adicionar tags

    - Inicia como "disponivel", para transformar em "em uso" :
        - Ações
        - Associar volume
        - Instância
    
    - Uma vez em uso não se utiliza em outro local
        - exceçao : tipo de volume io1, io2 block express podem estar conectados em multiplas instancias
        - Para multiplas instancias existe o serviço EFS

- **Retirar**

    - Selecionar volume

    - Ações

    - Forçar desassociação de volume 

    - Ações

    - Excluir volume

### EFS
Elastic File System

O Amazon Elastic File System (EFS) é um serviço de armazenamento de arquivos totalmente gerenciado que facilita a configuração e o dimensionamento de sistemas de arquivos em nuvem na AWS. O EFS foi projetado para ser altamente disponível, durável e seguro, e pode ser usado com uma ampla gama de serviços da AWS e aplicações on-premise.

- Arquivos que podem ser compartilhados com outros servidores, multiplas instancias e zonas

- Parecido com o EBS

- atenção nos preços

- feito e criado para linux

- Escalabilidade: O EFS é projetado para escalar automaticamente para acomodar o crescimento dos dados, de alguns gigabytes a petabytes, sem a necessidade de provisionar o armazenamento.

- Alta Disponibilidade e Durabilidade: O EFS armazena automaticamente os arquivos em vários dispositivos dentro e entre várias zonas de disponibilidade para garantir a disponibilidade e durabilidade dos dados.

- Compartilhamento de Arquivos: O EFS suporta o compartilhamento de arquivos entre várias instâncias do Amazon EC2, permitindo que múltiplos servidores acessem um sistema de arquivos simultaneamente.

- Integração com AWS: O EFS pode ser integrado a outros serviços da AWS, como o AWS Backup para backups automatizados e o AWS IAM para controle de acesso.

- Tipos de armazenamento: O EFS oferece várias classes de armazenamento, incluindo Standard e Infrequent Access (IA), permitindo que você otimize os custos com base em seus padrões de acesso aos arquivos.

- Segurança: O EFS inclui suporte para criptografia de dados em repouso e em trânsito, bem como integração com o AWS Key Management Service (KMS) para gerenciamento de chaves de criptografia.

Resumindo, o Amazon EFS é uma solução de armazenamento de arquivos escalável, de alta disponibilidade e segura, que facilita o compartilhamento de arquivos entre instâncias EC2 e outros serviços AWS.

### FSx 
File System x

O Amazon FSx é um serviço de armazenamento de arquivos totalmente gerenciado da AWS que facilita o lançamento e a execução de sistemas de arquivos de terceiros. O FSx fornece o rico conjunto de recursos e a rápida performance que esses tipos de aplicativos precisam, e atualmente suporta dois sistemas de arquivos: Windows File Server para aplicações baseadas em Windows, e Lustre para cargas de trabalho de computação intensiva.

- Desempenho: O Amazon FSx foi projetado para oferecer o desempenho rápido necessário para suportar aplicações exigentes. Ele fornece baixa latência e altas taxas de transferência de dados.

- Compatibilidade e Integração: O Amazon FSx é totalmente compatível com os sistemas de arquivos que suporta, o que significa que você pode usar suas ferramentas e aplicações existentes sem modificação. Além disso, o FSx se integra com uma série de outros serviços AWS para coisas como backup, monitoramento e acesso seguro a arquivos.

- Segurança: O Amazon FSx oferece várias funcionalidades de segurança, como a capacidade de armazenar dados em redes virtuais privadas da Amazon (VPCs), suporte a redes de acesso (ACLs) para o Windows File Server, criptografia de dados em repouso e em trânsito, e integração com AWS Key Management Service (KMS) para gerenciamento de chaves de criptografia.

- EBS : para uma maquina

- EFS : compartilhamento de arquivos para varias maquinas linux

- FSx : sistema gerenciador de arquivos para windows e outras aplicações
    - ONTAP
    - OpenZFS
    - Windows File Server
    - Lustre

- FSx para Windows File Server: Ele fornece um sistema de arquivos nativamente compatível com o Windows, permitindo que você mova com facilidade as aplicações baseadas em Windows que exigem o sistema de arquivos do Windows para a AWS. É construído sobre o Windows Server e oferece suporte a recursos como deduplicação de dados, criptografia de dados em repouso, e acesso via SMB (Server Message Block) e NFS (Network File System).

- FSx para Lustre: O Lustre é um sistema de arquivos popular para cargas de trabalho de computação intensiva, como análise de big data, modelagem de machine learning e processamento de mídia. O FSx para Lustre é totalmente gerenciado pela AWS, simplificando o processo de criação e execução de um sistema de arquivos Lustre.

Em resumo, o Amazon FSx é um serviço poderoso e flexível que torna mais fácil do que nunca para você executar sistemas de arquivos totalmente gerenciados na AWS. Ele suporta sistemas de arquivos Windows e Lustre, oferecendo um alto nível de desempenho, segurança e integração com outros serviços AWS.