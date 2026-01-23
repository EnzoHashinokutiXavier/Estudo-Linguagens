# AWS EC2
Elastic Compute Cloud

- Serviço de aluguel de servidores virtuais

- Um dos serviços com maior demanda na AWS

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

- Opções de compra
    
    - On Demand : paga conforme usa, modelo mais caro

    - Savings Plans : reduz custo em troca de compromisso de uso

    - Instâncias Spots : Aproveita capacidade não utilizada do EC2 na nuvem
        - Até 90% de desconto em comparação com sob demanda
        - Para teste, pode ser tirado a qualquer momento
        - Maior capacidade, menor preço, sem garantia

### Criar instancias

-