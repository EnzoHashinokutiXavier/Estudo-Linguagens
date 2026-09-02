# AWS Architecture Center — Aula para o AWS CLF-C02

## 1. O que é o AWS Architecture Center?

O **AWS Architecture Center** é um hub de conhecimento da AWS para projetar, construir e operar cargas de trabalho na nuvem. Ele reúne orientações práticas, diagramas de referência, decisões arquiteturais e conteúdos sobre segurança, confiabilidade, desempenho, custo e sustentabilidade.

Para a prova **AWS Certified Cloud Practitioner (CLF-C02)**, pense nele como uma fonte de boas práticas para transformar requisitos de negócio em uma arquitetura AWS bem projetada.

> Não é um serviço que você “ativa” na conta nem que gera cobrança. É um portal de orientação e recursos arquiteturais.

## 2. Componentes importantes

| Recurso | Para que serve | Relação com o CLF-C02 |
|---|---|---|
| AWS Well-Architected Framework | Conjunto de princípios para avaliar e melhorar arquiteturas | Tema central de boas práticas na AWS |
| AWS Well-Architected Tool | Ferramenta gratuita no Console para fazer revisões estruturadas | Ajuda a identificar riscos e melhorias |
| Architecture Blog | Artigos técnicos e padrões de solução | Fonte de exemplos de implementações reais |
| Architecture Diagrams | Diagramas oficiais de arquiteturas e ícones AWS | Ajuda a entender componentes e fluxos |
| Architecture Decision Records (ADRs) | Registro das decisões e justificativas arquiteturais | Mostra como documentar escolhas técnicas |
| AWS Solutions Library | Implementações e arquiteturas para casos de uso comuns | Acelera a adoção de padrões validados |

## 3. AWS Well-Architected Framework

O Framework é a referência mais relevante dentro do Architecture Center. Ele organiza boas práticas em seis pilares:

1. **Excelência operacional** — operar, monitorar e melhorar sistemas continuamente.
2. **Segurança** — proteger dados, sistemas e ativos por meio de controles e gestão de riscos.
3. **Confiabilidade** — recuperar-se de falhas, adaptar-se à demanda e atender aos requisitos corretamente.
4. **Eficiência de performance** — usar os recursos de computação de modo eficiente e manter essa eficiência conforme a demanda muda.
5. **Otimização de custos** — evitar gastos desnecessários e maximizar o valor obtido com a nuvem.
6. **Sustentabilidade** — reduzir o impacto ambiental das cargas de trabalho na nuvem.

### Como memorizar

**O-S-R-P-C-S**: Operacional, Segurança, Confiabilidade, Performance, Custos e Sustentabilidade.

## 4. Como o Well-Architected Tool é usado

O **AWS Well-Architected Tool** permite criar uma *workload* (carga de trabalho) e responder perguntas por pilar. Ao final, a ferramenta aponta **High Risk Issues (HRIs)** e recomenda melhorias.

Fluxo típico:

```text
Definir a workload
        ↓
Escolher uma lente e responder às perguntas
        ↓
Identificar riscos altos e médios
        ↓
Priorizar correções
        ↓
Revisar periodicamente
```

Ele não altera recursos automaticamente; é uma ferramenta de avaliação e orientação. Seu uso não tem custo adicional, embora os recursos AWS recomendados possam gerar custos se forem implementados.

## 5. Lentes (*Lenses*)

Além da revisão geral baseada nos seis pilares, o Architecture Center disponibiliza lentes para situações específicas. Uma lente adapta as perguntas do Well-Architected para um contexto, como:

- Serverless;
- SaaS;
- Machine Learning;
- Games;
- Analytics;
- Setor financeiro e outros cenários especializados.

Use uma lente quando a carga de trabalho tiver requisitos particulares. Por exemplo, uma aplicação serverless pode ser avaliada com foco em Lambda, API Gateway, DynamoDB, observabilidade e limites de concorrência.

## 6. Princípios práticos que a prova pode cobrar

### Segurança

- Aplique o princípio do **menor privilégio** com IAM.
- Proteja dados em trânsito (TLS) e em repouso (por exemplo, AWS KMS).
- Evite usar a conta raiz nas tarefas cotidianas.
- Ative logs e monitoramento, como AWS CloudTrail e Amazon CloudWatch.

