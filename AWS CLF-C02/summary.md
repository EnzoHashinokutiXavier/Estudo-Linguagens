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
