### What is Cloud Computing?

Cloud computing is the use of computing resources (servers, storage, databases) delivered over the internet from cloud providers instead of owning and maintaining physical infrastructure.

**Advantages of moving to cloud:**
- No longer responsible for physical maintenance, cooling, or component replacement
- Company only manages the applications and data

AWS is the global leader in cloud computing, though it didn't invent cloud computing—it raised the industry standard.

### Types of Cloud Computing

**By Deployment Model:**

- **Public Cloud**: Resources shared with other organizations
  - Examples: AWS, Google Cloud, Microsoft Azure
  - Lower cost, scalable, but less control

- **Private Cloud**: Dedicated infrastructure for one organization
  - Used by: Banks, financial institutions, governments, hospitals
  - Higher security, full control, more expensive

- **Hybrid Cloud**: Mix of public and private
  - Example: Sensitive data stays on-premises, other services use public cloud

**By Service Model:**

- **IaaS (Infrastructure as a Service)**: Rent IT infrastructure
  - What you get: Servers, virtual machines, storage, networking
  - You manage: Applications, data, middleware, runtime
  - Examples: EC2, EBS

- **PaaS (Platform as a Service)**: Rent platforms for development
  - What you get: Operating systems, databases, development environments
  - You manage: Applications and data
  - AWS manages: Infrastructure and middleware
  - Example: Elastic Beanstalk

- **SaaS (Software as a Service)**: Use applications over the internet
  - What you get: Ready-to-use applications
  - You manage: Nothing (vendor manages everything)
  - Examples: Gmail, Dropbox, Microsoft 365

### Key Cloud Advantages (Important for CLF-C02)

1. **Trade CapEx for OpEx**: Pay only for what you use, no upfront hardware costs
2. **Elasticity**: Automatically scale up/down based on demand
3. **Flexibility**: Choose region and service closest to your customers
4. **Global Reach**: Deploy applications worldwide in minutes
5. **High Availability**: Multi-region and multi-AZ redundancy
6. **Security**: Enterprise-grade security standards
7. **Agility**: Launch services in minutes, not months
8. **Cost Efficiency**: Shared infrastructure reduces costs

### AWS Global Infrastructure

**Structure (from largest to smallest):**

1. **Regions**: Geographic areas with complete AWS service deployments
   - Currently 33 regions worldwide
   - Each region is completely independent
   - You choose region based on compliance, latency, and cost

2. **Availability Zones (AZs)**: Physically separate data centers within a region
   - Currently 105 AZs across all regions
   - Connected by high-speed, low-latency networks
   - Automatically replicate to protect against failures
   - Use multiple AZs for high availability

3. **Local Zones**: Extended infrastructure for ultra-low latency
   - For applications needing millisecond latencies
   - Examples: Media content creation, real-time gaming

4. **Wavelength**: AWS compute at the edge of 5G networks
   - Ultra-low latency for mobile applications

5. **AWS Outposts**: AWS infrastructure on your premises
   - For applications that must stay on-premises due to compliance or latency
   - Same APIs and tools as cloud AWS

### AWS Pricing Model

**Fundamental Principle**: Pay only for what you use

**Cost Components:**
- **Compute**: Time running (EC2, Lambda)
- **Storage**: Data stored (S3, EBS)
- **Data Transfer**: Egress data from AWS

**Cost Monitoring Tools:**
- **AWS Budgets**: Set spending limits and receive alerts
- **AWS Cost Explorer**: Analyze and visualize costs
- **CloudWatch**: Monitor resource usage
- **Billing Dashboard**: Track current and forecasted costs

**Exam Tip**: Understand the difference between upfront costs (CapEx) vs pay-as-you-go (OpEx)

### AWS Support Plans (Important for CLF-C02)

| Plan | Cost | Best For | Response Times |
|------|------|----------|-----------------|
| **Basic** | Free | Experiments, testing | N/A |
| **Developer** | $$ | Development environments | <24h for general guidance |
| **Business** | $$$ | Production workloads | <1h for urgent issues |
| **Enterprise** | $$$$ | Mission-critical systems | <15min for urgent issues |

### AWS Shared Responsibility Model (CRITICAL FOR EXAM)

This is one of the most important concepts for CLF-C02.

**AWS Responsibility - Security "OF" the Cloud:**
- Physical infrastructure and data center security
- Network infrastructure
- Hypervisor and virtualization
- Hardware maintenance

**Customer Responsibility - Security "IN" the Cloud:**
- Data encryption (at rest and in transit)
- Data classification
- Access controls (IAM, security groups)
- Network configuration
- Operating system patches
- Application security

**Key Point**: Security is a shared responsibility. AWS secures the infrastructure; you secure your data and applications.

**Shared Components by Service Type:**
- **IaaS** (EC2): Most customer responsibility
- **PaaS** (RDS): More AWS responsibility
- **SaaS** (Gmail): Almost all AWS responsibility

### Core AWS Services for CLF-C02

The exam focuses on these fundamental services:

**Compute**: EC2, Lambda, ECS
**Storage**: S3, EBS
**Database**: RDS, DynamoDB
**Networking**: VPC, CloudFront, ELB
**Security**: IAM, KMS
**Management**: CloudWatch, CloudFormation

### Summary for Exam Success

1. Understand cloud computing fundamentals and deployment models
2. Know the 6 advantages of cloud (cost, scalability, flexibility, reliability, performance, security)
3. Grasp AWS Global Infrastructure (Regions > AZs > Local Zones)
4. Master the Shared Responsibility Model
5. Know when to use each service type (IaaS, PaaS, SaaS)
6. Understand pricing principles (pay-as-you-go)
7. Know support plans and their differences
