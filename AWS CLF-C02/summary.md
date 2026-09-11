| Service | One-line use | Score |
|---|---|---|
| **— FOUNDATIONAL CONCEPTS (not services, but heavily tested) —** | | |
| Shared Responsibility Model | AWS secures the cloud (hardware, hypervisor, facilities); you secure what's *in* it (data, OS patching on EC2, IAM, encryption choices). | 10 |
| Regions / Availability Zones / Edge Locations | Region = geographic area; AZ = one or more isolated datacenters inside a Region (high availability); Edge Location = CDN/DNS point of presence. | 10 |
| Well-Architected Framework | Six pillars (Operational Excellence, Security, Reliability, Performance Efficiency, Cost Optimization, Sustainability) used as design review criteria. | 9 |
| Six Advantages of Cloud | Trade capex for variable expense, benefit from massive economies of scale, stop guessing capacity, increase speed/agility, stop running datacenters, go global in minutes. | 9 |
| Deployment models (Cloud / Hybrid / On-premises) | Hybrid = mixing AWS with your own datacenter, typically via Direct Connect, VPN, Outposts or Storage Gateway. | 8 |
| Cloud Adoption Framework (CAF) | Six perspectives (Business, People, Governance, Platform, Security, Operations) that organize a migration plan. | 7 |
| **— IDENTITY & SECURITY —** | | |
| IAM | Controls *who* can do *what* in your account through users, groups, roles and JSON policies; free, global, deny-by-default. | 10 |
| IAM Roles | Temporary credentials assumed by a service or user — the correct answer whenever a question mentions "EC2 needs access to S3 without storing keys". | 9 |
| MFA + Root user practices | Enable MFA on root, never use root for daily work, delete root access keys, create an admin IAM user instead. | 9 |
| IAM Identity Center (ex-AWS SSO) | Single sign-on across multiple AWS accounts and business apps, usually federated with an external identity provider. | 7 |
| AWS Organizations / SCPs | Groups multiple accounts under one payer for consolidated billing and applies Service Control Policies as permission ceilings. | 9 |
| KMS | Creates and manages encryption keys for AWS services; the default answer for "encrypt data at rest". | 8 |
| CloudHSM | Dedicated single-tenant hardware security module when regulation demands you alone hold the keys. | 5 |
| Secrets Manager | Stores and automatically rotates database credentials, API keys and tokens. | 6 |
| Certificate Manager (ACM) | Provisions and renews free SSL/TLS certificates for ELB, CloudFront and API Gateway. | 6 |
| Shield (Standard / Advanced) | DDoS protection; Standard is free and automatic, Advanced is paid with 24/7 response team and cost protection. | 8 |
| WAF | Layer-7 firewall filtering HTTP requests by rules (SQL injection, XSS, IP, geography) on CloudFront, ALB or API Gateway. | 8 |
| GuardDuty | Continuous threat *detection* by analyzing logs (VPC Flow, DNS, CloudTrail) with ML — finds intruders, doesn't scan software. | 8 |
| Inspector | Automated vulnerability scan of EC2 instances, container images and Lambda for CVEs and bad network exposure. | 7 |
| Macie | Uses ML to find and classify sensitive data (PII) sitting in S3. | 7 |
| Security Hub | Aggregates and prioritizes findings from GuardDuty, Inspector, Macie and others into one dashboard with compliance checks. | 7 |
| Detective | Investigates the root cause of a security finding after detection, building relationship graphs. | 4 |
| AWS Artifact | Self-service portal to download compliance reports (SOC, PCI, ISO) and accept agreements. | 8 |
| Audit Manager | Continuously collects evidence to automate audit preparation against frameworks. | 5 |
| Cognito | Sign-up/sign-in and access control for *your app's* end users (mobile/web), not for AWS console access. | 5 |
| Directory Service | Managed Microsoft Active Directory in AWS, or a connector to your on-premises AD. | 4 |
| Firewall Manager / Network Firewall | Centrally manages WAF/Shield rules across accounts; Network Firewall is a stateful VPC-level firewall. | 3 |
| Resource Access Manager (RAM) | Shares resources like subnets and Transit Gateways across accounts. | 3 |
| **— COMPUTE —** | | |
| EC2 | Resizable virtual servers where you control the OS — maximum flexibility, maximum responsibility. | 10 |
| EC2 Instance Types (families) | Chosen by workload: general purpose, compute optimized, memory optimized, storage optimized, accelerated computing. | 7 |
| EC2 Auto Scaling | Adds or removes instances automatically to match demand — the answer for "elasticity" and "scale out horizontally". | 9 |
| Elastic Load Balancing (ALB/NLB/GLB) | Distributes incoming traffic across instances in multiple AZs; ALB works at HTTP layer, NLB at TCP layer for extreme performance. | 9 |
| Lambda | Runs your code without any server management, billed per millisecond, event-driven, max 15-minute execution. | 10 |
| Fargate | Serverless compute engine that runs containers so you don't manage the underlying EC2 cluster. | 7 |
| ECS | AWS-native container orchestration for Docker workloads. | 7 |
| EKS | Managed Kubernetes, chosen when you need Kubernetes portability/ecosystem specifically. | 6 |
| ECR | Private registry to store container images. | 4 |
| Elastic Beanstalk | Upload your code and AWS provisions the whole stack (EC2, ELB, Auto Scaling) — PaaS, you still own the resources and pay for them. | 7 |
| Lightsail | Simplified bundled virtual private server with predictable monthly pricing for small/simple workloads. | 6 |
| AWS Batch | Runs large-scale batch computing jobs, provisioning compute automatically. | 4 |
| Outposts | AWS-managed racks physically installed in your datacenter for true hybrid with low latency. | 5 |
| Local Zones / Wavelength | Extend a Region closer to end users; Wavelength specifically embeds compute inside 5G carrier networks. | 4 |
| **— STORAGE —** | | |
| S3 | Virtually unlimited object storage with 11 nines of durability, accessed via API/URL — not a filesystem, not bootable. | 10 |
| S3 storage classes | Standard, Intelligent-Tiering, Standard-IA, One Zone-IA, Glacier Instant/Flexible/Deep Archive — trade retrieval time and cost. | 8 |
| S3 Lifecycle policies | Rules that automatically move objects to cheaper classes or delete them after N days. | 7 |
| S3 Glacier / Deep Archive | Long-term archival at the lowest price, with retrieval measured in minutes to hours. | 8 |
| EBS | Network-attached block storage volume for a single EC2 instance, locked to one AZ, backed up via snapshots to S3. | 9 |
| EC2 Instance Store | Physically attached ephemeral disk — extremely fast but **data is lost** when the instance stops. | 6 |
| EFS | Shared elastic NFS filesystem mountable by many Linux EC2 instances across multiple AZs simultaneously. | 8 |
| FSx | Managed third-party filesystems (Windows File Server, Lustre, NetApp ONTAP, OpenZFS). | 5 |
| Storage Gateway | Hybrid appliance letting on-premises apps use AWS storage as if it were local (File, Volume, Tape gateways). | 6 |
| AWS Backup | Centralized, policy-based backup across EBS, RDS, DynamoDB, EFS and more. | 6 |
| Snow Family (Snowcone/Snowball/Snowmobile) | Physical devices to move terabytes/petabytes offline when the network would be too slow. | 6 |
| DataSync | Online transfer of large datasets between on-premises storage and AWS. | 5 |
| **— DATABASES —** | | |
| RDS | Managed relational database (MySQL, PostgreSQL, MariaDB, Oracle, SQL Server) where AWS handles patching and backups. | 10 |
| RDS Multi-AZ vs Read Replicas | Multi-AZ = synchronous standby for **high availability/failover**; Read Replicas = asynchronous copies for **read performance**. | 9 |
| Aurora | AWS-built MySQL/PostgreSQL-compatible engine, up to 5x/3x faster, storage auto-grows, 6 copies across 3 AZs. | 8 |
| DynamoDB | Serverless NoSQL key-value database with single-digit millisecond latency and automatic scaling. | 9 |
| ElastiCache | In-memory cache (Redis or Memcached) placed in front of a database to relieve read load. | 7 |
| Redshift | Petabyte-scale data warehouse for OLAP analytics and business intelligence, not for transactions. | 8 |
| DMS | Migrates databases to AWS with minimal downtime; pair with SCT when the engine changes. | 6 |
| DocumentDB / Neptune / Keyspaces / QLDB / Timestream | Purpose-built: MongoDB-compatible / graph / Cassandra-compatible / immutable ledger / time-series. | 4 |
| **— NETWORKING & CONTENT DELIVERY —** | | |
| VPC | Your logically isolated private network in AWS where you define subnets, route tables and gateways. | 10 |
| Security Groups | Stateful virtual firewall at the **instance** level; allow rules only, return traffic automatically permitted. | 9 |
| Network ACLs | Stateless firewall at the **subnet** level; supports explicit deny rules and evaluates rules in numeric order. | 8 |
| Internet Gateway / NAT Gateway | IGW gives a public subnet two-way internet access; NAT lets private-subnet instances reach out without being reachable. | 7 |
| CloudFront | Global CDN caching content at edge locations to cut latency; also a DDoS/WAF attachment point. | 9 |
| Route 53 | Managed DNS plus domain registration, health checks and routing policies (latency, geolocation, failover, weighted). | 9 |
| Direct Connect | Dedicated private physical fiber link from your datacenter to AWS for consistent bandwidth and lower latency than VPN. | 8 |
| Site-to-Site VPN | Encrypted tunnel over the public internet between on-premises and a VPC — cheaper and faster to set up than Direct Connect. | 7 |
| VPC Endpoints / PrivateLink | Reach S3, DynamoDB or other services privately without traversing the internet. | 6 |
| Transit Gateway | Hub-and-spoke router connecting thousands of VPCs and on-premises networks. | 5 |
| Global Accelerator | Routes user traffic over the AWS backbone via static anycast IPs to improve availability and latency for non-HTTP workloads. | 4 |
| API Gateway | Front door that creates, secures and throttles REST/HTTP/WebSocket APIs, usually in front of Lambda. | 7 |
| **— MONITORING, GOVERNANCE & AUTOMATION —** | | |
| CloudWatch | Collects **metrics, logs and alarms** — answers "how is my resource performing?" and triggers actions. | 10 |
| CloudTrail | Records **API calls and who made them** — answers "who deleted this bucket and when?"; auditing, not performance. | 9 |
| AWS Config | Records resource configuration over time and evaluates it against compliance rules — answers "is this resource configured correctly?" | 8 |
| Trusted Advisor | Automated checks across five categories (cost optimization, performance, security, fault tolerance, service limits); full check list requires Business/Enterprise support. | 9 |
| CloudFormation | Infrastructure as Code in YAML/JSON templates, letting you recreate an identical environment repeatedly; free (you pay for resources). | 8 |
| Systems Manager | Operates fleets at scale: patching, run commands, Parameter Store, Session Manager (SSH without opening port 22). | 6 |
| AWS Health Dashboard | Shows AWS service outages plus events specifically affecting *your* account and resources. | 6 |
| Control Tower | Sets up and governs a secure multi-account landing zone on top of Organizations, with guardrails. | 6 |
| Compute Optimizer | Recommends rightsizing changes based on actual utilization metrics. | 5 |
| Service Catalog | Curated portfolio of approved products IT lets users self-provision. | 4 |
| License Manager / Launch Wizard / Proton | Track BYOL licenses / guided sizing for MS workloads / templated infra for developers. | 2 |
| **— BILLING, PRICING & SUPPORT —** | | |
| EC2 pricing models | On-Demand (flexible, no commitment), Reserved Instances & Savings Plans (1–3 yr commitment, up to ~72% off), Spot (up to 90% off, can be interrupted), Dedicated Host (physical server, BYOL/compliance). | 10 |
| Savings Plans vs Reserved Instances | Savings Plans commit to a dollar-per-hour spend and are more flexible across instance family/Region; RIs commit to specific instance attributes. | 8 |
| Consolidated Billing | One bill for all accounts in an Organization, with volume discounts and RI/Savings Plans shared across accounts. | 9 |
| AWS Free Tier | Three types: Always Free, 12-month free, and short-term trials. | 8 |
| Cost Explorer | Visualizes and forecasts past/future spend with filtering by tag, service and account. | 9 |
| AWS Budgets | Sets a cost/usage threshold and alerts (or acts) **before** you overspend — proactive, unlike Cost Explorer. | 9 |
| Cost and Usage Report (CUR) | Most granular billing data export, delivered to S3 for deep analysis. | 7 |
| Pricing Calculator | Estimates cost of a planned architecture *before* you build it. | 8 |
| Cost Anomaly Detection | ML-based alerts on unusual spending spikes. | 5 |
| Billing Conductor | Creates custom billing views for resellers/internal chargeback. | 2 |
| Support Plans (Basic/Developer/Business/Enterprise On-Ramp/Enterprise) | Know the ladder: Business unlocks 24/7 phone + full Trusted Advisor + third-party software support; Enterprise adds a TAM and 15-minute critical response. | 9 |
| Technical Account Manager (TAM) | Designated advocate included only in Enterprise (and limited pool in On-Ramp) plans. | 7 |
| AWS Marketplace | Catalog to buy and deploy third-party software, billed through your AWS account. | 6 |
| Partner Network (APN) / Professional Services | Third-party consulting/technology partners and AWS's own consulting arm for migrations. | 5 |
| TCO / cost of ownership concepts | Cloud shifts capex to opex and eliminates costs like datacenter power, cooling and hardware refresh. | 7 |
| **— APPLICATION INTEGRATION —** | | |
| SQS | Message **queue** that decouples components; one consumer pulls each message, enabling asynchronous processing. | 8 |
| SNS | Pub/sub **notifications** that fan out one message to many subscribers (email, SMS, Lambda, SQS). | 8 |
| EventBridge | Event bus routing events between AWS services, SaaS apps and your apps based on rules; also does scheduling. | 6 |
| Step Functions | Visual state machine that orchestrates multi-step workflows across Lambda and other services. | 5 |
| Amazon MQ | Managed ActiveMQ/RabbitMQ for apps already using standard messaging protocols. | 4 |
| **— ANALYTICS —** | | |
| Athena | Serverless SQL queries directly against files in S3, pay per data scanned. | 6 |
| Glue | Serverless ETL and data catalog for preparing data for analytics. | 6 |
| Kinesis | Ingests and processes streaming data (video, logs, clickstream) in real time. | 6 |
| QuickSight | Business intelligence dashboards and visualization. | 6 |
| EMR | Managed Hadoop/Spark clusters for big data processing. | 5 |
| OpenSearch Service | Search and log analytics over large datasets. | 4 |
| Lake Formation / Data Exchange | Builds a governed data lake / marketplace for third-party datasets. | 3 |
| **— AI / MACHINE LEARNING —** | | |
| SageMaker | End-to-end platform to build, train and deploy your own ML models. | 6 |
| Rekognition | Image and video analysis (faces, objects, moderation). | 5 |
| Comprehend | NLP that extracts sentiment, entities and key phrases from text. | 5 |
| Polly / Transcribe / Translate | Text→speech / speech→text / language translation. | 5 |
| Lex | Builds conversational chatbots (the engine behind Alexa). | 5 |
| Textract | Extracts text, forms and tables from scanned documents. | 4 |
| Bedrock / Amazon Q | Access to foundation models via API / AI assistant for business and AWS operations. | 5 |
| Kendra / Personalize / Fraud Detector | Intelligent enterprise search / recommendations / fraud detection. | 3 |
| **— DEVELOPER TOOLS & ACCESS —** | | |
| Management Console / CLI / SDK | The three ways to interact with AWS: browser GUI, terminal commands, and code libraries. | 8 |
| CodePipeline | Orchestrates the CI/CD pipeline across build, test and deploy stages. | 5 |
| CodeBuild / CodeDeploy / CodeArtifact | Compiles and tests / automates deployments / stores software packages. | 4 |
| X-Ray | Traces requests across distributed microservices to find bottlenecks. | 5 |
| Amplify / CDK / Cloud9 | Full-stack web/mobile framework / IaC in real programming languages / browser IDE. | 3 |
| **— MIGRATION —** | | |
| Migration Hub | Single place to track migration progress across tools. | 5 |
| Application Migration Service (MGN) | Lift-and-shift rehosting of on-premises servers into EC2. | 5 |
| Application Discovery Service | Inventories on-premises servers and dependencies before migrating. | 4 |
| Migration Evaluator / MAP | Builds the business case and funds/accelerates large migrations. | 3 |

