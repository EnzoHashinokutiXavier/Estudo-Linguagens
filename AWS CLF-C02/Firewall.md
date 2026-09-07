# AWS WAF and Related Security Services (CLF-C02)

## Learning goals

After this lesson, you should be able to explain what AWS WAF does, where it is used, and how it differs from AWS Shield, security groups, network ACLs, and AWS Network Firewall.

## What is AWS WAF?

**AWS WAF (Web Application Firewall)** protects web applications from common attacks at the application layer (Layer 7). It examines HTTP and HTTPS requests and allows, blocks, counts, or challenges requests based on rules.

AWS WAF is commonly associated with:

- Amazon CloudFront
- Application Load Balancer (ALB)
- Amazon API Gateway
- AWS AppSync
- Amazon Cognito user pools
- AWS Verified Access

For the CLF-C02 exam, remember: AWS WAF protects **web applications and APIs** by filtering web requests.

## How AWS WAF works

You create a **web ACL (Access Control List)** and associate it with a supported AWS resource. The web ACL contains rules that inspect incoming requests.

A rule can evaluate information such as:

- Source IP address
- HTTP headers
- URI path
- Query string
- Request body
- Geographic origin
- Rate of requests from an IP address

Rules can take actions such as **Allow**, **Block**, **Count**, **CAPTCHA**, or **Challenge**. A default action applies if no rule matches.

### Typical use cases

- Block known malicious IP addresses.
- Restrict a website to specific countries with geo-match rules.
- Limit excessive requests to reduce bot activity or brute-force attempts.
- Block common web exploits such as SQL injection and cross-site scripting (XSS).
- Protect a public API behind Amazon API Gateway.

## AWS Managed Rules

AWS provides managed rule groups that AWS maintains. They simplify protection against frequent threats without requiring you to write every detection rule.

Examples include rules designed to address:

- Known bad inputs
- SQL injection
- Linux or operating-system-specific exploits
- Anonymous IP lists
- Amazon IP reputation lists

Managed rules are a good starting point, but organizations should test them in **Count** mode before blocking production traffic when possible.

## AWS WAF Bot Control and Fraud Control

AWS WAF Bot Control helps identify and manage bot traffic. It can distinguish common bots from unwanted or suspicious automated traffic.

AWS WAF Fraud Control is intended for specific fraud risks, such as account takeover and fraudulent account creation. These capabilities are useful for customer-facing sign-in and registration flows.

## AWS Shield: DDoS protection

**AWS Shield** protects against Distributed Denial of Service (DDoS) attacks.

- **AWS Shield Standard** is automatically included at no additional cost for all AWS customers. It provides protection against common infrastructure and transport-layer DDoS attacks.
- **AWS Shield Advanced** offers enhanced protection, additional visibility, access to the AWS Shield Response Team (SRT), and DDoS cost-protection features for eligible resources.

AWS WAF and AWS Shield often work together:

- Use **AWS Shield** for DDoS protection.
- Use **AWS WAF** to control and filter HTTP/HTTPS web requests.

## AWS WAF versus network controls

| Service or feature | Main purpose | Layer / scope |
|---|---|---|
| AWS WAF | Filters HTTP/HTTPS requests to web applications | Layer 7, application layer |
| AWS Shield | Protects against DDoS attacks | Network and application DDoS protection |
| Security groups | Stateful virtual firewall for AWS resources | Instance/resource level |
| Network ACLs | Stateless allow/deny rules for a subnet | Subnet level |
| AWS Network Firewall | Managed network firewall and intrusion prevention | VPC network traffic |

### Security groups

Security groups act as stateful virtual firewalls for resources such as EC2 instances. If an inbound request is allowed, the response is automatically allowed. They use **allow rules only**; you cannot create an explicit deny rule.

### Network ACLs (NACLs)

Network ACLs operate at the subnet level and are stateless. You must define rules for both inbound and outbound traffic. Unlike security groups, NACLs support both **allow** and **deny** rules.

### AWS Network Firewall

AWS Network Firewall is a managed firewall service for protecting Amazon VPC traffic. It is appropriate when you need centralized network filtering, domain filtering, intrusion prevention, or inspection of traffic entering and leaving VPCs.

Do not confuse it with AWS WAF: Network Firewall protects network traffic in a VPC, while WAF filters web requests to supported application endpoints.

## Other related AWS security services

### Amazon GuardDuty

Amazon GuardDuty is a threat detection service. It analyzes signals such as AWS CloudTrail events, VPC Flow Logs, and DNS logs to identify suspicious activity. It detects threats; it is not a web application firewall.

### AWS CloudTrail

AWS CloudTrail records AWS account activity and API calls. It helps with auditing, investigation, and compliance.

### AWS Config

AWS Config records resource configurations and configuration changes. It helps assess compliance with desired configuration rules.

### Amazon Inspector

Amazon Inspector automatically assesses workloads for vulnerabilities and unintended network exposure. It is commonly used with Amazon EC2, container images in Amazon ECR, and AWS Lambda functions.

### AWS Firewall Manager

AWS Firewall Manager helps centrally manage security policies across multiple AWS accounts in AWS Organizations. It can manage policies for services such as AWS WAF, AWS Shield Advanced, security groups, and AWS Network Firewall.

## Exam tips

- If the question mentions **SQL injection, XSS, HTTP requests, web applications, or APIs**, choose **AWS WAF**.
- If it mentions a **DDoS attack**, choose **AWS Shield**; Shield Advanced is the premium option for enhanced DDoS response and protections.
- If it asks for a firewall around an **EC2 instance**, think **security groups**.
- If it asks for subnet-level, stateless allow/deny traffic filtering, think **network ACLs**.
- If it asks for centralized network traffic inspection in a VPC, think **AWS Network Firewall**.
- If it asks to manage WAF policies across many accounts, think **AWS Firewall Manager**.

## Quick review questions

1. Which service blocks malicious HTTP requests to an Application Load Balancer?
   - **AWS WAF**.

2. Which service is designed for DDoS protection?
   - **AWS Shield**.

3. What is the main difference between security groups and NACLs?
   - Security groups are **stateful** and apply to resources; NACLs are **stateless** and apply to subnets.

4. Which service can centrally administer WAF policies for accounts in AWS Organizations?
   - **AWS Firewall Manager**.

5. Can AWS WAF inspect regular non-web VPC traffic?
   - No. AWS WAF is for web requests; use AWS Network Firewall for VPC network traffic inspection.

## Key takeaway

AWS WAF is the AWS service for filtering and protecting HTTP/HTTPS traffic to web applications and APIs. Pair it with AWS Shield for DDoS protection, security groups and NACLs for basic VPC traffic control, AWS Network Firewall for deeper VPC network filtering, and AWS Firewall Manager for multi-account policy management.
