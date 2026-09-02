# Access and Authentication — CLF-C02 Study Guide

## Core idea

For the AWS Certified Cloud Practitioner (CLF-C02) exam, distinguish these three concepts:

| Concept | Question it answers | Example |
|---|---|---|
| Authentication | **Who are you?** | Signing in with IAM Identity Center and MFA |
| Authorization | **What are you allowed to do?** | An IAM policy allows `s3:GetObject` |
| Auditing | **What happened and who did it?** | CloudTrail records an API call |

Authentication happens before authorization. AWS Identity and Access Management (IAM) is the primary service for managing identities and permissions.

## AWS IAM

IAM is a global AWS service used to control access to AWS resources. Follow the **principle of least privilege**: grant only the permissions needed, for only as long as they are needed.

| Component | Purpose | CLF-C02 takeaway |
|---|---|---|
| IAM user | Long-term identity for a person or legacy application | Avoid long-term access keys when an alternative exists |
| IAM group | Collection of IAM users with shared permissions | Groups contain users, not other groups |
| IAM role | Assumable identity with permissions and temporary credentials | Preferred for AWS workloads and temporary access |
| IAM policy | JSON document defining permissions | Can explicitly allow or deny actions |
| MFA | Second authentication factor | Essential for root and privileged identities |

## Root user

Every AWS account has a root user with unrestricted account access. It should not be used for day-to-day work.

- Enable MFA on the root user immediately.
- Do not create root access keys.
- Use root only for tasks that specifically require it.
- Use IAM Identity Center or an administrative role for normal administration.

**Exam tip:** Root user means maximum account privileges; it is almost never the best answer for routine work.

## Human access: Console, IAM Identity Center, and federation

People can sign in to the AWS Management Console with root credentials, an IAM user, or federated credentials. AWS recommends **IAM Identity Center** for workforce access, especially across multiple AWS accounts.

IAM Identity Center provides:

- Single sign-on (SSO) for users and groups.
- Access to multiple AWS accounts through permission sets.
- Integration with a corporate identity provider (IdP) or directory.
- Temporary credentials instead of permanent IAM user credentials.

**Federation** lets employees use existing corporate identities to access AWS. Common standards include:

| Standard | Common use |
|---|---|
| SAML 2.0 | Workforce federation with an enterprise IdP |
| OpenID Connect (OIDC) | Application identities and compatible identity providers |

For multi-account employee access, think: **AWS Organizations + IAM Identity Center**.

## Multi-factor authentication (MFA)

MFA combines something the user knows, such as a password, with something the user has, such as an authenticator app code or security key.

- Enable MFA for the root user.
- Require MFA for administrative and privileged access.
- IAM policies can require MFA for sensitive actions.

MFA strengthens authentication; it does **not** grant permissions. IAM policies still determine authorization.

## Programmatic access: CLI, SDKs, and APIs

Applications, scripts, the AWS CLI, SDKs, and direct API calls use programmatic access. AWS requests are normally signed with **AWS Signature Version 4 (SigV4)**.

| Credential type | Typical use | Recommendation |
|---|---|---|
| Username and password | Console access | Use with MFA |
| Access key ID and secret access key | Long-term programmatic credentials for an IAM user | Avoid when roles or federation are available |
| Temporary credentials | Short-lived key, secret, and session token | Preferred for applications and federated access |

An access key is not a Console password. Never store access keys in source code, repositories, container images, or shared files.

## IAM roles and AWS STS

An IAM role is assumed temporarily by a trusted principal, such as an EC2 instance, Lambda function, user, federated identity, AWS service, or another AWS account.

When the role is assumed, **AWS Security Token Service (AWS STS)** issues temporary credentials that expire automatically.

Roles are preferred because they:

- Avoid embedding permanent secrets in code.
- Use automatically expiring credentials.
- Support cross-account access.
- Let AWS workloads access other AWS services securely.

**Example:** If an EC2 application needs to read an S3 bucket, attach an IAM role with minimal S3 read permissions to the EC2 instance. Do not put an IAM user's access keys on the instance.

## IAM policies and permission evaluation