---

# Access and Authentication

| Component | Purpose | CLF-C02 takeaway |
|---|---|---|
| IAM user | Long-term identity for a person or legacy application | Avoid long-term access keys when an alternative exists |
| IAM group | Collection of IAM users with shared permissions | Groups contain users, not other groups |
| IAM role | Assumable identity with permissions and temporary credentials | Preferred for AWS workloads and temporary access |
| IAM policy | JSON document defining permissions | Can explicitly allow or deny actions |
| MFA | Second authentication factor | Essential for root and privileged identities |

| Policy type | Where it is defined | Key point |
|---|---|---|
| Identity-based policy | IAM user, group, or role | Defines what an identity can do |
| Resource-based policy | On the resource, such as an S3 bucket | Defines who can access that resource |
| Service control policy (SCP) | AWS Organizations | Sets the maximum available permissions; does not grant permissions |
| Permissions boundary | IAM user or role | Sets the maximum permissions that can be delegated |

| Service | Role in access and authentication |
|---|---|
| IAM | Identities and permissions |
| IAM Identity Center | Workforce SSO and multi-account access |
| AWS STS | Temporary credentials for roles and federation |
| AWS Organizations | Multi-account management and SCPs |
| AWS CloudTrail | Records API activity for auditing |
| Amazon Cognito | Customer identity for web and mobile applications |
| AWS Secrets Manager | Stores and helps rotate secrets, such as database passwords and API keys |

