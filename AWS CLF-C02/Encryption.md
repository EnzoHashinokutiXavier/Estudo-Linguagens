# AWS Encryption Services — CLF-C02 Study Lesson

## Learning objectives

After this lesson, you should be able to explain the AWS shared responsibility model for encryption, distinguish the main encryption-related services, and choose the best service in common Cloud Practitioner exam scenarios.

---

## 1. Encryption basics

Encryption converts readable **plaintext** into unreadable **ciphertext** by using an encryption algorithm and a key. A person or service needs the appropriate key to decrypt the ciphertext.

AWS commonly protects data in two states:

| Data state | Meaning | Example |
| --- | --- | --- |
| **Data at rest** | Stored data | An object in Amazon S3 or a volume in Amazon EBS |
| **Data in transit** | Data moving across a network | A browser communicating with an application over HTTPS |
| **Data in use** | Data being processed in memory | An application processing customer data |

For the CLF-C02 exam, remember: encryption at rest is usually configured on the storage or database service; encryption in transit is usually provided with TLS/SSL and HTTPS.

---

## 2. AWS Shared Responsibility Model and encryption

AWS is responsible for **security of the cloud**, such as physical data centers and the underlying infrastructure. Customers are responsible for **security in the cloud**, including deciding whether to encrypt data, choosing access permissions, and managing keys when they use customer-managed keys.

The exact responsibility changes by service and key type. For example, AWS manages the underlying hardware security, while a customer can create a KMS key policy to control who is allowed to use a key.

---

## 3. AWS Key Management Service (AWS KMS)

**AWS KMS** is the central AWS service for creating and controlling encryption keys. It integrates with many AWS services, including Amazon S3, Amazon EBS, Amazon RDS, Amazon DynamoDB, Amazon Redshift, and AWS Secrets Manager.

### Core concepts

- A **KMS key** is the logical resource that represents an encryption key.
- A **key policy** controls access to the KMS key. It is the primary access-control mechanism for a KMS key.
- **IAM policies** can also grant permissions to use KMS keys, subject to the key policy.
- KMS keys can be used directly for small data or, more commonly, to protect data encryption keys through **envelope encryption**.
- KMS records key use in **AWS CloudTrail**, helping with auditing and compliance.

### KMS key types

| Key type | Who manages it? | Typical use |
| --- | --- | --- |
| **AWS owned key** | AWS | Used internally by AWS services; customers generally do not view or manage it |
| **AWS managed key** | AWS, visible in the customer account | Default key created and managed for an AWS service, such as `aws/s3` |
| **Customer managed key** | Customer creates and controls it | When key policy, rotation, deletion schedule, grants, or fine-grained control are required |

### Important exam points

- Choose **AWS KMS** when the question asks to create, manage, audit, or control encryption keys.
- Customer managed keys offer more control than AWS managed keys, but require more customer administration.
- KMS does not store application passwords or API tokens as its main purpose. Use **AWS Secrets Manager** for secrets.
- A KMS key can be scheduled for deletion. This is a deliberate safety feature, so key deletion is not immediate.

---

## 4. Envelope encryption

For efficiency, AWS services often use envelope encryption:

1. A temporary **data key** encrypts the actual data.
2. A KMS key encrypts the data key.
3. The encrypted data key is stored with the encrypted data.
4. When needed, KMS decrypts the data key, which can then decrypt the data.

This approach avoids sending large amounts of data to KMS while retaining centralized control of the higher-level key.

---

## 5. AWS CloudHSM

**AWS CloudHSM** provides dedicated, single-tenant hardware security modules (HSMs) in the AWS Cloud. An HSM is specialized hardware designed to generate and protect cryptographic keys.

Use CloudHSM when an organization needs exclusive control over HSM hardware, specialized cryptographic requirements, or compliance rules that require customer-controlled hardware-based key management.

| AWS KMS | AWS CloudHSM |
| --- | --- |
| Managed service; simpler to use | Dedicated HSM hardware; more operational responsibility |
| Integrates broadly with AWS services | Customer manages users, keys, and HSM operations |
| Best default answer for most encryption-key questions | Best for strict HSM control or specialized compliance requirements |

**Exam clue:** If the question emphasizes *dedicated hardware*, *single tenant*, or *exclusive control of HSMs*, choose CloudHSM. Otherwise, KMS is usually the better answer.

