# AWS Deployment Services — CLF-C02 Study Lesson

## Lesson goal

For the AWS Certified Cloud Practitioner (CLF-C02) exam, you should be able to recognize which AWS service or deployment approach fits a basic business scenario. You are **not** expected to configure pipelines or write deployment scripts. Focus on the purpose of each service, the problems it solves, and the key differences between similar services.

---

## 1. What is a deployment?

A deployment is the process of releasing a new or updated application version into an environment where users can access it. A deployment can include application code, configuration, infrastructure, databases, and permissions.

A typical delivery flow is:

```text
Developer commits code
        ↓
Source repository
        ↓
Build and automated tests
        ↓
Deploy to test / staging
        ↓
Deploy to production
        ↓
Monitor and roll back if needed
```

AWS offers managed services for each part of this flow. Together, these practices are commonly called **CI/CD**:

- **Continuous Integration (CI):** frequently merge code changes, build them, and test them.
- **Continuous Delivery / Deployment (CD):** automatically prepare or release tested changes to an environment.

---

## 2. AWS CodeCommit (exam awareness)

**AWS CodeCommit** is a managed, private Git source-control service. It stores application source code and can be a source stage in a CI/CD pipeline.

For CLF-C02, understand the role: **source-code repository**. In current AWS architectures, teams may also use GitHub, GitLab, Bitbucket, or another Git provider as the source.

> Exam tip: If the question asks where code is stored and versioned, think of a Git repository. If it asks how code moves through build and release stages automatically, think of CodePipeline.

---

## 3. AWS CodeBuild

**AWS CodeBuild** is a fully managed continuous-integration service. It compiles source code, runs tests, and produces deployable artifacts (for example, a ZIP file, package, or container image).

### Why use it?

- No build servers to provision or patch.
- It can scale build capacity as needed.
- You pay for build time used.
- It integrates with source repositories, Amazon S3, AWS CodePipeline, and Amazon ECR.

### Important term: build artifact

An **artifact** is the output created by the build process, such as a compiled application package or a container image. It is often stored in Amazon S3 or Amazon Elastic Container Registry (Amazon ECR).

### CodeBuild vs. CodeDeploy

| Service | Main job |
| --- | --- |
| CodeBuild | Builds and tests code |
| CodeDeploy | Releases code to compute environments |

---

## 4. AWS CodeDeploy

**AWS CodeDeploy** automates application deployments to supported compute services. It helps reduce the manual work and risk of copying a new application version to servers.

It can deploy to:

- Amazon EC2 instances
- On-premises servers
- AWS Lambda functions
- Amazon ECS services

### Key benefits

- Automates deployments instead of requiring manual server updates.
- Can deploy gradually, reducing the impact of a faulty release.
- Tracks deployment health.
- Can stop or roll back a deployment when alarms or failures occur.

### Deployment strategies

You do not need deep implementation knowledge for CLF-C02, but you should recognize these concepts:

| Strategy | Meaning | Main benefit |
| --- | --- | --- |
| In-place deployment | Update the existing instances | Simple; needs no duplicate environment |
| Blue/green deployment | Send traffic from the old environment (blue) to a new environment (green) | Fast rollback by returning traffic to the old version |
| Canary deployment | Release to a small portion of traffic first, then expand | Limits exposure to a bad release |
| Linear deployment | Shift traffic in equal increments over time | Controlled, gradual rollout |

> Exam tip: A requirement for a rapid rollback with minimal downtime strongly suggests a **blue/green deployment**.

---

## 5. AWS CodePipeline

**AWS CodePipeline** is a fully managed service that automates and orchestrates the stages of a software release process.

Think of CodePipeline as the **conductor** of CI/CD. It connects source, build, test, approval, and deployment actions into one repeatable workflow.

Example pipeline:

```text
Git repository → CodeBuild → Manual approval → CodeDeploy → Production
```

CodePipeline can integrate with AWS services and third-party tools. It can be triggered when code changes, which helps teams release changes consistently and quickly.

### Recognize it in questions

Choose CodePipeline when the requirement emphasizes:

- Automating multiple release stages
- Coordinating build, test, and deploy actions
- Releasing changes after a source-code update
- Creating a repeatable CI/CD workflow

---

## 6. AWS Elastic Beanstalk

**AWS Elastic Beanstalk** is a Platform as a Service (PaaS) that makes it easier to deploy and manage web applications.

You upload your application code, choose a platform (such as Java, .NET, Node.js, PHP, Python, Ruby, Go, or Docker), and Elastic Beanstalk provisions and manages the underlying AWS resources. Depending on configuration, these can include Amazon EC2, Auto Scaling, Elastic Load Balancing, Amazon RDS, and Amazon CloudWatch.

### What you manage vs. what AWS manages

| You manage | Elastic Beanstalk manages or provisions |
| --- | --- |
| Application code | Environment infrastructure |
| Application configuration | Capacity provisioning |
| Selected platform and settings | Load balancing and health monitoring |
| | Auto Scaling integration |

Elastic Beanstalk is useful when a developer wants to deploy a web application without manually assembling every infrastructure component.

> Exam tip: “Deploy a web application quickly without managing the underlying infrastructure” is a classic Elastic Beanstalk scenario.

---

## 7. AWS CloudFormation