**People:** IAM Identity Center + MFA.  
**AWS workloads:** IAM roles + temporary credentials.  
**Root:** MFA and exceptional use only.  
**Permissions:** IAM policies + least privilege.  
**Auditing:** CloudTrail.  
**Multiple accounts:** Organizations, SCPs, and cross-account roles.


# AWS Architecture Center

| Resource | Purpose | CLF-C02 relevance |
|---|---|---|
| AWS Well-Architected Framework | A set of principles for assessing and improving architectures | A core AWS best-practices topic |
| AWS Well-Architected Tool | A free Console tool for performing structured reviews | Helps identify risks and improvements |
| Architecture Blog | Technical articles and solution patterns | Provides real-world implementation examples |
| Architecture Diagrams | Official architecture diagrams and AWS icons | Helps explain components and data flows |
| Architecture Decision Records (ADRs) | Documentation of architectural decisions and their rationale | Shows how technical choices can be documented |
| AWS Solutions Library | Implementations and architectures for common use cases | Speeds up adoption of validated patterns |

Well-Architected Framework
1. **Operational Excellence** — Run, monitor, and continually improve systems.
2. **Security** — Protect data, systems, and assets through controls and risk management.
3. **Reliability** — Recover from failures, adapt to demand, and meet requirements correctly.
4. **Performance Efficiency** — Use computing resources efficiently and maintain efficiency as demand changes.
5. **Cost Optimization** — Avoid unnecessary costs and maximize the value obtained from the cloud.
6. **Sustainability** — Minimize the environmental impact of cloud workloads.