---

## 6. AWS Secrets Manager

**AWS Secrets Manager** securely stores, retrieves, and can rotate secrets, such as database credentials, API keys, OAuth tokens, and other passwords. Secrets are encrypted at rest, commonly using AWS KMS.

Its key advantage is **automatic secret rotation**, especially for supported database services. Applications can retrieve secrets at runtime instead of placing credentials in source code or configuration files.

### Secrets Manager vs. Systems Manager Parameter Store

| Feature | Secrets Manager | Parameter Store |
| --- | --- | --- |
| Primary purpose | Manage secrets | Store configuration and parameters |
| Automatic rotation | Yes, supported use cases | Not its primary feature |
| Encryption | Uses KMS | SecureString parameters can use KMS |
| Typical example | Rotating an Amazon RDS password | Storing an application environment setting |

**Exam clue:** If a database password must be automatically rotated, select **AWS Secrets Manager**.

---

## 7. AWS Certificate Manager (ACM)

**AWS Certificate Manager (ACM)** provisions, manages, and deploys public and private SSL/TLS certificates for AWS services and internal resources. These certificates help encrypt data **in transit**.

ACM commonly integrates with services such as Elastic Load Balancing, Amazon CloudFront, and Amazon API Gateway. ACM can renew eligible certificates automatically.

**Exam clue:**

- HTTPS, TLS, SSL certificates, a secure website, or certificate renewal → **ACM**.
- Data stored in S3, EBS, or a database → encryption at rest, usually with a service setting and often **KMS**.

---

## 8. Encryption in common AWS services

### Amazon S3

Amazon S3 supports server-side encryption for objects:

- **SSE-S3**: Amazon S3 manages the encryption keys.
- **SSE-KMS**: Uses AWS KMS keys and provides stronger key-use control and auditability.
- **SSE-C**: The customer provides encryption keys with each request; this has more operational overhead.
- **Client-side encryption**: The customer encrypts data before sending it to S3.

By default, Amazon S3 encrypts new objects at rest with server-side encryption using Amazon S3 managed keys (SSE-S3). Choose SSE-KMS when key access control and CloudTrail auditing of key usage matter.

### Amazon EBS

Amazon EBS encryption protects EBS volumes, snapshots, and data moving between an EBS volume and an EC2 instance. EBS encryption uses AWS KMS keys. Encryption can be enabled by default for a Region.

### Amazon RDS and Amazon DynamoDB

Amazon RDS supports encryption at rest using KMS keys, including encrypted database storage, logs, backups, and read replicas. Amazon DynamoDB encryption at rest is integrated with AWS KMS.

### Amazon SQS and Amazon SNS

Amazon SQS and Amazon SNS can use server-side encryption with KMS to protect message contents at rest.

---

## 9. IAM and encryption access

Encryption alone does not decide who can access data. A user may need permissions for both the data resource and the key.

For instance, accessing an S3 object encrypted with SSE-KMS can require permission to read the object from S3 and permission to use the associated KMS key. This is why KMS key policies and IAM policies matter.

Always apply the principle of **least privilege**: grant only the permissions needed to perform a task.

---

## 10. Quick decision guide

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

---

## 11. Practice questions

1. A company needs to automatically rotate credentials used by an application to connect to an Amazon RDS database. Which service should it use?
   - **Answer: AWS Secrets Manager.**

2. A company needs a managed service to create encryption keys, define key policies, and audit key usage. Which service is appropriate?
   - **Answer: AWS KMS.**

3. A company must use dedicated hardware security modules that it controls for regulatory reasons. Which service should it choose?
   - **Answer: AWS CloudHSM.**

4. A company wants to enable HTTPS on an Application Load Balancer and simplify certificate renewal. Which service helps?
   - **Answer: AWS Certificate Manager.**

5. A company needs to control who can decrypt Amazon S3 objects and audit use of the encryption key. Which S3 encryption option is most suitable?
   - **Answer: SSE-KMS, preferably with a customer managed KMS key when customer control is required.**

---

## Final review

For CLF-C02, memorize this association: **KMS manages keys; CloudHSM provides dedicated HSMs; Secrets Manager stores and rotates secrets; ACM manages TLS certificates.** Then identify whether the question concerns data at rest, data in transit, key control, credential rotation, or compliance-driven hardware control.
