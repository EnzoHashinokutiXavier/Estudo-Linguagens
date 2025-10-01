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

## Estrategias de migração para nuvem AWS (7)

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