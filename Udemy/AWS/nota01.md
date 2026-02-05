### O que é Cloud Computing ?

- A computação em núvem é o uso de servidores tercerizados 

Antigamente a criação e manutenção de servidores éra tudo responsabilidade da empresa.   
Cada empresa com seus servidores, tendo que cuidar da instalação, organização, manutenção, refrigeração, reposição de componentes

A aws tem tudo oque a empresa teria em seu server room, só que muito maior, e disponibiliza o uso através dos serviços de nuvem

```
Amazon não criou os serviços em núvem, 
mas foi quem elevou o nível.  
Assim como não foi o chat gpt que criou a IA,
mas foi quem alavancou as IAs.
```

Amazon criou data centers para suportar o site dela que vendia para os EUA inteiro.

Tiveram ideia de vender a utilização da parte livre dos data center.

Mudança de servidores locais para tercerizados

AWS : Servidores confiáveis, escalabilidade, sem precisar se preocupar com manutenção 

### Tipos de Cloud Computing

- Pública : provedor cloud

Clientes utilizam um ambiente compartilhado

```
 AWS, Google Cloud, Azure
```

- Privada

Mantem o data center próprio

```
Bancos, Instituições financeiras, Governo, Hospitais
```

- Híbrida 

Mistura os dois

```
Ex : Dados no privado e outros serviços na publica
```


**IAAS** : Infrastructure As A Service  
Infraestrutura como serviço - Alugar estrutura de TI de um provedor cloud : servidores, maquinas virtuais, storage

**PAAS** : Plataform As A Service
Plataforma como serviço - Mais ligado ao hardware : Sistema operacional, banco de dados, hospedagem de sites. A aws toma conta do server fisico e do software de gerenciamento para os websites

**SAAS** : Software As A Service
Software como serviço - Cliente adiquire acesso a uma aplicação : gmail, drop box

### Vantagens Cloud

- On Demand - Cria o serviço e paga pela utilização 

- Elasticidade - Aumenta ou reduz o recurso de acordo com oque precisa (baseado em demanda)

- Pay-as-you-go - Paga pelo oque utiliza

- Escala global - Aplique no mundo inteiro, no data center mais próximo do seu cliente

- Custo reduzido - Não precisa mais gastar em servidores com capacidade maior do que preciza 

- Performance - utiliza uma rede mundial de data center

- Velocidade e agilidade - Consegue acessar um serviço em alguns cliques de distancia e iniciar um serviço em alguns minutos

- Produtividade - Devido a velocidade para iniciar serviços sem precisar comprar e configurar um servidor

- Segurança - Segurança de uma empresa trilionaria, criterios de segurança altíssimos

- Flexibilidade - Funcionarios conseguem trabalhar de qualquer lugar do mundo 

### Divisão

```
Regions (area geografica)
AZ (availability zone) 
Pops / Edge Locations 
```
- ex : us-east-1 : região que divide parte dos eua
- tem varias zonas de disponibilidade  
    - ex : us-east-1A, us-east-1B, ...
- cada região cobra um preço diferente
    - devido taxação dos governos
- cada região tem no mínimo 2 az
- as zonas de disponibilidade são conectadas entre si
    - latencia baixa entre os data center az
    - se uma cair a outra segura
- Edge locations : data centers menores com conteúdo popular
    - resposta rápida para conteúdos mais acessados
- Point of presence : ponto de acesso físico
    - onde a rede de um provedor de nuvem se conecta a internet
    - ou localização de servidores de cache
- Todo edge funciona como pop, nem todos pops sao edge
- As vezes edges e pops podem ser dentro de outras empresas 
- Outposts : aws instala estrutura em cliente grande
    - link de alta velocidade
- Wavelenght : estrutura para 5G
    - latencia extremamente baixa

### Custos

- Month-to-date-cost
    - O quanto você já gastou

- Total forecasted cost for current month
    - O quanto estipulam que você vai ter gastado ao final do mês

- Last month's cost for same time period
    - Custo que você gastou no mês passado no mesmo período

- Last month's total cost
    - Custo total do mês passado

### Budgets

- Tela de criar um orçamento

- Budget setup
    - Use a template
    - Customize

- Templates

    - Zero spend budget
        - Notifica quando gastar o primeiro centavo

    - Monthly cost budget
        - Notifica gastos acima de esperado no mês

    - Daily Savings Plans coverage budget
        
    - Daily reservation utilizando budget

- Alerta quando chega perto da quantia limite definida e quando chega a 100%

- Os serviços não param, continuam cobrando mesmo ultrapassando limite de gasto definido 

### Planos de suporte

- Developer
    - Recomendado se voce estiver experimentando ou testando a AWS
    - Acesso aos associados do Cloud Support pela web em horário comercial
    - Orientações gerais : menos de 24h, Sistema afetado : menosd de 12h
    - Orientação de arquitetura : geral

- Business
    - Nivel minimo recomendado para quem tem workloads de produção na aws
    - Acesso aos engenheiros de suporte de nuvem por telefone, web e conversas 24 horas por dia
    - Acesso ao App do AWS Support no Slack
    - Orientações gerais : menos de 24h, Sistema afetado : menosd de 12h
    - Sistema de produção afetado : menos de 4 horas, Inativo : menos de 1h
    - Orientação de arquitetura : Contextual em relação ao seus casos de uso

- Enterprise On-Ramp
    - Recomendado para quem tem workloads essenciais à produção ou aos negócios na AWS
    - Acesso aos engenheiros de suporte de nuvem por telefone, web e conversas 24 horas por dia
    - Acesso ao App do AWS Support no Slack
    - Orientações gerais : menos de 24h, Sistema afetado : menosd de 12h
    - Sistema de produção afetado : menos de 4 horas, Inativo : menos de 1h
    - Sistema essencial aos negócios inativo : menos de 30 min
    - Orientação de arquitetura : analise consultiva e orientações de acordo com as aplicações (uma por ano)

- Enterprise
    - Recomendado para quem tem negócios e/ou workloads essenciais na AWS
    - Acesso aos engenheiros de suporte de nuvem por telefone, web e conversas 24 horas por dia
    - Acesso ao App do AWS Support no Slack
    - Orientações gerais : menos de 24h, Sistema afetado : menosd de 12h
    - Sistema de produção afetado : menos de 4 horas, Inativo : menos de 1h
    - Sistema essencial aos negócios ou à missão inativo : menos de 15 min
    - Orientação de arquitetura : analise consultiva e orientações de acordo com as aplicações 

### Alerta de custo

- Serviço que gera alerta : Cloud Watch

- Billing -> Alert -> $10
