# AWS Compliance and Governance — CLF-C02 Lesson

## Learning objective

For the AWS Certified Cloud Practitioner (CLF-C02) exam, you should be able to match a business requirement—such as *auditing activity*, *enforcing standards*, or *demonstrating compliance*—to the appropriate AWS service. Focus on the service’s primary purpose rather than implementation details.

## The shared-responsibility foundation

AWS is responsible for **security of the cloud**: physical data centers, hardware, networking, and the underlying managed-service infrastructure. Customers are responsible for **security in the cloud**: data, identities, configurations, permissions, and operating systems or applications they manage.

Compliance is also shared. AWS supplies reports, certifications, and controlled infrastructure; customers decide whether their workloads and configurations meet their own legal, industry, and internal requirements.

> CLF-C02 tip: A question about AWS proving that its infrastructure meets a standard usually points to **AWS Artifact**. A question about checking the customer’s AWS configuration usually points to **AWS Config**.

## Core services at a glance

| Service | Primary purpose | Typical exam clue |
|---|---|---|
| AWS CloudTrail | Records AWS API activity and account events | “Who changed/deleted/created this resource?” |
| AWS Config | Records resource configurations and evaluates them against rules | “Is this resource compliant with a policy?” |
| AWS Artifact | Provides AWS compliance reports and agreements | “Download SOC/ISO reports” or “sign a BAA” |
| AWS Audit Manager | Collects AWS evidence for audits | “Automate audit evidence collection” |
| AWS Organizations | Centrally manages multiple AWS accounts and policies | “Apply a guardrail to every account” |
| AWS Control Tower | Sets up and governs a multi-account AWS environment | “Landing zone” and “guardrails” |
| IAM Access Analyzer | Identifies unintended external access to resources | “Find public or cross-account access” |
| AWS Security Hub | Central view of security findings and standards checks | “Aggregate findings” or “security posture” |

## AWS CloudTrail: activity and accountability

AWS CloudTrail records actions taken through the AWS Management Console, AWS CLI, SDKs, and AWS service APIs. Each event can show the identity, time, source IP address, requested action, and affected resource.

Use CloudTrail when you need an audit trail, incident investigation, or accountability for changes. CloudTrail answers **what happened and who did it**.

CloudTrail event history provides recent management events in the console. A **trail** can deliver events to an Amazon S3 bucket for longer retention and analysis. CloudTrail can also send events to Amazon CloudWatch Logs.

> Exam distinction: CloudTrail records actions. It does not decide whether a resource’s configuration is compliant—that is AWS Config.

## AWS Config: configuration history and compliance rules

AWS Config records the configuration of AWS resources and tracks how that configuration changes over time. It can evaluate resources against **AWS Config rules**, which may be AWS-managed or custom rules.

Examples:

- Identify S3 buckets that allow public read access.
- Check whether EBS volumes are encrypted.
- Verify that IAM password policies meet a standard.

Config produces a compliance status such as compliant or noncompliant and can support remediation workflows. It answers **what is configured now, what changed, and does it meet a rule?**

> CLF-C02 tip: If a question says “continuously assess,” “configuration changes,” or “compliance rules,” choose AWS Config.

## AWS Artifact: AWS compliance documentation

AWS Artifact is a self-service portal for AWS security and compliance documents. Customers can download reports such as SOC reports and ISO certifications, depending on availability, and can review or accept certain agreements, including a Business Associate Addendum (BAA) when applicable.

Artifact does **not** scan your account or configure resources. It gives you evidence about AWS’s compliance programs and infrastructure controls.

## AWS Audit Manager: evidence collection for audits

AWS Audit Manager helps collect evidence from AWS services and organize it for audits. It uses frameworks and controls to make assessment preparation less manual.

Choose Audit Manager when the goal is to simplify a customer audit by gathering evidence. Choose Artifact when the requirement is specifically to obtain AWS’s own reports or agreements.

## Multi-account governance

### AWS Organizations