| Item | What it is | Is there a charge to use it? |
|---|---|---|
| AWS Architecture Center | A portal with guidance, patterns, and resources | No |
| AWS Well-Architected Framework | A collection of best practices | No |
| AWS Well-Architected Tool | A tool for reviewing workloads | No charge for using the tool itself |
| AWS Trusted Advisor | Recommendations for cost, performance, security, fault tolerance, and service limits | Some checks depend on the AWS Support plan |
| AWS Config | A service that records and evaluates resource configurations | Yes, based on usage |

- The AWS Architecture Center is an AWS portal for architectural knowledge and guidance.
- The Well-Architected Framework has six pillars.
- The Well-Architected Tool reviews workloads and identifies risks.
- Lenses tailor a review to specific domains and technologies.
- The tool is free; AWS resources you choose to deploy may have costs.
- For high availability, a common answer is to use multiple Availability Zones.
- For least privilege, use restrictive IAM policies.
- To compare recommendations with the actual configuration of account resources, remember AWS Trusted Advisor and AWS Config; each has a distinct purpose.


# Data Lakes, Data Warehouses

| Requirement | Best service or concept |
|---|---|
| Store raw files, logs, images, and datasets cheaply at scale | Amazon S3 / data lake |
| Build and govern a secure data lake | AWS Lake Formation |
| Discover schemas and run serverless ETL transformations | AWS Glue |
| Run SQL directly against data in S3, with no infrastructure to manage | Amazon Athena |
| Process massive data with Apache Spark or Hadoop | Amazon EMR |
| Run high-performance SQL analytics on curated enterprise data | Amazon Redshift |
| Query Amazon S3 data from Amazon Redshift | Redshift Spectrum |
| Build dashboards and visual reports | Amazon QuickSight |

