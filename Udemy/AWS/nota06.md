# Virtual Private Cloud (VPC)

### What is VPC? (Critical for Exam)

- **Private, isolated network** within AWS
- Simulates a traditional corporate data center
- You control IP addressing, subnets, routing, security
- **Every AWS account has a default VPC** (can use immediately)
- **Regional service**: Each VPC exists in one region

### VPC Components (Must Know)

**1. Subnets**
- **Segments** of VPC with their own IP range
- **Public Subnet**: Has internet access (for web servers)
- **Private Subnet**: No internet access (for databases)
- Must be in single Availability Zone
- Can have 4,091 IP addresses per subnet

**2. Internet Gateway**
- **Gateway** allowing internet access
- Enables instances in public subnets to communicate with internet
- Must attach to VPC to use
- Only one per VPC

**3. Route Table**
- **Rules** (routes) directing traffic
- Determines where packets are sent
- Example: Route all 0.0.0.0/0 traffic to Internet Gateway
- Associated with subnets

**4. Network ACL (Access Control List)**
- **Stateless firewall** at subnet level
- Protects entire subnet (all instances)
- Inbound and outbound rules
- Processes rules top-to-bottom (order matters)
- Less commonly used than Security Groups

**5. Security Groups**
- **Stateful firewall** at instance level
- Protects individual EC2 instances
- Inbound: What traffic is allowed IN
- Outbound: What traffic is allowed OUT
- Default: All inbound blocked, all outbound allowed

### Public vs. Private Subnets (Key Concept)

**Public Subnet:**
- Has route to Internet Gateway
- Instances get public IP address
- Directly accessible from internet
- Use for: Web servers, load balancers, NAT gateways

**Private Subnet:**
- No direct route to internet
- Instances use private IP only
- Cannot be accessed directly from internet
- Use for: Databases, application servers, sensitive data
- Can access internet via NAT Gateway in public subnet

### NAT Gateway (Network Address Translation)

- **Allows private instances** to access internet
- Placed in public subnet
- Translates private IPs to public IP for outbound
- Incoming connections still blocked (no inbound allowed)
- **Charged hourly** (not cheap)
- Alternative: NAT instance (EC2, self-managed, cheaper)

### VPC Peering

- **Connect two VPCs** to communicate as if on same network
- Both VPCs can be in different accounts or regions
- **Not transitive** (if VPC A connects to B, A doesn't automatically connect to C)
- Use case: Multi-account architecture, partner networks

### VPC Endpoints (Important for Exam)

**Connect privately** to AWS services **without using internet**

**Two Types:**

1. **Gateway Endpoints** (Free)
   - For S3 and DynamoDB only
   - Restricts traffic through Route Table
   - Private access to these services

2. **Interface Endpoints** (Charged)
   - For other AWS services (EC2, Lambda, SNS, etc.)
   - Uses ENI (Elastic Network Interface)
   - Access via DNS name or IP

**Why Use:**
- Enhanced security (data doesn't traverse internet)
- Reduced data transfer costs
- Better performance

### Direct Connect (On-Premises Connectivity)

- **Dedicated network connection** between on-premises and AWS
- **Consistent performance** (not internet)
- High cost but essential for:
  - Guaranteed bandwidth
  - Compliance requirements
  - High volume data transfer
  - Real-time applications

### Site-to-Site VPN

- **Encrypted tunnel** between on-premises network and VPC
- Uses internet (variable performance)
- Cheaper than Direct Connect
- Good for: Backup connection, lower volume

### AWS PrivateLink

- **Share services privately** between VPCs and on-premises
- For large-scale deployments (more scalable than Peering)
- Service Provider VPC → Network Load Balancer → Consumer VPCs
- Simplified network architecture

### AWS Transit Gateway (Multi-VPC Connectivity)

- **Hub-and-spoke** architecture for VPCs
- Simplifies connecting many VPCs
- Better than VPC Peering for 3+ VPCs
- Can also connect on-premises networks
- **Central control** of routing

### VPC Flow Logs

- **Monitor traffic** flowing through VPC
- Logs: Source/destination IP, port, action (accept/reject)
- Destination: CloudWatch Logs or S3
- Useful for: Troubleshooting, security analysis, compliance

### Network Architecture Best Practices

1. **Multi-AZ**: Create subnets in multiple AZs for HA
2. **Public/Private Separation**: Don't put everything in public subnets
3. **Smallest CIDR Blocks**: Use /24 or smaller for flexibility
4. **NAT Gateways in Public**: Only public subnets have NAT gateways
5. **Route Tables**: Separate for public and private subnets
6. **Security Groups**: Specific rules, not permissive
7. **NACLs**: Usually leave default (redundant with Security Groups)

### Common VPC Setup

```
VPC (10.0.0.0/16)
├── Public Subnet-1 (10.0.1.0/24) in AZ1
│   ├── Internet Gateway
│   ├── NAT Gateway
│   └── EC2 instance (public IP)
├── Public Subnet-2 (10.0.2.0/24) in AZ2
│   └── Load Balancer
├── Private Subnet-1 (10.0.3.0/24) in AZ1
│   └── RDS Database
└── Private Subnet-2 (10.0.4.0/24) in AZ2
    └── Application Server
```

### Default VPC vs. Custom VPC (Know the Difference)

| Feature | Default | Custom |
|---------|---------|--------|
| **Created** | Automatically for you | You create |
| **Subnets** | Public subnets only | You choose public/private |
| **Internet Access** | Automatic | You configure |
| **Use For** | Learning, testing | Production |

### Exam Focus

1. **VPC is regional** not global
2. **Subnets are in single AZ**
3. **Internet Gateway** = internet access
4. **NAT Gateway** = private to internet (outbound only)
5. **Route Table** = directions for traffic
6. **Security Groups** = instance firewall (stateful)
7. **NACLs** = subnet firewall (stateless)
8. **VPC Peering** = connect 2 VPCs
9. **VPC Endpoints** = private access to services
10. **Transit Gateway** = hub for many VPCs

### Summary

- VPC provides network isolation and control
- Always use public/private subnet separation
- Security Groups are more important than NACLs (use Security Groups)
- NAT Gateway allows private instances to access internet
- VPC Endpoints prevent data from crossing internet
- Direct Connect for dedicated on-premises connectivity
