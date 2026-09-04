# Machine Images, Containers, and Docker on AWS

## Lesson goal

This lesson explains the AWS services and concepts most relevant to **Amazon Machine Images (AMIs)**, containers, and Docker for the AWS Certified Cloud Practitioner (CLF-C02) exam. By the end, you should be able to choose the appropriate service for a basic scenario and distinguish virtual machines from containers.

---

## 1. Amazon Machine Images (AMIs)

An **Amazon Machine Image (AMI)** is a template used to launch an Amazon EC2 instance. Think of it as a reusable starting point for a virtual server.

An AMI can contain:

- An operating system, such as Amazon Linux, Ubuntu, or Windows Server
- Application software and configuration
- A launch configuration, including which storage volumes to attach
- Permissions that control which AWS accounts can use the AMI

When you launch an EC2 instance, you select an AMI first, then select an instance type (CPU, memory, networking, and storage capacity).

### Why use AMIs?

AMIs make server deployments consistent and repeatable. For example, a company can install and configure a web application once, create an AMI from that EC2 instance, and then launch many identical web servers from the image.

### AMI sources

- **AWS-provided AMIs**: maintained by AWS, such as Amazon Linux.
- **AWS Marketplace AMIs**: provided by software vendors; some may have additional charges.
- **Community AMIs**: shared by other AWS users. Use caution and verify the publisher.
- **Custom AMIs**: created by your organization from a configured EC2 instance.

### Important exam idea: AMI versus snapshot

An **AMI** is a launch template for an EC2 instance. An **Amazon EBS snapshot** is a point-in-time backup of an EBS volume. An EBS-backed AMI uses one or more snapshots behind the scenes, but the two terms are not interchangeable.

### AMI sharing and regions

AMIs are regional resources. To use a custom AMI in another AWS Region, copy it to that Region. An AMI can also be shared with specific AWS accounts or, in some cases, made public.

---

## 2. Virtual machines versus containers

Both virtual machines and containers package applications so they can run reliably, but they do so differently.

| Topic | EC2 virtual machine | Container |
| --- | --- | --- |
| Main unit | Full virtual server | Application and its dependencies |
| Operating system | Each instance has a guest OS | Containers share the host OS kernel |
| Startup time | Usually slower | Usually faster |
| Resource overhead | Higher | Lower |
| Typical AWS image | AMI | Container image |
| Best for | Full OS control, legacy workloads | Portable microservices and scalable applications |

An EC2 instance is created from an AMI. A container is created from a **container image**. Containers do not replace EC2 in every situation: containers can run on EC2 instances, on AWS Fargate, or on other managed infrastructure.

---

## 3. Docker fundamentals

**Docker** is a popular platform for building, packaging, and running containers.

### Key Docker terms

- **Dockerfile**: a text file containing instructions to build a container image.
- **Container image**: an immutable package with the application, libraries, runtime, and configuration needed to run it.
- **Container**: a running instance of a container image.
- **Container registry**: a repository that stores and distributes container images.
- **Docker engine/runtime**: software that creates and runs containers.

### Simple mental model

An AMI is to an EC2 instance as a container image is to a running container.

Docker images are commonly layered. If multiple images share the same base layers, those layers can be reused, which saves time and storage.

---

## 4. Amazon Elastic Container Registry (Amazon ECR)

**Amazon ECR** is a fully managed container image registry. It stores, manages, and deploys Docker and Open Container Initiative (OCI) images.

Use ECR when your team needs a private, secure place to push and pull container images in AWS.

### ECR benefits

- Integrates with IAM for access control
- Integrates with Amazon ECS, Amazon EKS, and AWS Lambda
- Supports image vulnerability scanning
- Can use encryption and lifecycle policies
- Removes the need to operate a container registry server

### ECR Public

**Amazon ECR Public** lets you publish and retrieve publicly available container images. Private ECR repositories are the usual choice for internal company images.

---

## 5. Amazon Elastic Container Service (Amazon ECS)

**Amazon ECS** is AWS's fully managed container orchestration service. It helps you deploy, run, and scale containerized applications.

You define how containers should run in a **task definition**, which can specify:

- Container image location, often in Amazon ECR
- CPU and memory requirements
- Networking and ports
- Environment variables
- IAM permissions for the task

A running copy of a task definition is an **ECS task**. An **ECS service** keeps a desired number of task copies running and can integrate with an Elastic Load Balancer.

### ECS launch types

- **AWS Fargate**: serverless compute for containers. AWS manages the underlying servers; you choose CPU and memory for tasks.
- **Amazon EC2**: you run and manage the EC2 instances that provide container capacity.

