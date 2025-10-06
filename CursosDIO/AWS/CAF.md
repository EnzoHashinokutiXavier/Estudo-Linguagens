## _Domínio 1 : Conceitos de Nuvem_

# AWS Cloud Adoption Framework (CAF)

É um modelo que ajuda identificar e priorizar oportunidades de transformação digital, avaliar e aumentar a prontidão para nuvem e desenvolver um roteiro para guiar a transição dos negócios para a nuvem

## Benefícios

- Redução do risco comercial : maximiza beneficios e minimisa riscos da transformação, ajuda na segurança e disponibilidade dos dados na nuvem
- Melhoria do desempenho em ESG (ambiental, social e de governança) : ajuda a reduzir pegada de carbono, promove causas sociais e melhora transplarencia e responsabilidade de seus processos e operações
- Aumento da receita : ajuda a acelerar resultados de negócios, usando serviços da aws para aumentar competitividade no mercado e expandir alcance global
- Aumento da eficiência operacional : ajuda a construir plataforma hibrida de nivel empresarial, otimizando custos e recursos, melhorando qualidade e performance

Esses benefícios se traduzem em resultados de negócio e são consequência da cadeia de valor de transformação da nuvem

### Domínios de transformação

habilitados por conjuntos de capacidades fundamentais

uma capacidade é uma habilidade organizacional de usar processos para implantar recursos, (pessoas, tecnologia e quaisquer outros ativos tangíveis ou intangíveis) para alcançar um resultado específico

- Trasformação tecnológica : migrar e modernizar a infraestrutura, reduzindo custos, tempo de inatividade e eventos de segurança
- Transformação de processos : digitalizar, automatizar e otimizar operações de negócios, melhorando eficiencia, experiencia dos usuarios e reduzindo custos operacionais
- Transformação organizacional : reimaginar seu modelo operacional, como equipes de negocios e tecnologia são organizadas e criam valor para cliente, e uso de metodos ageis para evoluir rapidamente, tornando mais responsivo e concentrado no cliente
- Transformação de produtos : reimaginar seu modelo de negocios, criando novas propostas de valor (produtos, serviços) e modelos de receita, reduzindo tempo de implantação e alcançando clientes em novos segmentos de mercado


# Perspectivas fundamentais do CAF (6)

As capacidades do AWS CAF fornecem orientações de práticas recomendadas que ajudam você a melhorar sua prontidão para a nuvem (sua capacidade de aproveitar efetivamente a nuvem para fazer a transformação digital)

- Negócios : garantir que os investimentos em nuvem acelerem transformações e resultados dos negócios
    - CEO, CFO, COO, CIO e CTO

- Pessoas : ajudar a evoluir para cultura de crescimeto e aprendizado continuo. foco na cultura, estrutura organizacional, liderança e quadro de funcionários
    - CIO, COO, CTO, diretor de nuvem, além de líderes multifuncionais e de toda a empresa

- Governança : orquestrar iniciativas em nuvem, maximizando os benefícios organizacionais e minimizando os riscos relacionados à transformação
    - diretor de transformação, CIO, CTO, CFO, CDO e CRO

- Plataforma : criar uma plataforma de nuvem híbrida escalável e de nível empresarial, modernizar workloads existentes e implementar novas soluções nativas da nuvem
    - CTO, líderes de tecnologia, arquitetos e engenheiros

- Segurança : confidencialidade, a integridade e a disponibilidade de seus dados e workloads na nuvem
    - CISO, CCO, líderes de auditoria interna e arquitetos e engenheiros de segurança

- Operações : garantir que seus serviços de nuvem sejam entregues em um nível que atenda às necessidades de sua empresa
    - líderes de infraestrutura e operações, engenheiros de confiabilidade do local e gerentes de serviços de tecnologia da informação

## Estrategias de migração para nuvem AWS (7 Rs)

Estrategias de migração são métodos que ajudam a planejar, executar e validar a migração para nuvem AWS

- Retire (Retirada) : migrar aplicativos a serem descomissionados ou arquivados
    - Desativar aplicativos sem valor comercial, reduzir custos de manutenção e hospedagem, e reduzir riscos de segurança
- Retain (Reter) : manter aplicativos no ambiente ou adiar sua migração para nuvem
    - Segurança e conformidade, alto risco, dependências e falta de valor comercial na migração