**AWS CloudFormation** is an Infrastructure as Code (IaC) service. It lets you define AWS resources in a template and provision them consistently.

Templates can be written in JSON or YAML. A collection of resources created from a template is called a **stack**.

### Why Infrastructure as Code matters

- Infrastructure is documented as version-controlled text.
- Environments can be created repeatedly and consistently.
- Teams reduce manual configuration mistakes.
- A stack can create related resources in the correct order.

For example, one CloudFormation template could create a VPC, subnets, security groups, EC2 instances, a load balancer, and IAM roles.

### CloudFormation vs. Elastic Beanstalk

| Service | Best description |
| --- | --- |
| CloudFormation | Define and provision AWS infrastructure from templates |
| Elastic Beanstalk | Deploy and operate a web application platform with simplified management |

CloudFormation is more flexible and explicit; Elastic Beanstalk is more opinionated and application-focused.

---

## 8. AWS Systems Manager

**AWS Systems Manager** helps you operate AWS resources at scale. For deployment-related scenarios, it can automate operational tasks and run commands across fleets of managed nodes without requiring direct SSH or RDP access.

Important capabilities to recognize:

- **Run Command:** remotely run administrative commands on managed nodes.
- **Patch Manager:** automate operating-system patching.
- **Parameter Store:** securely store configuration data and secrets (use AWS Secrets Manager when the requirement emphasizes secret rotation).
- **Automation:** run repeatable operational workflows.

> Exam tip: If the goal is patching or running commands across many EC2 instances, Systems Manager is a strong answer. It is not primarily a CI/CD pipeline service.

---

## 9. AWS AppConfig and configuration deployment

**AWS AppConfig**, a capability of AWS Systems Manager, helps teams deploy and validate application configuration changes separately from application code. This can be useful for feature flags, limits, and configuration values.

Configuration changes can be rolled out gradually and monitored, reducing the risk of changing production behavior all at once.

Use this concept when the question is about changing application behavior without performing a full code release.

---

## 10. Containers: Amazon ECR, Amazon ECS, and Amazon EKS

Containerized applications have a related deployment toolset:

| Service | Purpose |
| --- | --- |
| Amazon ECR | Managed registry for storing and retrieving container images |
| Amazon ECS | AWS container orchestration service |
| Amazon EKS | Managed Kubernetes service |
| AWS Fargate | Serverless compute engine for containers used with ECS or EKS |

A common flow is:

```text
Source code → CodeBuild creates container image → ECR stores image → ECS/EKS runs it
```

For CLF-C02, distinguish storage from execution:

- **ECR stores container images.**
- **ECS or EKS runs and manages containers.**
- **Fargate runs containers without managing servers.**

---

## 11. Serverless deployments with AWS Lambda and AWS SAM

**AWS Lambda** runs code without provisioning or managing servers. Deploying a Lambda application often means publishing a new function version or updating a function’s code and configuration.

**AWS Serverless Application Model (AWS SAM)** is an open-source framework for defining serverless applications. SAM templates extend CloudFormation syntax and can simplify definitions of Lambda functions, API Gateway APIs, and related resources.

For exam scenarios:

- Choose **Lambda** for event-driven code with no server management.
- Choose **SAM or CloudFormation** when infrastructure needs to be defined as code.
- Choose **CodeDeploy** when a Lambda release requires controlled traffic shifting, such as canary or linear deployment.

---

## 12. AWS Amplify

**AWS Amplify** helps developers build, deploy, and host full-stack web and mobile applications. Amplify can connect to a Git repository and automatically build and deploy frontend changes.

It is particularly relevant when a question describes a web or mobile developer who needs an easy, integrated way to deploy a frontend and connect it to AWS backend services.

---

## 13. Monitoring, health, and rollback

Deployments should be observable. **Amazon CloudWatch** provides metrics, logs, alarms, and dashboards that can show whether a new version is healthy.

A deployment process can use CloudWatch alarms to detect problems, such as high error rates or unhealthy instances. CodeDeploy can respond to deployment failures and, depending on configuration, roll back to a previous known-good version.

Key association:

```text
CloudWatch detects a problem → alarm triggers → deployment is stopped or rolled back
```

---

## 14. Quick decision guide

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

---

## 15. Practice questions

### Question 1

A company wants to compile application code, run unit tests, and generate a deployable package without managing build servers. Which service should it use?

**Answer: AWS CodeBuild.** It is the managed service for building and testing code.

### Question 2

A team needs to automate source, build, approval, and production-release stages. Which service orchestrates this workflow?

**Answer: AWS CodePipeline.** It coordinates the stages of a CI/CD release process.

### Question 3

A company wants to introduce a new version with minimal downtime and be able to return traffic to the old environment immediately if errors occur. Which strategy fits best?

**Answer: Blue/green deployment.** The old environment remains available while traffic is shifted to the new one.

### Question 4

A developer wants to upload a web application and let AWS handle capacity provisioning, load balancing, and health monitoring. Which service is best?

**Answer: AWS Elastic Beanstalk.** It is designed to simplify deployment and management of web applications.

### Question 5

A company must recreate identical AWS environments from a version-controlled YAML file. Which service should it use?

**Answer: AWS CloudFormation.** It provisions infrastructure from IaC templates.

---

## 16. Final memory cues

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