| Topic | Data lake | Data warehouse |
|---|---|---|
| Typical AWS foundation | Amazon S3 | Amazon Redshift |
| Data types | Structured, semi-structured, and unstructured | Mostly structured and curated |
| Data state | Raw, detailed, or processed | Cleaned, transformed, modeled |
| Schema approach | Schema-on-read | Schema-on-write |
| Main users | Data engineers, data scientists, analysts | Business analysts and BI users |
| Common workloads | Exploration, ML, logs, large-scale storage | Reporting, dashboards, SQL analytics |

- **"Object storage"**, **"raw data"**, or **"data lake"**: think Amazon S3.
- **"Govern access to a data lake"**: think AWS Lake Formation.
- **"ETL"**, **"data catalog"**, or **"crawler"**: think AWS Glue.
- **"Query S3 with SQL"** and **"serverless"**: think Amazon Athena.
- **"Enterprise analytics warehouse"** or **"complex BI queries"**: think Amazon Redshift.
- **"Use Spark/Hadoop"**: think Amazon EMR.
- **"Dashboards"** or **"data visualizations"**: think Amazon QuickSight.
- **"Query S3 from Redshift"**: think Redshift Spectrum.

**S3 stores it. Glue prepares it. Lake Formation governs it. Athena queries it in S3. Redshift warehouses it. QuickSight shows it.**


