# AWS Certified Cloud Practitioner (CLF-C02) — Hard Practice Exam

**Format:** 30 multiple-choice questions, single best answer.  
**Tip:** Attempt each question before expanding its answer. The questions deliberately include common CLF-C02 traps: shared-responsibility boundaries, similarly named services, pricing exceptions, and “least operational effort” wording.

---

## 1

A company stores customer documents in Amazon S3. Which task remains the **customer's** responsibility under the AWS shared responsibility model?

- A. Replacing failed disks in the underlying storage fleet.
- B. Defining S3 bucket policies and data classification labels.
- C. Securing the physical perimeter of an AWS Region.
- D. Patching the S3 service software used by all tenants.

<details><summary>Show answer</summary>

**Answer: B.** AWS operates the S3 infrastructure and service. The customer controls data, access policies, and classification.
</details>

## 2

An application running on an EC2 instance must read objects from one S3 bucket. The security team does not allow long-term access keys on instances. What should the company use?

- A. An IAM user with an inline policy and console password.
- B. An S3 access point with a public network configuration.
- C. An IAM group assigned directly to the EC2 instance.
- D. An IAM role attached to the EC2 instance profile.

<details><summary>Show answer</summary>

**Answer: D.** An instance profile delivers temporary role credentials automatically; no static access key is stored on the instance.
</details>

## 3

A workload must run in a subnet that cannot accept inbound internet traffic. It must still download operating-system updates through a centrally managed egress path. Which design best meets the requirement?

- A. Put instances in private subnets and route outbound traffic through a NAT gateway.
- B. Put instances in public subnets and restrict inbound traffic with security groups.
- C. Put instances in isolated subnets and attach an internet gateway to each subnet.
- D. Put instances in a VPC peering connection to the AWS public network.

<details><summary>Show answer</summary>

**Answer: A.** Private-subnet instances can use a NAT gateway for outbound internet access while remaining unreachable for unsolicited inbound internet traffic.
</details>

## 4

An auditor needs a record of AWS API calls, including the identity that made each call and the source IP address. Which service should be enabled?

- A. Amazon CloudWatch Metrics.
- B. AWS Config.
- C. AWS CloudTrail.
- D. Amazon Inspector.

<details><summary>Show answer</summary>

**Answer: C.** CloudTrail records API and account activity. Config records resource configuration changes and compliance state.
</details>

## 5

A company must retain records for seven years. They are rarely accessed, but a retrieval can take several hours. Which S3 storage class is the most cost-effective fit?

- A. S3 Standard for frequent, low-latency reads.
- B. S3 Glacier Deep Archive for long-term retention.
- C. S3 One Zone-IA for multi-AZ resilient archives.
- D. S3 Intelligent-Tiering for unpredictable active data.

<details><summary>Show answer</summary>

**Answer: B.** Glacier Deep Archive is designed for the lowest-cost, long-term archival storage where retrieval is infrequent and can be delayed.
</details>

## 6

An order service must submit work for later processing. The processor can be temporarily unavailable, and messages must not be lost. Which AWS service is the best fit?

- A. Amazon EventBridge Scheduler.
- B. Amazon SNS standard topic.
- C. AWS Step Functions Express Workflow.
- D. Amazon SQS queue.

<details><summary>Show answer</summary>

**Answer: D.** SQS durably buffers messages between producers and consumers. SNS primarily distributes messages to subscribers.
</details>

## 7

Users worldwide download static content from an S3 origin. The company wants cached copies at edge locations and HTTPS delivery through a custom domain. Which service should it use?

- A. AWS Global Accelerator.
- B. Amazon Route 53 Resolver.
- C. Amazon CloudFront.
- D. Elastic Load Balancing.

<details><summary>Show answer</summary>

**Answer: C.** CloudFront is the CDN service that caches content at edge locations and integrates with custom domains and TLS certificates.
</details>

## 8

A growing company wants centrally managed AWS accounts, consolidated billing, and preventive guardrails that limit what member accounts can do. What should it use?

- A. AWS Organizations with service control policies (SCPs).
- B. IAM Identity Center with permission sets only.
- C. AWS Control Tower lifecycle events only.
- D. AWS Resource Access Manager with resource shares.

<details><summary>Show answer</summary>

**Answer: A.** Organizations provides multi-account management and consolidated billing; SCPs define maximum available permissions in member accounts.
</details>

## 9

A production application needs a managed relational database with automatic failover to a standby in another Availability Zone. Read scaling is not the main requirement. Which option is appropriate?

- A. Amazon DynamoDB global tables.
- B. Amazon RDS read replicas.
- C. Amazon Redshift Serverless.
- D. Amazon RDS Multi-AZ deployment.

