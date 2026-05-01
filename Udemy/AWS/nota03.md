# Amazon EC2
## Elastic Compute Cloud

### What is EC2?

- **Resizable virtual servers** in the cloud
- IaaS (Infrastructure as a Service)
- Pay only for capacity you use
- Provides complete control (root access)
- Can be provisioned in seconds
- Automatically scales up and down

### When to Use EC2

**Common Use Cases:**
- Web servers and APIs
- Application servers
- Batch processing
- High-performance computing
- Database servers
- Machine learning training

### EC2 Instance Families (Important for Exam)

Don't memorize, understand the pattern:

| Family | Letter | Best For |
|--------|--------|----------|
| **General Purpose** | T, M | Web servers, small databases, mixed workloads |
| **Compute Optimized** | C | High CPU needs, batch processing, media encoding |
| **Memory Optimized** | R, X | Large databases, in-memory caches, big data |
| **Storage Optimized** | I, D, H | NoSQL databases, data warehousing, file systems |
| **GPU/Accelerated** | P, G, F | Machine learning, graphics, high-performance computing |

**Naming Example: t3.micro**
- **t** = Instance family (general purpose/burstable)
- **3** = Generation (higher = newer)
- **micro** = Size (nano < micro < small < medium < large...)

**Free Tier**: 750 hours/month of t2.micro for 12 months

### EC2 Pricing Models (Critical for Exam)

| Model | Cost Level | Best For | Risk |
|-------|-----------|----------|------|
| **On-Demand** | Highest | Variable load, short-term | High cost |
| **Savings Plans** | 1/3 cost | 1-3 year commitment | Commitment risk |
| **Reserved** | 1/3 cost | Steady state workloads | Commitment risk |
| **Spot** | 1/10 cost | Flexible, interruptible jobs | Can terminate any time |
| **Dedicated** | Highest | Compliance, licensing | Not needed for exams |

**Exam Focus**: Know which model for each scenario
- Production database → Reserved or On-Demand
- Unpredictable testing → On-Demand
- Machine learning training → Spot
- Long-term commitment → Savings Plans

### EC2 Key Features

**Security Groups** (Virtual Firewall):
- Control inbound/outbound traffic
- Stateful (responses automatically allowed)
- Applied at instance level
- Support HTTP, HTTPS, SSH, RDP
- Default: All inbound blocked, all outbound allowed

**Key Pairs**:
- SSH authentication (not username/password)
- Download and save securely
- .pem format for OpenSSH
- .ppk format for PuTTY

**IAM Roles**:
- Grant EC2 permissions to access other AWS services
- Safer than storing access keys on instance
- Can be assumed without stored credentials

**EBS (Elastic Block Store)**:
- Virtual hard drives for EC2 instances
- Persists after instance stops
- Can be detached and reattached
- Types: gp3 (general), io2 (high I/O), st1 (throughput)

**Elastic IPs**:
- Static public IPs (charged if not in use)
- Persist across stop/start
- Useful for applications requiring fixed IPs

### Auto Scaling & Load Balancing (Important for Exam)

**Auto Scaling**:
- Automatically adds/removes EC2 instances
- Based on metrics (CPU, memory, custom)
- Minimum, desired, maximum capacity
- Reduces cost when demand drops
- Improves availability and resilience

**Elastic Load Balancer (ELB)**:
- Distributes traffic across instances
- Three types:
  - **ALB (Application Load Balancer)**: HTTP/HTTPS, best for web apps
  - **NLB (Network Load Balancer)**: TCP/UDP, extreme performance
  - **Classic Load Balancer**: Legacy, not recommended
- Works seamlessly with Auto Scaling
- Essential for high availability

**Together They Provide:**
- Automatic scaling based on demand
- Even load distribution
- Fault tolerance (if instance fails, replaced automatically)
- Better cost efficiency

### EC2 Lifecycle (States)

1. **Pending** → Instance is launching
2. **Running** → Instance is active
3. **Stopping** → Instance is stopping
4. **Stopped** → Instance is off (can be restarted)
5. **Terminating** → Instance is being deleted
6. **Terminated** → Instance is deleted (cannot be restarted)

**Important**: 
- Stopped instances still charged for EBS volumes and Elastic IPs
- Terminated instances are deleted permanently
- Snapshots can backup data before termination

### Amazon Machine Images (AMI)

- **Templates** for EC2 instances
- Include: OS, applications, configurations
- Can be AWS-provided or custom
- Useful for quick deployment of configured servers
- Types: 
  - AWS-provided (quick start)
  - Community (free, community-maintained)
  - Marketplace (paid, vendor-provided)
  - Custom (your own)

### EBS Volumes vs. EFS vs. S3

| Service | Use Case | Multi-Instance | Cost |
|---------|----------|-----------------|------|
| **EBS** | Boot disk, single instance | No | Medium |
| **EFS** | Shared files, Linux only | Yes | Higher |
| **S3** | Object storage, archival | Yes | Low |

### Monitoring EC2

- **CloudWatch**: Monitor CPU, memory, disk, network
- **Status Checks**: System (hardware) vs. Instance (OS)
- **Detailed Monitoring**: 1-minute intervals (charged)

### Exam-Focused Summary

1. **EC2 is IaaS**: You manage OS, applications, data
2. **Pricing**: On-Demand for flexibility, Reserved for cost savings, Spot for workloads that can tolerate interruption
3. **Security**: Security Groups are stateful firewalls
4. **Scaling**: Use Auto Scaling + ELB for high availability
5. **Storage**: EBS for single instance, EFS for shared files
6. **Cost Optimization**: Stop instances to save money (except EBS charges)

### Cost Optimization Tips

- Right-size instances (don't use larger than needed)
- Use Savings Plans for predictable workloads
- Use Spot for development/testing
- Stop unused instances
- Use Reserved Instances for production
- Monitor with CloudWatch for waste