# AWS Deployment Services

| Strategy | Meaning | Main benefit |
| --- | --- | --- |
| In-place deployment | Update the existing instances | Simple; needs no duplicate environment |
| Blue/green deployment | Send traffic from the old environment (blue) to a new environment (green) | Fast rollback by returning traffic to the old version |
| Canary deployment | Release to a small portion of traffic first, then expand | Limits exposure to a bad release |
| Linear deployment | Shift traffic in equal increments over time | Controlled, gradual rollout |

| If the question asks for... | Most relevant service or concept |
| --- | --- |
| A managed service to compile code and run tests | AWS CodeBuild |
| An automated workflow from source to production | AWS CodePipeline |
| Automated release of application revisions | AWS CodeDeploy |
| A fast way to deploy a web application without managing infrastructure directly | AWS Elastic Beanstalk |
| Repeatable infrastructure provisioning from templates | AWS CloudFormation |
| A container-image registry | Amazon ECR |
| Running containers with AWS-native orchestration | Amazon ECS |
| Managed Kubernetes | Amazon EKS |
| Serverless container compute | AWS Fargate |
| Serverless event-driven code | AWS Lambda |
| Remote commands, patching, and fleet operations | AWS Systems Manager |
| Metrics, alarms, logs, and deployment health monitoring | Amazon CloudWatch |
| A safe rollout with quick traffic-based rollback | Blue/green or canary deployment |

- **Build it:** CodeBuild
- **Coordinate it:** CodePipeline
- **Release it:** CodeDeploy
- **Simplify web-app deployment:** Elastic Beanstalk
- **Define infrastructure:** CloudFormation
- **Store container images:** ECR
- **Run containers:** ECS / EKS / Fargate
- **Operate and patch fleets:** Systems Manager
- **Observe and alarm:** CloudWatch