<details><summary>Show answer</summary>

**Answer: D.** RDS Multi-AZ provides high availability with a standby and automatic failover. A read replica is primarily for read scaling.
</details>

## 10

A developer needs to run code in response to an S3 object upload. The runtime should scale automatically and require no server administration. Which service should be chosen?

- A. Amazon EC2 Auto Scaling.
- B. AWS Lambda.
- C. Amazon ECS on EC2.
- D. AWS Elastic Beanstalk.

<details><summary>Show answer</summary>

**Answer: B.** Lambda runs event-driven code without provisioning or managing servers.
</details>

## 11

The finance team wants an automated notification when forecasted monthly AWS cost is likely to exceed a defined amount. Which service provides this capability?

- A. AWS Pricing Calculator.
- B. AWS Cost and Usage Report.
- C. AWS Budgets.
- D. AWS Trusted Advisor.

<details><summary>Show answer</summary>

**Answer: C.** AWS Budgets can alert based on actual or forecasted costs and usage.
</details>

## 12

A company must control the key policies, rotation configuration, and permissions for keys used to encrypt data. Which service should it use?

- A. AWS Key Management Service (AWS KMS).
- B. AWS Secrets Manager.
- C. AWS Certificate Manager.
- D. Amazon Macie.

<details><summary>Show answer</summary>

**Answer: A.** KMS manages encryption keys and their policies. Secrets Manager stores and rotates secrets such as database credentials.
</details>

## 13

Which AWS service analyzes a customer's historical resource utilization and recommends appropriately sized EC2 instance types?

- A. AWS Compute Optimizer.
- B. Amazon CloudWatch Logs Insights.
- C. AWS Cost Explorer.
- D. AWS Well-Architected Tool.

<details><summary>Show answer</summary>

**Answer: A.** Compute Optimizer uses utilization data to generate right-sizing recommendations for supported resources.
</details>

## 14

Instances in a private subnet must access Amazon S3 without traversing the public internet or requiring a NAT gateway. What should the company configure?

- A. A VPC peering connection to an S3 VPC.
- B. An internet gateway with no public IP addresses.
- C. A transit gateway attachment to Amazon S3.
- D. An S3 gateway VPC endpoint.

<details><summary>Show answer</summary>

**Answer: D.** An S3 gateway endpoint provides private connectivity from a VPC to S3 and avoids NAT gateway data processing costs.
</details>

## 15

Which service helps discover and alert on sensitive data, such as personally identifiable information, stored in Amazon S3?

- A. Amazon Macie.
- B. Amazon GuardDuty.
- C. AWS Shield Advanced.
- D. AWS Artifact.

<details><summary>Show answer</summary>

**Answer: A.** Macie uses machine learning and pattern matching to discover sensitive data in S3.
</details>

## 16

A security officer needs to determine whether security groups comply with an approved configuration rule and see configuration history. Which service is best suited?

- A. AWS CloudTrail Lake.
- B. AWS Security Hub.
- C. AWS Config.
- D. Amazon Detective.

<details><summary>Show answer</summary>

**Answer: C.** AWS Config records configuration history and evaluates resources against Config rules.
</details>

## 17

Which AWS service provides automatic, always-on protection against common infrastructure-layer DDoS attacks at no additional charge?

- A. AWS WAF.
- B. Amazon GuardDuty.
- C. AWS Shield Standard.
- D. Amazon Inspector.

<details><summary>Show answer</summary>

**Answer: C.** Shield Standard is included automatically. AWS WAF filters web requests; Shield Advanced adds enhanced DDoS features and support.
</details>

## 18

A team wants to deploy containers without managing EC2 instances or their operating systems. Which Amazon ECS launch type should it select?

- A. ECS Anywhere.
- B. AWS Fargate.
- C. Amazon EC2 launch type.
- D. Elastic Beanstalk single-instance environment.

<details><summary>Show answer</summary>

**Answer: B.** Fargate runs containers without the team provisioning or managing servers.
</details>

## 19

A company needs DNS to send users to a secondary endpoint only when the primary endpoint fails health checks. Which Route 53 routing policy is required?

- A. Latency-based routing.
- B. Weighted routing.
- C. Geolocation routing.
- D. Failover routing.

<details><summary>Show answer</summary>

**Answer: D.** Route 53 failover routing uses health checks to route to a secondary resource when the primary is unhealthy.
</details>

## 20

An accountant needs access to cost-management features but must not use root credentials. What is the recommended approach?

- A. Create an IAM user or federated role with least-privilege billing permissions.
- B. Share the root user's MFA device with the accountant.
- C. Create an access key for the root user and rotate it monthly.
- D. Add the accountant to an IAM group with AdministratorAccess.

