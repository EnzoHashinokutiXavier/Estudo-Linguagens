### O que é Cloud Computing ?

- A computação em núvem é o uso de servidores tercerizados 

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

Utilizam um ambiente compartilhado

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
Ex : Dados no privado e outros serviços no cloud
```

### Vantagens Cloud

- On Demand - Cria o serviço e paga pela utilização 

- Elasticidade - Aumenta ou reduz o recurso de acordo com oque precisa (baseado em demanda)

- Pay-as-you-go - Paga pelo oque utiliza

- Acesso global - Aplique no mundo inteiro

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