AWS Organizations lets you centrally manage multiple AWS accounts. Accounts can be organized into organizational units (OUs), consolidated billing can be used, and **service control policies (SCPs)** can set permission boundaries.

An SCP does not grant permissions. Instead, it defines the maximum available permissions for accounts in an organization or OU. IAM policies must still allow an action before a principal can perform it.

### AWS Control Tower

AWS Control Tower helps establish a governed multi-account environment, commonly called a **landing zone**. It builds on services such as AWS Organizations and applies preconfigured governance controls, often called guardrails.

Use Control Tower for a fast, standardized multi-account setup. Use Organizations when the question emphasizes the underlying account hierarchy, centralized management, consolidated billing, or SCPs.

> Exam distinction: SCPs restrict the maximum permissions across accounts; IAM policies grant permissions to users, groups, or roles within the permissions allowed by the SCP.

## Visibility and security posture

### IAM Access Analyzer

IAM Access Analyzer examines resource policies to identify resources shared with an external entity, such as another AWS account, an organization, or the public. It is useful for discovering unintended access to supported resources.

### AWS Security Hub

AWS Security Hub centralizes security findings from AWS services and supported partners. It can run security standards checks and provides a consolidated view of security posture across accounts and Regions.

> CLF-C02 tip: “Find externally accessible resources” suggests IAM Access Analyzer. “Centralize findings from multiple security services” suggests Security Hub.

## Related services you may see

- **Amazon GuardDuty** detects potential threats using logs and signals, such as unusual account behavior. It is a threat-detection service, not a compliance-report portal.
- **Amazon Inspector** assesses workloads for software vulnerabilities and unintended network exposure.
- **Amazon Macie** discovers and helps protect sensitive data in Amazon S3, including personally identifiable information (PII).
- **AWS Trusted Advisor** provides recommendations aligned with cost optimization, performance, security, fault tolerance, service limits, and operational excellence.

## Quick decision guide

| Requirement | Best answer |
|---|---|
| Investigate an API call or resource deletion | AWS CloudTrail |
| Detect an unencrypted or publicly exposed resource configuration | AWS Config |
| Obtain AWS SOC reports or an AWS agreement | AWS Artifact |
| Gather and organize audit evidence | AWS Audit Manager |
| Manage many AWS accounts and enforce account-level permission boundaries | AWS Organizations with SCPs |
| Create a governed multi-account landing zone | AWS Control Tower |
| Identify resources shared outside the account or organization | IAM Access Analyzer |
| Consolidate security findings and standards checks | AWS Security Hub |

## CLF-C02 memory cues

- **Trail = actions**: CloudTrail logs API activity.
- **Config = settings**: AWS Config records and evaluates resource configuration.
- **Artifact = documents**: AWS Artifact delivers AWS compliance reports and agreements.
- **Audit Manager = evidence**: it prepares audit evidence.
- **Organizations = accounts**: it governs account structure and SCP boundaries.
- **Control Tower = landing zone**: it accelerates standardized multi-account governance.

## Practice questions

1. A security team needs to determine which identity terminated an EC2 instance yesterday. Which service should it use?
   - **Answer: AWS CloudTrail.**

2. A company needs an automated check that reports S3 buckets that are publicly readable. Which service is best suited?
   - **Answer: AWS Config.**

3. An auditor asks for AWS’s SOC reports. Which service provides them?
   - **Answer: AWS Artifact.**

4. A company wants to prevent every account in an OU from launching resources in an unapproved Region. What should it use?
   - **Answer: An SCP in AWS Organizations.**

5. A security team wants one dashboard for findings and security-standard checks from several AWS security services. Which service should it choose?
   - **Answer: AWS Security Hub.**

## Final exam strategy

Read the verb in the question. **Record** activity means CloudTrail; **evaluate** configuration means Config; **download** AWS reports means Artifact; **collect** audit evidence means Audit Manager; and **govern** many accounts means Organizations or Control Tower. When two services seem close, choose the one whose primary purpose exactly matches that verb.
