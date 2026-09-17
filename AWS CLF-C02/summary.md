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