IAM policies define which actions are allowed or denied on which resources, optionally under specific conditions.

```json
{
  "Effect": "Allow",
  "Action": "s3:GetObject",
  "Resource": "arn:aws:s3:::example-bucket/reports/*"
}
```

| Policy type | Where it is defined | Key point |
|---|---|---|
| Identity-based policy | IAM user, group, or role | Defines what an identity can do |
| Resource-based policy | On the resource, such as an S3 bucket | Defines who can access that resource |
| Service control policy (SCP) | AWS Organizations | Sets the maximum available permissions; does not grant permissions |
| Permissions boundary | IAM user or role | Sets the maximum permissions that can be delegated |

Permission evaluation rules:

1. Everything is denied by default (implicit deny).
2. An explicit `Allow` is needed to permit an action.
3. An explicit `Deny` overrides every `Allow`.

## Cross-account access

To access resources in another AWS account, use a role in the target account. A trusted principal in the source account assumes that role and receives temporary STS credentials.

```text
Principal in Account A
        | assumes role
        v
Role in Account B (trust policy)
        | receives temporary credentials from STS
        v
Allowed resources in Account B
```

- The **trust policy** says who can assume the role.
- The **permissions policy** says what the role can do after it is assumed.

## Related AWS services

| Service | Role in access and authentication |
|---|---|
| IAM | Identities and permissions |
| IAM Identity Center | Workforce SSO and multi-account access |
| AWS STS | Temporary credentials for roles and federation |
| AWS Organizations | Multi-account management and SCPs |
| AWS CloudTrail | Records API activity for auditing |
| Amazon Cognito | Customer identity for web and mobile applications |
| AWS Secrets Manager | Stores and helps rotate secrets, such as database passwords and API keys |

### IAM Identity Center vs. Amazon Cognito

| Need | Best associated service |
|---|---|
| Employees sign in to AWS accounts and internal applications | IAM Identity Center |
| Customers sign in to a web or mobile application | Amazon Cognito |

## Best practices and exam decision map

- Protect the root user with MFA; do not use it routinely.
- Use least privilege.
- Use IAM Identity Center for centralized workforce access.
- Use IAM roles and temporary credentials for AWS workloads, automation, and cross-account access.
- Never share credentials or embed access keys in code.
- Use CloudTrail to determine who made an AWS API call.

| Scenario | Likely answer |
|---|---|
| Protect the root account | Enable MFA on the root user |
| Employees need access to many AWS accounts | IAM Identity Center with AWS Organizations |
| EC2 or Lambda needs S3 or DynamoDB access | Attach an IAM role to the workload |
| An application needs temporary AWS credentials | IAM role with AWS STS |
| Company users should sign in with existing corporate identities | Federation or IAM Identity Center with an IdP |
| Customers sign in to a mobile or web app | Amazon Cognito |
| Identify who called an AWS API | AWS CloudTrail |
| Limit maximum permissions in organization accounts | SCP in AWS Organizations |
| Block an action even when another policy allows it | Explicit `Deny` |

## Review questions

1. A Lambda function needs to read a DynamoDB table. What is the recommended access method?
2. Which service centralizes employee SSO access to multiple AWS accounts?
3. What is the difference between MFA and an IAM policy?
4. Which takes precedence: an explicit Allow or an explicit Deny?
5. Which service provides temporary credentials after a role is assumed?
6. What does an SCP do?
7. Which service is designed for end users of a mobile application?

### Answers

1. Attach an IAM role with the minimum required DynamoDB permissions to the Lambda function.
2. AWS IAM Identity Center.
3. MFA strengthens authentication; an IAM policy allows or denies AWS actions.
4. Explicit Deny.
5. AWS Security Token Service (AWS STS).
6. It sets a maximum permissions boundary for organization accounts; it does not grant permissions.
7. Amazon Cognito.

## Memory summary

**People:** IAM Identity Center + MFA.  
**AWS workloads:** IAM roles + temporary credentials.  
**Root:** MFA and exceptional use only.  
**Permissions:** IAM policies + least privilege.  
**Auditing:** CloudTrail.  
**Multiple accounts:** Organizations, SCPs, and cross-account roles.
