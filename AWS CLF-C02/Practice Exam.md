# AWS Certified Cloud Practitioner (CLF-C02) — Practice Exam

**50 questions · English · Suggested time: 50 minutes**

The questions are mixed as in the real exam. Blueprint: Cloud Concepts 12, Security & Compliance 15, Cloud Technology & Services 17, Billing/Pricing/Support 6. 

Answer first, then click **Show answer**. `Select TWO` means multiple response.

---

### 1. Which service is a managed relational database that reduces patching and backup work?

- A. DynamoDB  
- B. Redshift  
- C. ElastiCache  
- D. Amazon RDS
<details><summary>Show answer</summary>**D. Amazon RDS** — managed relational database service.</details>

### 2. Which service records AWS API activity for auditing?

- A. CloudWatch  
- B. AWS CloudTrail  
- C. AWS Config  
- D. AWS Artifact
<details><summary>Show answer</summary>**B. AWS CloudTrail** — records API calls and account activity.</details>

### 3. To tolerate failure of one data center within a Region, deploy across which resource?

- A. Edge locations  
- B. One Availability Zone  
- C. Multiple Availability Zones  
- D. IAM users
<details><summary>Show answer</summary>**C. Multiple Availability Zones** — AZs are isolated for fault tolerance.</details>

### 4. Which EC2 option suits fault-tolerant workloads that can be interrupted?

- A. Spot Instances  
- B. On-Demand Instances  
- C. Dedicated Hosts  
- D. Savings Plans only
<details><summary>Show answer</summary>**A. Spot Instances** — discounted unused capacity that can be interrupted.</details>

### 5. Which service creates an isolated virtual network with subnets and route tables?

- A. Route 53  
- B. Amazon VPC  
- C. Transit Gateway  
- D. CloudFront
<details><summary>Show answer</summary>**B. Amazon VPC** — a logically isolated AWS network.</details>

### 6. Under shared responsibility, what does AWS manage?

- A. IAM permissions  
- B. EC2 guest OS patches  
- C. S3 data classification  
- D. Physical AWS facilities
<details><summary>Show answer</summary>**D. Physical AWS facilities** — AWS secures the infrastructure of the cloud.</details>

### 7. Which service sends an alert when forecasted monthly spending exceeds a target?

- A. AWS Budgets  
- B. Cost Explorer  
- C. Pricing Calculator  
- D. Artifact
<details><summary>Show answer</summary>**A. AWS Budgets** — supports actual and forecasted cost alerts.</details>

### 8. Which storage provides persistent block volumes for EC2?

- A. EFS  
- B. S3  
- C. Amazon EBS  
- D. Storage Gateway
<details><summary>Show answer</summary>**C. Amazon EBS** — persistent block storage for EC2.</details>

### 9. Which service discovers sensitive data in Amazon S3?

- A. GuardDuty  
- B. WAF  
- C. IAM  
- D. Amazon Macie
<details><summary>Show answer</summary>**D. Amazon Macie** — identifies sensitive S3 data.</details>

### 10. Which tool estimates cost before resources are deployed?

- A. Cost and Usage Report  
- B. AWS Pricing Calculator  
- C. Trusted Advisor  
- D. Billing Conductor
<details><summary>Show answer</summary>**B. AWS Pricing Calculator** — estimates a planned architecture's cost.</details>

### 11. Which service runs event-driven code without managing servers?

- A. EC2 Auto Scaling  
- B. EBS  
- C. AWS Lambda  
- D. Direct Connect
<details><summary>Show answer</summary>**C. AWS Lambda** — serverless event-driven compute.</details>

### 12. Which action demonstrates elasticity?

- A. Add instances during a spike and remove them afterward  
- B. Replace an on-premises disk  
- C. Encrypt an S3 bucket  
- D. Buy a database license
<details><summary>Show answer</summary>**A.** Elasticity matches capacity to changing demand.</details>

### 13. An application needs temporary S3 permissions without embedded long-term keys. Use what?

- A. Root access keys  
- B. An IAM role  
- C. An IAM group  
- D. A public bucket
<details><summary>Show answer</summary>**B. An IAM role** — supplies temporary credentials.</details>

### 14. Which service distributes requests across healthy targets?

- A. CloudFormation  
- B. CloudWatch  
- C. Snowball  
- D. Elastic Load Balancing
<details><summary>Show answer</summary>**D. Elastic Load Balancing** — routes traffic across targets.</details>

### 15. Which Well-Architected pillar covers failure recovery?

- A. Reliability  
- B. Sustainability  
- C. Cost Optimization  
- D. Security
<details><summary>Show answer</summary>**A. Reliability.**</details>

### 16. Which service provides managed queues to decouple components?