- Rehost (Rehospedar) : mover aplicativos para a nuvem sem modifica-los
    - Migrar rapidamente para nuvem, minimizando interrupções e tempo de inatividade
- Realocate (Realocar) : Transferir servidores ou instâncias para outra plataforma na nuvem
    - Não exige novo hardware e mantém o aplicativo em execução, minimizando interrupções e tempo de inatividade
- Repurchase (Realocar) : Transferir servidores ou instancias para outra plataforma na nuvem
    - Inclui mudança para SaaS, atualizações de versão, substituição de aplicativos personalizados, entre outros
- Replataform (Realocação de plataformas) : Mover aplicativo para nuvem e introduzir otimizações para operá-lo de forma eficiente, reduzir ou aproveitar recursos da nuvem
    - Envolvimento de mudanças na arquitetura do aplicativo para atender a objetivos de negócios e plataformas de destino
- Refactor or Re-architect (Refatorar ou Rearquitetar) : Modificar a arquitetura do aplicativo ao move-lo para nuvem, aproveitando os recursos nativos para melhorar agilidade, desempenho e escalabilidade
    - Útil para aplicativos legados, monolíticos ou difíceis de manter, visando aprimorar testes, segurança e escalabilidade

A escolha da estrategia de migtração adequada depende de vários fatores, como o tipo, a complexidade e a criticidade dos workloads, os objetivos, os requisitos e as restrições de negócios, o tempo, o custo e o risco da migração, e o nível de maturidade e prontidão para a nuvem. 

Não existe uma estratégia de migração única que se aplique a todos os casos. Você pode usar uma combinação de estratégias de migração para diferentes workloads, de acordo com as suas necessidades e prioridades. 

A AWS oferece ferramentas e serviços que podem ajudar você a avaliar, planejar e executar a sua migração, como o AWS Migration Hub, o AWS Application Discovery Service, o AWS Server Migration Service, o AWS Database Migration Service, o AWS CloudEndure Migration e o AWS Snow Family. 

### Exemplo de estratégias de migração para nuvem AWS

- Rehosting : mover worloads da infraestrutura atual para nuvem AWS
    - migrar dados de forma rápida, segura, sem interromper as operações do seu banco de dados
    - replicação de banco de dados - copiar dados locais para nuvem
        - Por exemplo, você pode replicar os dados de um banco de dados Oracle local para um banco de dados Oracle na nuvem AWS, usando o serviço AWS Database Migration Service, ou AWS DMS.
- Replataforming : modificar workloads antes de movê-los para a nuvem AWS
    - como alterar o sistema operacional, o banco de dados ou o middleware
    - Um cenário comum de replatforming é o uso do AWS Snowball, que é um dispositivo físico que permite transferir grandes volumes de dados para a nuvem AWS, sem a necessidade de usar a internet.
    - O AWS Snowball é útil para workloads que têm requisitos de largura de banda, tempo ou segurança que não podem ser atendidos pela transferência de dados pela rede.
        - Por exemplo, você pode usar o AWS Snowball para migrar dados de um data center local para o Amazon S3, o serviço de armazenamento de objetos da AWS. O AWS Snowball criptografa os dados, comprime os dados e otimiza os dados para a transferência.
    - Você pode solicitar um ou mais dispositivos AWS Snowball pelo console da AWS, copiar os dados para o dispositivo, e enviá-lo de volta para a AWS. A AWS então carrega os dados para o Amazon S3 e apaga os dados do dispositivo.
- Refactoring : redesenhar workloads para se adaptarem aos recursos e serviços nativos da nuvem AWS
    - como o Amazon Lambda, o Amazon API Gateway e o Amazon DynamoDB
    - Um cenário comum de refactoring é o uso do Amazon Lambda, que é um serviço que permite executar código sem precisar provisionar ou gerenciar servidores.
    - O Amazon Lambda é útil para workloads que têm requisitos de escalabilidade, performance e custo que não podem ser atendidos pela execução de código em servidores tradicionais.
        - Por exemplo, você pode usar o Amazon Lambda para criar uma função que processa imagens enviadas para o Amazon S3, aplicando filtros, redimensionando ou adicionando marcas d’água.
    - O Amazon Lambda executa o código da função sempre que um evento é acionado, como o upload de uma imagem para o Amazon S3. Você paga apenas pelo tempo de computação que você consome, sem pagar nada quando o código não está sendo executado.