When answering CLF-C02 questions, identify the primary requirement first: build, pipeline orchestration, application release, infrastructure provisioning, container storage, container runtime, operations, or monitoring. Then choose the service whose core purpose most directly matches that requirement.


# AWS WAF and Related Security Services

| Service or feature | Main purpose | Layer / scope |
|---|---|---|
| AWS WAF | Filters HTTP/HTTPS requests to web applications | Layer 7, application layer |
| AWS Shield | Protects against DDoS attacks | Network and application DDoS protection |
| Security groups | Stateful virtual firewall for AWS resources | Instance/resource level |
| Network ACLs | Stateless allow/deny rules for a subnet | Subnet level |
| AWS Network Firewall | Managed network firewall and intrusion prevention | VPC network traffic |

- If the question mentions **SQL injection, XSS, HTTP requests, web applications, or APIs**, choose **AWS WAF**.
- If it mentions a **DDoS attack**, choose **AWS Shield**; Shield Advanced is the premium option for enhanced DDoS response and protections.
- If it asks for a firewall around an **EC2 instance**, think **security groups**.
- If it asks for subnet-level, stateless allow/deny traffic filtering, think **network ACLs**.
- If it asks for centralized network traffic inspection in a VPC, think **AWS Network Firewall**.
- If it asks to manage WAF policies across many accounts, think **AWS Firewall Manager**.

AWS WAF is the AWS service for filtering and protecting HTTP/HTTPS traffic to web applications and APIs. Pair it with AWS Shield for DDoS protection, security groups and NACLs for basic VPC traffic control, AWS Network Firewall for deeper VPC network filtering, and AWS Firewall Manager for multi-account policy management.

# Machine Images, Containers, and Docker

| Topic | EC2 virtual machine | Container |
| --- | --- | --- |
| Main unit | Full virtual server | Application and its dependencies |
| Operating system | Each instance has a guest OS | Containers share the host OS kernel |
| Startup time | Usually slower | Usually faster |
| Resource overhead | Higher | Lower |
| Typical AWS image | AMI | Container image |
| Best for | Full OS control, legacy workloads | Portable microservices and scalable applications |

| If the question asks for... | Best answer |
| --- | --- |
| A reusable template to launch EC2 instances | Amazon Machine Image (AMI) |
| A backup of an EBS volume | Amazon EBS snapshot |
| Storage for private Docker/container images | Amazon ECR |
| AWS-native service to orchestrate containers | Amazon ECS |
| Managed Kubernetes | Amazon EKS |
| Containers without managing servers | AWS Fargate |
| Event-driven code, optionally packaged as an image | AWS Lambda |
| Virtual servers with OS-level control | Amazon EC2 |

- **AMI**: template for launching EC2 instances.
- **EBS snapshot**: backup of an EBS volume.
- **Docker image**: package used to create containers.
- **Amazon ECR**: managed image registry.
- **Amazon ECS**: AWS-native container orchestration.
- **Amazon EKS**: managed Kubernetes.
- **AWS Fargate**: serverless compute for ECS/EKS containers.
- **Amazon EC2**: virtual servers, which can also host containers.

For the CLF-C02 exam, concentrate on the service purpose and the shared-responsibility trade-off: managed/serverless options such as Fargate reduce the infrastructure that the customer must operate.


# AWS Encryption Services

| Requirement in a question | Best answer |
| --- | --- |
| Create and control encryption keys | AWS KMS |
| Use dedicated, single-tenant HSM hardware | AWS CloudHSM |
| Store and automatically rotate database credentials | AWS Secrets Manager |
| Store a configuration value or encrypted parameter | Systems Manager Parameter Store |
| Issue and renew TLS/SSL certificates | AWS Certificate Manager |
| Encrypt web traffic | HTTPS/TLS, often with ACM certificates |
| Encrypt S3 objects with detailed key audit/control | SSE-KMS with a customer managed KMS key |
| Encrypt an EBS volume or snapshot | Amazon EBS encryption with KMS |

**KMS manages keys; CloudHSM provides dedicated HSMs; Secrets Manager stores and rotates secrets; ACM manages TLS certificates.** Then identify whether the question concerns data at rest, data in transit, key control, credential rotation, or compliance-driven hardware control.