- A. SNS  
- B. EventBridge  
- C. Amazon SQS  
- D. Step Functions
<details><summary>Show answer</summary>**C. Amazon SQS** — managed message queuing.</details>

### 17. Which service centralizes security findings from AWS services and partners?

- A. Artifact  
- B. Budgets  
- C. Route 53  
- D. AWS Security Hub
<details><summary>Show answer</summary>**D. AWS Security Hub.**</details>

### 18. Which S3 class provides millisecond retrieval for infrequently accessed data?

- A. Glacier Deep Archive  
- B. S3 Standard-IA  
- C. One Zone-IA  
- D. EFS
<details><summary>Show answer</summary>**B. S3 Standard-IA.**</details>

### 19. Moving an application to AWS with minimal changes is which migration strategy?

- A. Retire  
- B. Refactor  
- C. Rehost  
- D. Repurchase
<details><summary>Show answer</summary>**C. Rehost** — lift and shift.</details>

### 20. Which Support plan includes a designated TAM?

- A. Enterprise Support  
- B. Business Support  
- C. Developer Support  
- D. Basic Support
<details><summary>Show answer</summary>**A. Enterprise Support.**</details>

### 21. Which service records resource configurations and evaluates rules?

- A. CloudTrail  
- B. CloudFront  
- C. Directory Service  
- D. AWS Config
<details><summary>Show answer</summary>**D. AWS Config.**</details>

### 22. Multiple Linux EC2 instances need a shared managed file system. Choose what?

- A. EBS  
- B. Amazon EFS  
- C. Glacier Flexible Retrieval  
- D. DynamoDB
<details><summary>Show answer</summary>**B. Amazon EFS** — managed shared NFS file system.</details>

### 23. Which root-user practice is recommended?

- A. Enable MFA and avoid routine root use  
- B. Create root keys for scripts  
- C. Share the root password  
- D. Use root daily
<details><summary>Show answer</summary>**A.** Use MFA and least-privileged IAM identities.</details>

### 24. Which service offers DNS and domain registration?

- A. ELB  
- B. Direct Connect  
- C. Amazon Route 53  
- D. API Gateway
<details><summary>Show answer</summary>**C. Amazon Route 53.**</details>

### 25. Which benefit avoids large up-front server purchases for unpredictable demand?

- A. More data centers  
- B. Trade fixed expense for variable expense  
- C. Eliminate all operations  
- D. Discounted hardware
<details><summary>Show answer</summary>**B.** Pay for consumption instead of capital expenditure.</details>

### 26. Which service provides a dedicated connection from on premises to AWS?

- A. CloudFront  
- B. WAF  
- C. Site-to-Site VPN only  
- D. AWS Direct Connect
<details><summary>Show answer</summary>**D. AWS Direct Connect.**</details>

### 27. Which TWO are customer responsibilities for Amazon EC2? **Select TWO.**

- A. Maintaining physical servers  
- B. Maintaining data centers  
- C. Patching the guest OS  
- D. Maintaining the global network  
- E. Configuring security groups
<details><summary>Show answer</summary>**C and E.** Customers patch the guest OS and configure security groups.</details>

### 28. Which service provides resizable virtual servers?

- A. Amazon EC2  
- B. Lambda  
- C. S3  
- D. RDS
<details><summary>Show answer</summary>**A. Amazon EC2.**</details>

### 29. Which service detects suspicious activity and compromised credentials?

- A. Macie  
- B. Artifact  
- C. Backup  
- D. Amazon GuardDuty
<details><summary>Show answer</summary>**D. Amazon GuardDuty.**</details>

### 30. Which tool analyzes historical AWS cost and usage?

- A. Budgets  
- B. AWS Cost Explorer  
- C. Support Center  
- D. CloudTrail
<details><summary>Show answer</summary>**B. AWS Cost Explorer.**</details>

### 31. Which service reviews a workload against Well-Architected best practices?

- A. AWS Well-Architected Tool  
- B. CloudFront  
- C. Artifact  
- D. Inspector
<details><summary>Show answer</summary>**A. AWS Well-Architected Tool.**</details>

### 32. Which service is a serverless NoSQL database?

- A. Aurora  
- B. Redshift  
- C. Amazon DynamoDB  
- D. Neptune
<details><summary>Show answer</summary>**C. Amazon DynamoDB.**</details>

### 33. Which service protects web applications against SQL injection?

- A. Shield Standard  
- B. AWS WAF  
- C. Inspector  
- D. KMS
<details><summary>Show answer</summary>**B. AWS WAF.**</details>

### 34. What is a geographic area containing multiple Availability Zones?

- A. Edge location  
- B. VPC  
- C. Local Zone  
- D. AWS Region
<details><summary>Show answer</summary>**D. AWS Region.**</details>

