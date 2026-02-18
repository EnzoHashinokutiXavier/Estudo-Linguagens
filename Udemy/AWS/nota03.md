# AWS EC2
Elastic Compute Cloud

- Serviço de aluguel de servidores virtuais

- Um dos serviços com maior demanda na AWS

- IAAS : Infraestrutura como serviço da aws para maquinas virtuais

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

- Escalabiidade : Capacidade de crescer (vertical/horizontal)

### EC2 global view

- Verificar quantas instancias eu tenho em cada regiao

### Tipos de instancias

- Existem muitos tipos de instancias no EC2

- Sempre verifique na documentação da AWS
    - Amazon EC2 Instance types

- Muda muito rápido / com frequencia

- CPU, memória, armazenamento, capacidade de rede

- Aplicações comuns : 
    - Servidor de internet / website

- Não é uma aplicação comum (específico) :
    - Robo de ia
    - Machine learning
    - Banco de dados
    - Servidor de arquivos

- Quando sobe uma maquina virtual, sobe em cima de uma pré configuração de hardware

- Graviton : processador criado pela própria amazon

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
    
AWS cobra por segundos com a maquina ligada

- On Demand : paga conforme usa, modelo mais caro
    - $$$$

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
    - $$$
    - define memoria, processamento, cpu, tipo de maquina, por tantas horas a partir de tal dia
    - aws aloca o serviço para você e ela sabe quando você vai precisar e quando não vai precisar   

Nível gratuito : AWS oferece gratuitamente 750 horas de EC2 t2.micro

Sempre verificque a calculadora da AWS antes de iniciar um projeto

### Criar instancias

- Launch instances

- Name and tags

- Aplication and OS images (Amazon Machine Image)
    - Imagem que foi criada e aprovada pela AWS 
    - Não é instalado o sistema operacional
    - Quando inicia a instancia fica pronta em segundos
    - É uma cópia na sua instancia virtual

- Create key pair
    - chave para conectar com a instancia em segurança

### Maquina virtual

- "Conectada" a um cabo de rede

- Tem endereçamento ip
    - Por default é bloqueado
    - Precisa criar um security group
        - Permit IP enzo
        - Permit IP ALL

### Conectar na instancia

- EC2 Instance Connect
    - pagina web aws

- SSH client
    - apartir da sua máquina

### Discos

- Tambem sao virtuais

- Maioria dos casos o disco nao esta na maquina

- Array de storage que as maquinas acessam por fibra

### Monitoramento

- da maquina, cpu, rede, ...

- varios paineis de monitoramento

### Segurança

- quais portas estao abertas

- quais protocolos estao abertos e apartir de que

### Remover maquina

- da pra parar ela em stop instance

- se clicar em Skip OS shutdown pode corromper dados
    - como desligar um pc direto da tomada

- quando a maquina estiver parada
    - nao é mais cobrado por transferencia de dados
    - ainda cobra por endereçamento ip elastico
    - e EBS volumes (disco)

- terminate (delete)
    - ação padrão deleta tudo oq tiver dentro da maquina
    - não tem como voltar sem snapshot (backup)
    - Instance state fica como terminated
    - não cobra mais
    - some o volume do elastic block store

### Security Groups (grupos de segurança)

- Firewall virtual p/ instancia

- Statefull
    - permite automaticamente as respostas
    - só precisa de uma regra de entrada
    - regra de saida gerada automaticamente

- nao usa stateless

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