For CLF-C02 questions, choose **Fargate** when the requirement is to run containers without managing servers. Choose ECS on EC2 when the organization needs more control over the underlying EC2 fleet or already manages it.

---

## 6. AWS Fargate

**AWS Fargate** is a serverless compute engine for containers. It works with Amazon ECS and Amazon EKS.

With Fargate, you do not provision, patch, or scale EC2 instances for your container infrastructure. You provide the container image and requested compute resources; AWS runs the container.

Fargate is commonly selected when a team wants to focus on applications instead of infrastructure management.

> Fargate is not a container registry and not an orchestration service by itself. ECR stores images; ECS or EKS orchestrates workloads; Fargate supplies the serverless compute capacity.

---

## 7. Amazon Elastic Kubernetes Service (Amazon EKS)

**Amazon EKS** is a managed Kubernetes service. Kubernetes is open-source software used to deploy, manage, and scale containerized applications.

Use EKS when an organization wants Kubernetes compatibility, already uses Kubernetes, or needs the Kubernetes ecosystem and APIs. AWS manages the Kubernetes control plane, while workloads can run on EC2 instances or AWS Fargate.

### ECS or EKS?

- Choose **ECS** for AWS-native, simpler container orchestration.
- Choose **EKS** when Kubernetes is specifically required.

The key Cloud Practitioner distinction is that ECS is AWS's native container orchestration service, while EKS provides managed Kubernetes.

---

## 8. AWS Lambda and container images

**AWS Lambda** is a serverless compute service that runs code in response to events. Lambda can package functions as container images, which can be stored in Amazon ECR.

This does not mean Lambda is a general-purpose container orchestrator. It is suited to short-lived, event-driven workloads. ECS/EKS are better choices for long-running containerized services.

---

## 9. Related AWS services

### Amazon EC2

EC2 supplies resizable virtual servers. EC2 instances launch from AMIs and can host Docker containers directly or act as capacity for ECS/EKS workloads.

### Elastic Load Balancing (ELB)

An Application Load Balancer can distribute incoming HTTP/HTTPS traffic across ECS tasks or EC2 instances. It improves availability by routing traffic to healthy targets.

### Amazon CloudWatch

CloudWatch collects metrics, logs, and alarms for EC2, ECS, EKS, and containerized applications. Use it to monitor CPU, memory, task health, logs, and application behavior.

### AWS Identity and Access Management (IAM)

IAM controls who can access AMIs, ECR repositories, ECS resources, and EKS resources. Follow the principle of least privilege.

### AWS CloudFormation

CloudFormation uses infrastructure as code to provision AWS resources consistently, such as ECS clusters, ECR repositories, load balancers, and EC2 instances.

---

## 10. Architecture example

Suppose a company has a Dockerized web application:

1. Developers build a Docker image from a Dockerfile.
2. They push the image to a private Amazon ECR repository.
3. An Amazon ECS task definition references that image.
4. Amazon ECS runs multiple tasks on AWS Fargate.
5. An Application Load Balancer sends web traffic to healthy tasks.
6. Amazon CloudWatch captures logs and metrics.

This architecture is managed, scalable, and avoids managing EC2 servers.

---

## 11. CLF-C02 decision guide

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

---

## 12. Practice questions

1. A company wants to launch many identical EC2 web servers with the same operating system and application configuration. What should it create?
   - **Answer: A custom AMI.**

2. A team needs a managed private repository for Docker images that integrates with IAM and ECS. Which service should it use?
   - **Answer: Amazon ECR.**

3. A company wants to run containers but does not want to provision or patch EC2 instances. Which option is appropriate?
   - **Answer: AWS Fargate with Amazon ECS or Amazon EKS.**

4. A company requires Kubernetes APIs and tools for its container platform. Which AWS service is the best fit?
   - **Answer: Amazon EKS.**

5. Which statement is correct?
   - **Answer: An AMI launches EC2 instances, while a container image launches containers.**

---

## Quick recap

- **AMI**: template for launching EC2 instances.
- **EBS snapshot**: backup of an EBS volume.
- **Docker image**: package used to create containers.
- **Amazon ECR**: managed image registry.
- **Amazon ECS**: AWS-native container orchestration.
- **Amazon EKS**: managed Kubernetes.
- **AWS Fargate**: serverless compute for ECS/EKS containers.
- **Amazon EC2**: virtual servers, which can also host containers.

For the CLF-C02 exam, concentrate on the service purpose and the shared-responsibility trade-off: managed/serverless options such as Fargate reduce the infrastructure that the customer must operate.