### 35. Which service runs ECS/EKS containers without managing EC2 instances?

- A. Dedicated Hosts  
- B. Outposts  
- C. AWS Fargate  
- D. Lightsail
<details><summary>Show answer</summary>**C. AWS Fargate.**</details>

### 36. Which principle helps avoid long-term capacity forecasts?

- A. Stop guessing capacity needs  
- B. Use one AZ  
- C. Make manual changes  
- D. Buy for peak demand
<details><summary>Show answer</summary>**A.** Provision resources as demand requires.</details>

### 37. Which service provides DDoS protection?

- A. Secrets Manager  
- B. Macie  
- C. Artifact  
- D. AWS Shield
<details><summary>Show answer</summary>**D. AWS Shield.**</details>

### 38. Which service fans out notifications to email, SMS, and HTTP subscribers?

- A. SQS  
- B. Amazon SNS  
- C. EBS  
- D. Backup
<details><summary>Show answer</summary>**B. Amazon SNS.**</details>

### 39. Managed services let teams spend more time building features. Which benefit is this?

- A. Increase speed and agility  
- B. Own hardware  
- C. Only long-term contracts  
- D. Larger data centers
<details><summary>Show answer</summary>**A. Increase speed and agility.**</details>

### 40. Which AWS service is managed Kubernetes?

- A. ECS  
- B. Lambda  
- C. Amazon EKS  
- D. Fargate
<details><summary>Show answer</summary>**C. Amazon EKS.**</details>

### 41. Where can a company download AWS SOC reports and agreements?

- A. Config  
- B. AWS Artifact  
- C. Inspector  
- D. Audit Manager
<details><summary>Show answer</summary>**B. AWS Artifact.**</details>

### 42. Which service provisions repeatable infrastructure from templates?

- A. Organizations  
- B. Inspector  
- C. Support  
- D. AWS CloudFormation
<details><summary>Show answer</summary>**D. AWS CloudFormation.**</details>

### 43. Which framework contains business, people, governance, platform, security, and operations perspectives?

- A. Shared Responsibility Model  
- B. Global Accelerator  
- C. AWS Cloud Adoption Framework (AWS CAF)  
- D. Organizations
<details><summary>Show answer</summary>**C. AWS CAF.**</details>

### 44. Which service manages encryption keys for AWS services and applications?

- A. AWS KMS  
- B. IAM  
- C. Cognito  
- D. CloudHSM only
<details><summary>Show answer</summary>**A. AWS KMS.**</details>

### 45. Which feature sets maximum permissions for member accounts in an organization?

- A. IAM user policy  
- B. Service control policies (SCPs)  
- C. Network ACL  
- D. CloudWatch alarm
<details><summary>Show answer</summary>**B. SCPs in AWS Organizations.** They limit, but do not grant, permissions.</details>

### 46. Which choice contains TWO practices that help allocate costs by project or department?

- A. Internet gateway and public subnet  
- B. Shield Advanced and WAF  
- C. Root users and MFA  
- D. Cost allocation tags and consolidated billing
<details><summary>Show answer</summary>**D.** Tags add business context; consolidated billing centralizes visibility.</details>

### 47. Which service uses edge locations for low-latency static-content delivery?

- A. Amazon CloudFront  
- B. Route 53  
- C. Direct Connect  
- D. VPC
<details><summary>Show answer</summary>**A. Amazon CloudFront.**</details>

### 48. Which service can automatically rotate database credentials?

- A. Certificate Manager  
- B. Cognito  
- C. AWS Secrets Manager  
- D. IAM Identity Center
<details><summary>Show answer</summary>**C. AWS Secrets Manager.**</details>

### 49. Automatically replacing failed instances instead of repairing them illustrates what principle?

- A. Elasticity  
- B. Single point of control  
- C. Capital expenditure  
- D. Disposable resources
<details><summary>Show answer</summary>**D. Use disposable resources.**</details>

### 50. Which service aggregates security findings to assess security posture?

- A. Artifact  
- B. AWS Security Hub  
- C. Config  
- D. Macie
<details><summary>Show answer</summary>**B. AWS Security Hub.**</details>

---

## Sources

- [Official CLF-C02 Exam Guide](https://docs.aws.amazon.com/aws-certification/latest/cloud-practitioner-02/cloud-practitioner-02.html)
- [AWS Certified Cloud Practitioner overview](https://aws.amazon.com/certification/certified-cloud-practitioner/)
- [AWS Interactive Knowledge Tool](https://pages.awscloud.com/AWS_2020_Cloud_Practitioner_Knowledge_Tool.html)

All questions are original practice questions, not exam dumps or copied live questions.