<details><summary>Show answer</summary>

**Answer: A.** Root credentials should be protected and used only for tasks that require them; assign the accountant limited IAM permissions instead.
</details>

## 21

A company has predictable compute use but wants a discount commitment that can apply across EC2, Fargate, and Lambda. Which pricing option best fits?

- A. Dedicated Hosts.
- B. Compute Savings Plans.
- C. Spot Instances.
- D. Standard Reserved Instances only.

<details><summary>Show answer</summary>

**Answer: B.** Compute Savings Plans offer flexible discounted usage across EC2, Fargate, and Lambda in exchange for an hourly commitment.
</details>

## 22

A company wants to inventory its on-premises servers and estimate migration costs. It prefers a discovery method that does not install agents on every server. Which service supports this?

- A. AWS Application Migration Service.
- B. AWS DataSync.
- C. AWS Migration Hub Refactor Spaces.
- D. AWS Application Discovery Service agentless collector.

<details><summary>Show answer</summary>

**Answer: D.** Application Discovery Service supports agentless discovery through a collector, in addition to agent-based options.
</details>

## 23

Which service aggregates security findings from AWS services and supported partners, then evaluates them against security standards?

- A. AWS Security Hub.
- B. Amazon Inspector.
- C. Amazon Detective.
- D. AWS Audit Manager.

<details><summary>Show answer</summary>

**Answer: A.** Security Hub centralizes findings and performs checks against standards. Inspector focuses on vulnerability management.
</details>

## 24

A company needs a dedicated network connection from its data center to AWS with more consistent throughput than internet-based VPN. Which service should it choose?

- A. AWS Site-to-Site VPN.
- B. AWS Transit Gateway.
- C. AWS Direct Connect.
- D. AWS PrivateLink.

<details><summary>Show answer</summary>

**Answer: C.** Direct Connect provides a dedicated network connection between a location and AWS. A Site-to-Site VPN uses the internet.
</details>

## 25

A company uses an external identity provider and wants employees to sign in once to access multiple AWS accounts. Which service simplifies this setup?

- A. Amazon Cognito user pools.
- B. AWS Directory Service Simple AD.
- C. IAM access keys.
- D. AWS IAM Identity Center.

<details><summary>Show answer</summary>

**Answer: D.** IAM Identity Center provides workforce SSO to AWS accounts and applications, including integration with external identity providers.
</details>

## 26

Which option is a **preventive** control that can stop an AWS account from creating resources outside approved Regions?

- A. An AWS Config rule that reports noncompliant resources.
- B. A service control policy that denies unapproved Regions.
- C. A CloudTrail trail delivered to an S3 bucket.
- D. A CloudWatch alarm that sends an SNS notification.

<details><summary>Show answer</summary>

**Answer: B.** An SCP can prevent actions before resources are created. Config, CloudTrail, and alarms are detective mechanisms.
</details>

## 27

An HTTP application runs on several EC2 instances in multiple Availability Zones. It needs layer 7 routing based on hostnames and URL paths. Which service should distribute the traffic?

- A. Network Load Balancer.
- B. Gateway Load Balancer.
- C. Application Load Balancer.
- D. Amazon Route 53 private hosted zone.

<details><summary>Show answer</summary>

**Answer: C.** An Application Load Balancer operates at layer 7 and supports host- and path-based routing.
</details>

## 28

Which AWS service provides a structured review of workloads against AWS Well-Architected Framework pillars and records improvement plans?

- A. AWS Well-Architected Tool.
- B. AWS Trusted Advisor.
- C. AWS Health Dashboard.
- D. AWS Service Catalog.

<details><summary>Show answer</summary>

**Answer: A.** The Well-Architected Tool guides workload reviews across the framework pillars. Trusted Advisor provides checks and recommendations.
</details>

## 29

A public application must block requests that match SQL injection patterns and enforce a rate limit per source IP. What should be used?

- A. AWS Shield Standard.
- B. AWS WAF.
- C. Amazon GuardDuty.
- D. AWS Network Firewall.

<details><summary>Show answer</summary>

**Answer: B.** AWS WAF uses web ACL rules to filter HTTP(S) requests, including managed SQL injection protections and rate-based rules.
</details>

## 30

A business-critical production system is impaired. The company needs the fastest AWS Support response target available through a standard support plan. Which plan should it select?

- A. Basic Support.
- B. Developer Support.
- C. Business Support.
- D. Enterprise Support.

<details><summary>Show answer</summary>

**Answer: D.** Enterprise Support provides the fastest response target for business-critical system-down cases among AWS Support plans.
</details>

---