### Confiabilidade

- Distribua componentes entre múltiplas **Availability Zones (AZs)** quando a alta disponibilidade for necessária.
- Faça backups e teste a recuperação.
- Use Auto Scaling e balanceamento de carga para lidar com variações de demanda.
- Planeje a recuperação de falhas, em vez de depender de um único recurso.

### Otimização de custos

- Dimensione recursos corretamente (*right sizing*).
- Desligue ou elimine recursos ociosos.
- Escolha o modelo de preço adequado: On-Demand, Savings Plans, Reserved Instances ou Spot, conforme o perfil de uso.
- Use tags e ferramentas como AWS Cost Explorer e AWS Budgets para visibilidade e controle.

### Excelência operacional

- Automatize mudanças repetitivas com infraestrutura como código, por exemplo AWS CloudFormation.
- Monitore métricas, logs e alarmes.
- Documente procedimentos operacionais e aprenda com incidentes.

## 7. Architecture Center x serviços AWS

| Item | O que é | Cobra pelo uso? |
|---|---|---|
| AWS Architecture Center | Portal com orientações, padrões e recursos | Não |
| AWS Well-Architected Framework | Conjunto de boas práticas | Não |
| AWS Well-Architected Tool | Ferramenta de revisão de workloads | Não cobra pelo uso da ferramenta |
| AWS Trusted Advisor | Recomendações para custos, performance, segurança, tolerância a falhas e limites de serviço | Alguns recursos dependem do plano de suporte |
| AWS Config | Serviço que registra e avalia configurações de recursos | Sim, conforme uso |

**Atenção:** Well-Architected Tool e Trusted Advisor oferecem recomendações, mas têm propósitos diferentes. O Well-Architected Tool conduz uma revisão arquitetural estruturada; o Trusted Advisor analisa a conta e os recursos para sugerir melhorias.

## 8. Cenário de prova

**Pergunta:** Uma empresa quer revisar sua aplicação conforme boas práticas de segurança, confiabilidade, performance e custo. Ela também quer identificar prioridades de melhoria. Qual serviço ou recurso deve usar?

**Resposta:** O **AWS Well-Architected Tool**, usando o **AWS Well-Architected Framework**.

**Por quê?** Ele organiza a revisão por pilares, identifica riscos e fornece orientações priorizadas.

## 9. Revisão rápida

- O AWS Architecture Center é um portal de conhecimento arquitetural da AWS.
- O Well-Architected Framework possui seis pilares.
- O Well-Architected Tool faz revisões de workloads e aponta riscos.
- Lentes adaptam a revisão a domínios e tecnologias específicas.
- A ferramenta é gratuita; os recursos que você decidir implantar podem ter custo.
- Para alta disponibilidade, uma resposta comum é usar múltiplas AZs.
- Para menor privilégio, use políticas IAM bem restritas.
- Para comparar com o estado real de recursos da conta, lembre-se de AWS Trusted Advisor e AWS Config, cada um com finalidade própria.

## 10. Autoavaliação

1. Quais são os seis pilares do AWS Well-Architected Framework?
2. O AWS Architecture Center é um serviço de infraestrutura ou uma fonte de orientação?
3. Para que serve uma lente no Well-Architected Tool?
4. Qual a diferença principal entre Well-Architected Tool e Trusted Advisor?
5. Por que múltiplas AZs melhoram a confiabilidade de uma arquitetura?

### Gabarito

1. Excelência operacional, Segurança, Confiabilidade, Eficiência de performance, Otimização de custos e Sustentabilidade.
2. É uma fonte de orientação, padrões e boas práticas; não é um recurso de infraestrutura a ser provisionado.
3. Ela adiciona orientações específicas para determinado domínio ou tipo de workload.
4. O Well-Architected Tool conduz uma revisão arquitetural por pilares; o Trusted Advisor fornece verificações e recomendações sobre a conta e seus recursos.
5. Porque uma falha em uma AZ não precisa interromper toda a aplicação quando os componentes são distribuídos adequadamente.
