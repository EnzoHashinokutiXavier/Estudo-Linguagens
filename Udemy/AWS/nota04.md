# AWS IAM
## Identity and Access Management

### What is IAM? (Critical for Exam)

- **Manages access** to AWS services and resources
- **Free service** (never charged)
- Global service (not region-specific)
- Enables secure access without sharing root account credentials
- Used to implement **Principle of Least Privilege** (most important for security)

### IAM Core Concepts

**Authentication vs. Authorization:**
- **Authentication**: Who are you? (username/password, MFA)
- **Authorization**: What can you do? (permissions, policies)

### IAM Components (Understand These)

**1. Users**
- Individual accounts for people or applications
- Each has unique credentials
- Example: Alice (developer), Bob (DevOps)

**2. Groups**
- Collection of users
- Simplifies permission management
- All users in group get same permissions
- Example: Developers group, Finance group

**3. Roles**
- For AWS services and federated users
- Temporary credentials (automatic rotation)
- Use when: EC2 needs S3 access, Lambda needs DynamoDB access
- NOT for regular users (use Users for that)

**4. Policies**
- JSON documents defining permissions
- Types:
  - **Managed Policies**: Pre-built by AWS (AmazonEC2FullAccess)
  - **Customer Policies**: Custom-created
  - **Inline Policies**: Single user/group/role (not recommended)

### Root Account vs. IAM Users (Important for Exam)

| Feature | Root | IAM User |
|---------|------|----------|
| **Default** | Full access to everything | Only assigned permissions |
| **Access Keys** | Can create (not recommended) | Can create |
| **MFA** | Should enable | Should enable |
| **Best Practice** | Lock away, don't use daily | Use for daily tasks |
| **Recovery** | Only account recovery tool | IAM users can't recover account |

**Critical Rule**: Never use root account for daily work!

### Policies Explained

**Example IAM Policy (JSON):**
```json
{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Effect": "Allow",
      "Action": "s3:GetObject",
      "Resource": "arn:aws:s3:::my-bucket/*"
    }
  ]
}
```

**Components:**
- **Effect**: Allow or Deny
- **Action**: What API calls are allowed (e.g., s3:GetObject, ec2:RunInstances)
- **Resource**: What AWS resources (identified by ARN)

**ARN (Amazon Resource Name) Format:**
`arn:partition:service:region:account-id:resource`

Example: `arn:aws:s3:::my-bucket/folder/*`

### Principal of Least Privilege (Key for Exam)

- **Grant only minimum permissions needed** for the job
- Don't give:
  - Admin access to non-admins
  - All services access when only S3 needed
  - Production access to developers
- Review permissions regularly
- Remove unused permissions

### MFA (Multi-Factor Authentication)

**Why Use**: Significantly increases security

**Methods:**
- Hardware tokens (hardware device)
- Virtual MFA devices (Google Authenticator, Authy)
- U2F (USB keys)
- SMS (not recommended, less secure)

**Best Practice**: Require MFA for all users, especially root and admins

### AWS Organizations (For Multi-Account Management)

- **Centrally manage** multiple AWS accounts
- **Consolidate billing**: Single bill for all accounts
- **Service Control Policies (SCPs)**: Restrictions across accounts
- Helpful for: Large companies, different departments, compliance requirements

### Access Methods

**1. AWS Management Console**
- Web interface
- Requires username + password + MFA

**2. AWS CLI**
- Command line
- Requires access keys (Access Key ID + Secret Access Key)
- Use `aws configure` to set up

**3. AWS SDKs**
- Programming libraries (Python, Java, JavaScript, etc.)
- For applications to access AWS services
- Requires programmatic credentials

**4. CloudShell**
- Browser-based terminal
- Already authenticated
- No credentials needed

### Access Keys (Important for Security)

- Like username/password for programmatic access
- Have Access Key ID + Secret Access Key
- **Never share or hardcode** in code
- Store securely in environment variables or AWS Secrets Manager
- Rotate regularly (delete old, create new)

### Reporting & Compliance

**Credential Report:**
- List of all users
- When password was last changed
- MFA status
- Last activity date

**Access Advisor:**
- Shows which services each user accessed
- Identifies unused permissions

### Identity Center (Successor to SSO)

- **Single Sign-On** for multiple AWS accounts and applications
- Better than traditional IAM for:
  - Multi-account management
  - Integration with corporate directories (Active Directory, Okta)
  - Single login for multiple tools

### Security Best Practices for Exam

1. **Enable MFA** for all accounts
2. **Use IAM Users**, not root account
3. **Use Groups** to manage permissions
4. **Use Roles** for service-to-service access
5. **Apply Principle of Least Privilege**
6. **Rotate Access Keys** regularly
7. **Delete Unused** credentials
8. **Use Strong Passwords** and password policies
9. **Audit Regularly** with reports and CloudTrail

### Summary for CLF-C02

- **IAM** is the security foundation of AWS
- Always use **Users** for people, **Roles** for services
- Use **Groups** for easier management
- **Policies** grant permissions in JSON
- **Root account** = backup only
- **MFA** = essential security
- **Principle of Least Privilege** = golden rule
- This service is **FREE**
