# AWS EC2
Elastic Compute Cloud

O Amazon Elastic Compute Cloud (EC2) é um componente central da plataforma de computação em nuvem da Amazon. O EC2 permite aos usuários alugar máquinas virtuais usando a infraestrutura da Amazon. Ele foi projetado para tornar a computação em escala na web mais acessível para os desenvolvedores.

- Máquinas Virtuais: EC2 fornece instâncias, que são máquinas virtuais executando os sistemas operacionais que você escolher.

- Várias Regiões e Zonas de Disponibilidade: As instâncias do EC2 podem ser implantadas em várias regiões geográficas e zonas de disponibilidade. Isso ajuda a reduzir latência, aumentar a tolerância a falhas e cumprir os requisitos de residência de dados.

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

### Discos

- Tambem sao virtuais

- Maioria dos casos o disco nao esta na maquina

- Array de storage que as maquinas acessam por fibra

- Armazenamento Integrado: As instâncias do EC2 podem ser integradas com outros serviços da AWS para fornecer armazenamento (por exemplo, Amazon EBS), bancos de dados (por exemplo, Amazon RDS), e redes (por exemplo, Amazon VPC).

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