# AWS Certified Cloud Practitioner (CLF-C02) — Advanced Scenario Mock Exam

This 40-question mock exam is written in English and is intentionally difficult. Every item uses a business or operational scenario rather than a simple service-definition question. The coverage follows the four official CLF-C02 content domains: Cloud Concepts, Security and Compliance, Cloud Technology and Services, and Billing, Pricing, and Support. The official exam guide is available on [AWS Documentation](https://docs.aws.amazon.com/aws-certification/latest/cloud-practitioner-02/cloud-practitioner-02.html).

Choose the **single best answer** for each question. The explanations are hidden so that the file can be used as a self-test.

## 1

A global online retailer experiences unpredictable traffic whenever a competitor runs a promotion. Its current data center requires the company to purchase enough servers for the largest historical peak, yet most of those servers remain idle. The architects want the new platform to add capacity automatically during demand spikes and release that capacity when demand falls, while keeping the application design largely unchanged. Which AWS Cloud benefit most directly addresses the business problem described?

- A. Replacing all operational expenses with a fixed, long-term capital investment.
- B. Obtaining elasticity by provisioning and releasing resources as demand changes.
- C. Improving application latency by placing every workload in one Region.
- D. Eliminating the need for application monitoring through managed services.

<details><summary>Show answer</summary>

**Answer: B.** Elasticity allows resources to expand and contract with demand, avoiding the cost of maintaining peak capacity continuously.
</details>

## 2

A manufacturing company is evaluating a five-year migration program. Finance wants to compare the existing data center's depreciation, facilities, power, hardware refresh, and operations costs with the AWS design. The team also wants to model several future workload sizes before committing to an architecture. Which approach will provide the most appropriate economic analysis before the migration decision?

- A. Compare only the hourly EC2 prices with the data center's electricity bill.
- B. Use AWS Trusted Advisor recommendations as a complete five-year financial forecast.
- C. Estimate costs from the current month's invoice and assume usage will not change.
- D. Build a total-cost-of-ownership model and test scenarios with the AWS Pricing Calculator.

<details><summary>Show answer</summary>

**Answer: D.** TCO analysis includes direct and indirect infrastructure costs, while the Pricing Calculator models expected AWS usage under different scenarios.
</details>

## 3

A media company is redesigning a video-processing platform. A single workflow step occasionally fails because a downstream encoder becomes unavailable, but the business can tolerate retrying that step. The architects also want independent components so that a change to subtitle generation does not require redeploying the ingestion service. Which design decision best applies AWS Cloud design principles to this situation?

- A. Decouple components with managed queues and design the workflow for retryable failure.
- B. Place every component on one large instance to simplify network communication.
- C. Increase the instance size for all components so failures occur less frequently.
- D. Use one synchronous process so that all steps share the same transaction boundary.

<details><summary>Show answer</summary>

**Answer: A.** Decoupling and designing for failure isolate faults and allow safe retries instead of forcing the whole application to fail together.
</details>

## 4

A bank owns a legacy application that requires a proprietary operating system and a specific third-party library. Rewriting the application is not feasible this year, but the bank must stop operating its own data center. The application has predictable utilization and must be moved with minimal code change while the bank develops a long-term replacement. Which migration strategy best fits the stated constraints?

- A. Refactor the application immediately into multiple event-driven functions.
- B. Retire the application and replace it with a standard SaaS product.
- C. Rehost the application on compatible AWS compute with minimal modification.
- D. Repurchase the application by replacing it with an unrelated commercial package.

<details><summary>Show answer</summary>

**Answer: C.** Rehosting (lift and shift) moves the workload with minimal changes, which suits a time-constrained migration of a proprietary legacy system.
</details>

## 5

An organization plans to run a customer-facing API across two Availability Zones. The application team assumes that placing instances in separate subnets is sufficient, but the reliability review identifies several stateful components that cannot share local disk state. The team wants failures in one zone to have limited impact and wants capacity to be replaceable without manual intervention. Which architecture most directly supports this requirement?

- A. Run one oversized instance in each Region and replicate only its logs.
- B. Distribute stateless application instances across Availability Zones behind a load balancer.
- C. Keep all application servers in one Availability Zone and back up them nightly.
- D. Use a larger database instance and rely on vertical scaling during an outage.

<details><summary>Show answer</summary>

**Answer: B.** Multi-AZ distribution, stateless application tiers, and load balancing reduce the effect of a single-zone failure and permit replacement of instances.
</details>

## 6

A software company is deciding whether to build a private analytics cluster or use AWS services. The expected workload will grow gradually, and the company lacks a team to operate hardware, cooling, networking, and the cluster control plane. The chief financial officer asks why the public-cloud option can become less expensive even if the per-unit price is not always lower than buying hardware in bulk. Which explanation is most accurate?

- A. AWS charges no fees for data transfer or managed service operations.
- B. AWS guarantees that every workload will cost less than an equivalent data center.
- C. AWS removes all need for capacity planning because resources are unlimited.
- D. AWS aggregates demand across customers and spreads infrastructure costs through economies of scale.

<details><summary>Show answer</summary>

**Answer: D.** AWS can achieve economies of scale by pooling demand and operational expertise, while customers avoid owning underutilized infrastructure.
</details>

## 7

A research organization has workloads with very different reliability requirements. A batch simulation can restart from checkpoints and can be interrupted, while a patient-record service must remain available and preserve data during an infrastructure failure. The architects are reviewing the AWS Well-Architected Framework and want to avoid applying one universal availability pattern to both workloads. Which principle should guide the design?

- A. Select controls and availability mechanisms according to the workload's business impact and recovery objectives.
- B. Deploy every workload in three Regions because multi-Region deployment is always a best practice.
- C. Use the largest available instance type to maximize the reliability of every component.
- D. Treat operational excellence as a substitute for security and data-protection controls.

<details><summary>Show answer</summary>

**Answer: A.** Well-Architected decisions are workload-specific; reliability, recovery objectives, and business impact determine the appropriate controls.
</details>

## 8

A company wants to reduce the number of undifferentiated tasks performed by its operations team. Developers currently patch guest operating systems, maintain web-server software, and configure load balancers for a simple web application. The team can accept some platform constraints if AWS manages more of the infrastructure. Which change would best demonstrate the value of moving up the AWS managed-service stack?

- A. Move the application to larger EC2 instances but keep all patching responsibilities.
- B. Purchase dedicated hardware and use AWS only for off-site backups.
- C. Deploy the web tier using a managed platform that handles the instances and deployment environment.
- D. Host the application on an EC2 instance and automate patch commands with a scheduled script.

<details><summary>Show answer</summary>

**Answer: C.** A managed application platform such as Elastic Beanstalk abstracts instance provisioning, load balancing, and platform operations beyond raw EC2.
</details>

## 9

A legal department asks an engineering team to prove that a new AWS workload follows the organization's design standards. The team wants repeatable evidence that resources have the required tags, public access is disabled, and encryption settings remain compliant after deployment. Which combination best supports this governance objective?

- A. Use AWS Config rules for continuous configuration evaluation and remediation workflows where appropriate.
- B. Use Amazon CloudWatch metrics alone because metrics automatically evaluate every security requirement.
- C. Use an AWS Support case for each resource because support engineers approve configuration changes.
- D. Use an S3 lifecycle policy because lifecycle transitions provide governance for all AWS resources.

<details><summary>Show answer</summary>

**Answer: A.** AWS Config evaluates resource configurations against rules and can provide compliance history and remediation integrations.
</details>

## 10

A company is moving an application from a data center to AWS. The migration team wants to preserve the existing application behavior initially, but it also wants a later phase in which the database is replaced with a managed engine and the code is changed to use event-driven processing. Which sequence most accurately describes the planned migration approach?

- A. Repurchase first, then retire the workload before any validation occurs.
- B. Rehost first, then refactor or rearchitect after the workload is stable in AWS.
- C. Retain the application permanently and use AWS only for identity federation.
- D. Rebuild the entire platform before moving any production traffic or collecting measurements.

<details><summary>Show answer</summary>

**Answer: B.** A staged approach can rehost to reduce immediate migration risk, then refactor or rearchitect to gain cloud-native benefits.
</details>

## 11

A healthcare company stores protected health information in Amazon S3. The security team has enabled server-side encryption, but an audit finds that one administrator has unrestricted access to every bucket and can delete objects. The company wants to improve access control without asking AWS to change the underlying S3 service. Which action is the strongest first step?

- A. Ask AWS to patch the S3 fleet because the customer cannot control cloud storage security.
- B. Replace S3 with instance store volumes so the company controls the storage hardware.
- C. Apply least-privilege IAM policies, separate administrative duties, and require MFA for privileged actions.
- D. Disable encryption because encryption prevents the storage service from enforcing object permissions.

<details><summary>Show answer</summary>

**Answer: C.** Customers manage identities, policies, data permissions, and account controls for S3; least privilege and MFA reduce unauthorized access and destructive actions.
</details>

## 12

A startup runs its customer API on Amazon EC2. The AWS operating system image is maintained by AWS, but the startup installs a third-party web server and stores secrets in local configuration files. During a review, the CTO asks which tasks remain the startup's responsibility under the shared responsibility model. Which response is most complete?

- A. Securing AWS data centers, patching the guest operating system, and replacing failed disks.
- B. Patching the guest operating system, hardening the web server, and protecting application secrets.
- C. Managing the hypervisor, choosing Availability Zones, and configuring the AWS network backbone.
- D. Maintaining the physical hosts, updating the EC2 control plane, and rotating AWS service certificates.

<details><summary>Show answer</summary>

**Answer: B.** For EC2, AWS secures the infrastructure, while the customer secures the guest OS, installed software, configurations, and secrets.
</details>

## 13

A multinational organization uses AWS Organizations with separate accounts for development, production, and security tooling. A security officer wants to prevent any account from disabling CloudTrail or creating resources in disallowed Regions, even if an administrator in that account attaches a broad IAM policy. Which control is designed for this organization-wide restriction?

- A. An IAM permissions boundary attached to every individual user.
- B. An S3 bucket policy applied to the central logging bucket.
- C. An AWS Organizations service control policy applied to the relevant organizational unit.
- D. A security group rule that blocks network connections to the AWS API endpoints.

<details><summary>Show answer</summary>

**Answer: C.** SCPs set the maximum available permissions for member accounts and can restrict actions or Regions regardless of account-level IAM grants.
</details>

## 14

A DevOps engineer needs a temporary identity to deploy a production change from a CI/CD system. The identity should not have long-lived access keys, and the deployment account must be able to limit the permissions granted by the role even if a developer later modifies an attached policy. Which design best meets both requirements?

- A. Create a shared IAM user, distribute its access key to the pipeline, and rotate it quarterly.
- B. Use an IAM role with short-lived credentials and apply a permissions boundary to cap the role's maximum permissions.
- C. Use the root user for the deployment because root credentials are not restricted by IAM policies.
- D. Store a permanent access key in an encrypted S3 object and allow the pipeline to retrieve it when needed.

<details><summary>Show answer</summary>

**Answer: B.** Roles provide temporary credentials, and permissions boundaries limit the maximum permissions an identity policy can grant.
</details>

## 15

A security team must investigate whether an IAM principal made an unexpected change to a production security group last weekend. The team needs the API caller, timestamp, source IP address, and request parameters, and it wants the record delivered to a protected log archive for later analysis. Which AWS capability is the best primary source of this evidence?

- A. Amazon Inspector vulnerability findings from the affected EC2 instances.
- B. Amazon CloudWatch application logs generated by the production service.
- C. AWS CloudTrail management-event history delivered to an access-controlled S3 bucket.
- D. AWS Shield metrics showing the volume of traffic reaching the application.

<details><summary>Show answer</summary>

**Answer: C.** CloudTrail records AWS API activity, including the principal, time, source, and request details, and can deliver logs to S3.
</details>

## 16

A company wants to discover sensitive personal information accidentally stored in S3 objects across several accounts. It does not want to inspect object contents manually, and it needs findings that can be prioritized by security teams. Which AWS service is designed for this use case?

- A. Amazon Macie, which uses machine learning and pattern matching to discover sensitive data in S3.
- B. Amazon GuardDuty, which primarily detects suspicious activity and threats using telemetry sources.
- C. Amazon Inspector, which evaluates software vulnerabilities in supported compute workloads.
- D. AWS WAF, which filters web requests based on rules before they reach an application.

<details><summary>Show answer</summary>

**Answer: A.** Macie discovers and classifies sensitive data in S3 and produces findings for investigation.
</details>

## 17

A public web application is receiving a burst of malicious requests that attempt SQL injection and exploit common web vulnerabilities. The company wants to block matching HTTP requests at the edge or before they reach the application, while also using a separate service for large-scale DDoS protection. Which design is most appropriate?

- A. Use Amazon RDS encryption and rely on database auditing to stop malicious HTTP requests.
- B. Use AWS WAF for application-layer filtering and AWS Shield for DDoS protection.
- C. Use security groups to inspect HTTP request bodies and detect SQL injection signatures.
- D. Use Amazon Macie to classify incoming requests and automatically rewrite unsafe URLs.

<details><summary>Show answer</summary>

**Answer: B.** AWS WAF filters web requests with rules, while AWS Shield provides managed DDoS protection for supported resources.
</details>

## 18

A company must demonstrate that its AWS controls are aligned with several industry frameworks. Auditors ask for downloadable AWS compliance reports and certificates, while the internal compliance team also wants to evaluate the customer's own resource configurations against policies. Which combination best separates these responsibilities?

- A. Use AWS Artifact for AWS compliance reports and AWS Config for customer resource configuration evaluation.
- B. Use CloudFront for compliance certificates and CloudTrail for continuous infrastructure remediation.
- C. Use Amazon Inspector for AWS legal attestations and IAM Access Analyzer for physical data-center audits.
- D. Use AWS Budgets for audit evidence and Amazon GuardDuty for mapping every control to a framework.

<details><summary>Show answer</summary>

**Answer: A.** Artifact provides AWS compliance documentation, while Config evaluates the customer's deployed resource settings.
</details>

## 19

A company has a central security account and wants to aggregate findings from GuardDuty, Inspector, and other security services. Analysts need one prioritized view and want to automate responses when findings exceed a severity threshold. Which service is intended to provide this aggregation and posture-oriented view?

- A. Amazon Detective, which is primarily used to investigate relationships among security events.
- B. AWS Security Hub, which centralizes and prioritizes findings from multiple security services.
- C. Amazon CloudWatch, which aggregates operational metrics and logs but is not a security-finding hub.
- D. AWS Trusted Advisor, which provides best-practice checks but does not aggregate security findings from all services.

<details><summary>Show answer</summary>

**Answer: B.** Security Hub centralizes security findings and supports standards and automated integrations for response workflows.
</details>

## 20

A development account contains a role that can read production data. The security team wants to identify external or cross-account access paths that are broader than intended before the role is used. It needs a capability that analyzes resource policies and trust relationships rather than waiting for an incident. Which AWS feature best fits the requirement?

- A. Amazon Detective's investigation graph for historical incident evidence.
- B. AWS CloudTrail's event history for searching completed API calls.
- C. AWS IAM Access Analyzer's policy and access-path analysis.
- D. Amazon Inspector's package vulnerability assessment for the role's host.

<details><summary>Show answer</summary>

**Answer: C.** IAM Access Analyzer identifies unintended external or cross-account access by analyzing policies and trust relationships.
</details>

## 21

A retailer is moving a three-tier application to AWS. Web servers need internet access, application servers should accept traffic only from the web tier, and the database must not have a public IP address. The network team also wants a stateful control that can reference the application servers as a source. Which design satisfies these requirements?

- A. Place all tiers in a public subnet and use a network ACL to permit only approved ports.
- B. Place the web tier in a public subnet, private tiers in private subnets, and use security-group references between tiers.
- C. Place the database in a public subnet and rely on IAM policies to prevent network connections.
- D. Place every tier in a private subnet and expose the database through a public load balancer.

<details><summary>Show answer</summary>

**Answer: B.** Public and private subnet separation plus stateful security groups provides tier-specific network access without exposing the database publicly.
</details>

## 22

A company hosts an API in one Region and wants users on several continents to receive static assets from locations close to them. The company also wants TLS termination and the ability to route users to the application origin without operating global servers. Which service and architecture are most appropriate?

- A. Use Amazon CloudFront with the API or S3 bucket as an origin and configure an appropriate cache behavior.
- B. Use AWS Direct Connect from every user site to the Region and disable caching to preserve consistency.
- C. Use Amazon EBS snapshots copied to each continent and expose the snapshots through DNS.
- D. Use an EC2 instance in each continent and synchronize static files manually with scheduled scripts.

<details><summary>Show answer</summary>

**Answer: A.** CloudFront provides a global edge network, caching, TLS features, and origin integration without requiring customers to operate edge servers.
</details>

## 23

A company runs a large analytical warehouse with complex joins over structured historical data. Queries are issued by many analysts, but the source data is also retained in S3 for lower-cost long-term storage. The team wants a service optimized for massively parallel analytical queries rather than a transactional relational workload. Which architecture is the best fit?

- A. Store all records in DynamoDB and use strongly consistent reads for every report.
- B. Use Amazon Redshift for the analytical warehouse and retain durable raw data in Amazon S3.
- C. Use Amazon ElastiCache as the system of record and increase cache size for larger reports.
- D. Use Amazon RDS for a single transactional database and add read replicas for every analyst query.

<details><summary>Show answer</summary>

**Answer: B.** Redshift is designed for data warehousing and columnar analytical workloads, while S3 is suitable for durable raw-data retention.
</details>

## 24

A mobile application records millions of small user actions. The access pattern is key-value oriented, throughput is highly variable, and the team does not want to manage database servers, patching, or capacity planning. The application also needs automatic scaling with predictable single-digit-millisecond performance for common lookups. Which service is the strongest match?

- A. Amazon Aurora with manual read replicas and scheduled storage expansion.
- B. Amazon Redshift with a distribution style chosen for low-latency point reads.
- C. Amazon DynamoDB with on-demand capacity and an access pattern designed around partition keys.
- D. Amazon RDS for MySQL with one large instance and a standby in another Availability Zone.

<details><summary>Show answer</summary>

**Answer: C.** DynamoDB is a managed key-value and document database with on-demand capacity and low-latency access when keys are designed appropriately.
</details>

## 25

A financial application needs a relational database with high availability inside one Region. A failure of the primary database instance should trigger a managed failover, but the application must not use the secondary copy for read scaling. The team also requires the standby data to remain synchronized. Which configuration should be selected?

- A. Create an RDS Multi-AZ deployment with synchronous standby replication and managed failover.
- B. Create an RDS read replica and direct reporting queries to the replica during normal operation.
- C. Export automated backups to S3 and restore a new database only after the primary fails.
- D. Use DynamoDB global tables and implement relational joins in the application tier.

<details><summary>Show answer</summary>

**Answer: A.** RDS Multi-AZ provides a synchronized standby for availability and failover; a read replica is primarily for read scaling and can lag.
</details>

## 26

A company has a nightly batch workload that can tolerate interruption and restart from checkpoints. The workload's start time is flexible, and the company wants to reduce compute cost compared with On-Demand pricing. However, a separate payment service must run continuously and cannot be interrupted. Which purchasing strategy best matches both workloads?

- A. Use On-Demand Instances for both workloads because flexible start time does not affect pricing.
- B. Use Reserved Instances for the batch workload and Spot Instances for the payment service.
- C. Use Dedicated Hosts for both workloads because dedicated capacity is always the least expensive option.
- D. Use Spot Instances for the batch workload and On-Demand Instances for the interruption-sensitive payment service.

<details><summary>Show answer</summary>

**Answer: D.** Spot Instances are appropriate for flexible, interruptible work; On-Demand capacity avoids interruption risk for the payment service.
</details>

## 27

A data engineering team receives event records from point-of-sale systems. Several independent consumers need to process the same events: one updates a fraud model, another updates inventory, and a third archives the raw stream. The producers should not call each consumer directly, and consumers must be able to process records at their own pace. Which service is the best central ingestion choice?

- A. Amazon SQS Standard queues with one competing consumer group shared by all processors.
- B. Amazon Kinesis Data Streams with separate consumer applications reading the retained stream.
- C. Amazon SNS FIFO topics with one subscription because only one consumer should receive each event.
- D. Amazon EventBridge Scheduler with a fixed rule that invokes one processing function per hour.

<details><summary>Show answer</summary>

**Answer: B.** Kinesis Data Streams retains ordered records within shards and supports multiple independent consumers processing a shared stream.
</details>

## 28

A serverless order process must validate a payment, reserve inventory, and issue a confirmation. If inventory reservation fails, the process must compensate for a previously authorized payment. The team wants visual workflow state, retries, and error handling without implementing orchestration in one long-running server. Which service is most appropriate?

- A. Amazon SQS alone, because a queue automatically models compensation and workflow state.
- B. Amazon CloudFront Functions, because edge functions can maintain durable transaction state.
- C. AWS Step Functions with service integrations, retries, and catch paths for compensation logic.
- D. Amazon Route 53 health checks, because routing policies can coordinate transactional steps.

<details><summary>Show answer</summary>

**Answer: C.** Step Functions provides managed workflow orchestration, state, retries, and branching for multi-step processes.
</details>

## 29

A company publishes product updates to mobile clients, email subscribers, and an internal analytics consumer. Publishers should send one message without knowing the number of recipients, and each recipient should receive its own delivery path. The company also wants fan-out without writing a custom dispatcher. Which architecture is the strongest fit?

- A. Publish to an SNS topic and create separate subscriptions for the mobile, email, and analytics consumers.
- B. Send every message directly to one SQS queue and require each consumer to poll the same queue.
- C. Store messages in EBS and ask each consumer to read the same block device concurrently.
- D. Use an RDS trigger to call each consumer synchronously within the product database transaction.

<details><summary>Show answer</summary>

**Answer: A.** SNS topics provide pub/sub fan-out so each subscription can receive and process a copy independently.
</details>

## 30

A scientific team has a 12 TB dataset in an on-premises facility connected to AWS through a network link that is too slow for the project deadline. The data must be transferred once, encrypted during transport, and then imported into Amazon S3. The team does not want to deploy or manage a fleet of transfer servers. Which option best meets the requirements?

- A. Use AWS DataSync over the existing link and accept the transfer time determined by bandwidth.
- B. Use an AWS Snowball device for an offline transfer and import the data into the target S3 bucket.
- C. Upload the dataset through a public web browser because S3 automatically accelerates all uploads.
- D. Create an EBS volume locally and attach it directly to an EC2 instance in the target Region.

<details><summary>Show answer</summary>

**Answer: B.** Snowball devices support secure offline transfer of large datasets when network transfer is impractical.
</details>

## 31

A company stores frequently accessed user images, older images that are still occasionally requested, and seven-year archives that must be retained for compliance but are rarely retrieved. The company wants automated transitions based on object age and protection against accidental deletion. Which S3 design is most appropriate?

- A. Use S3 Lifecycle rules to transition objects among storage classes and enable versioning with an appropriate retention policy.
- B. Store every object in S3 Standard because lifecycle transitions make retrieval costs identical across classes.
- C. Use EBS snapshots for all images because snapshots automatically expose objects through HTTP URLs.
- D. Place all objects in S3 Glacier Deep Archive immediately and accept the same retrieval characteristics for active images.

<details><summary>Show answer</summary>

**Answer: A.** Lifecycle rules automate age-based transitions, while versioning helps recover from accidental overwrite or deletion; storage classes should match access needs.
</details>

## 32

A company must provide a shared file system to Linux instances running in multiple Availability Zones. Applications expect a standard NFS interface and need files to remain available when an instance is replaced. The team does not want to provision or manually expand file-system servers. Which service best fits the requirement?

- A. Amazon S3 Glacier objects mounted directly as a low-latency POSIX file system.
- B. Amazon EBS gp3 volumes attached simultaneously to all instances without a clustered file system.
- C. Instance store volumes formatted independently on each instance and synchronized by cron jobs.
- D. Amazon EFS with mount targets in the required Availability Zones.

<details><summary>Show answer</summary>

**Answer: D.** EFS provides a managed, elastic NFS file system designed for concurrent access from multiple compute instances.
</details>

## 33

A product team wants to expose a REST API without managing servers. Requests invoke short-running code, and the team wants the service to scale with request volume and charge primarily for execution rather than idle capacity. Some requests may arrive in bursts, so the design must include controlled concurrency and an asynchronous retry path for noncritical work. Which architecture is most suitable?

- A. Run the API on a fixed EC2 fleet and schedule larger instances during expected peaks.
- B. Use Lambda behind API Gateway and send noncritical work to SQS for asynchronous processing.
- C. Use an RDS stored procedure as the public API and increase database connections during bursts.
- D. Use Dedicated Hosts with a local web server and write a custom autoscaling controller.

<details><summary>Show answer</summary>

**Answer: B.** API Gateway and Lambda provide managed request handling and scaling, while SQS supports decoupled asynchronous work and retries.
</details>

## 34

A marketing department wants to identify customer sentiment in thousands of written product reviews without training a custom natural-language model. Another team wants to forecast demand using its own historical data and a custom machine-learning workflow. Which pairing is most appropriate?

- A. Use Amazon Rekognition for sentiment and Amazon Polly for custom demand forecasting.
- B. Use Amazon Textract for sentiment and Amazon Translate for custom model training.
- C. Use Amazon Comprehend for sentiment analysis and Amazon SageMaker for custom model development.
- D. Use Amazon Lex for sentiment and Amazon Kendra for all numerical forecasting workloads.

<details><summary>Show answer</summary>

**Answer: C.** Comprehend provides managed natural-language analysis such as sentiment, while SageMaker supports building, training, and deploying custom ML models.
</details>

## 35

A company wants a managed DNS service that can route users to the closest healthy application endpoint and automatically answer with a backup endpoint when the primary becomes unhealthy. The company also needs domain registration and DNS record management. Which solution best addresses the complete requirement?

- A. Use Route 53 latency-based routing with health checks and a failover record policy.
- B. Use CloudFront only, because edge caching automatically replaces authoritative DNS.
- C. Use an internal load balancer without DNS health checks and require clients to retry manually.
- D. Use AWS Direct Connect routing tables because private circuits provide global name resolution.

<details><summary>Show answer</summary>

**Answer: A.** Route 53 supports domain services, health checks, latency-based routing, and failover policies.
</details>

## 36

A startup has a highly variable workload and wants to avoid paying for idle virtual machines. The application is packaged as containers, but the team does not want to operate Kubernetes control planes or manage EC2 worker nodes. The containers need to run as tasks with an AWS-managed compute layer. Which service combination is most appropriate?

- A. AWS Batch with Dedicated Hosts because interactive web requests require batch scheduling.
- B. Amazon EKS with self-managed nodes because Fargate cannot run containers at variable scale.
- C. Amazon EC2 Auto Scaling with Docker installed manually on every instance.
- D. Amazon ECS with AWS Fargate as the serverless compute engine for containers.

<details><summary>Show answer</summary>

**Answer: D.** ECS provides container orchestration, and Fargate runs tasks without requiring the customer to manage underlying servers.
</details>

## 37

A finance team notices that monthly AWS spending increased unexpectedly after a new analytics workload launched. The team needs to see which accounts, services, Regions, and usage types caused the change, then wants to receive alerts before a forecasted threshold is exceeded. Which combination should the team use?

- A. Use Cost Explorer for historical trend analysis and AWS Budgets for threshold and forecast alerts.
- B. Use CloudTrail for cost attribution and Security Hub for forecast notifications.
- C. Use the AWS Health Dashboard for service usage trends and Route 53 for budget enforcement.
- D. Use the Pricing Calculator for historical invoice analysis and AWS Config for payment reminders.

<details><summary>Show answer</summary>

**Answer: A.** Cost Explorer analyzes historical and current cost/usage dimensions, while Budgets provides alerts based on actual or forecasted spend.
</details>

## 38

A stable production workload runs continuously and has predictable compute usage for the next three years. Another workload is new and may change substantially as the product evolves. Finance wants commitment-based discounts for the stable workload but wants to preserve flexibility for the experimental workload. Which purchasing plan is most appropriate?

- A. Use Spot pricing for both workloads because long-running workloads are always interruption tolerant.
- B. Purchase a three-year commitment for the stable workload and use On-Demand pricing for the experimental workload.
- C. Use Dedicated Hosts for the stable workload and Reserved Instances only for the experimental workload.
- D. Use On-Demand pricing for both workloads because commitment discounts require a single account-wide instance type.

<details><summary>Show answer</summary>

**Answer: B.** A long-term commitment can reduce cost for predictable usage, while On-Demand preserves flexibility for uncertain workloads.
</details>

## 39

An enterprise has multiple AWS accounts under consolidated billing. It wants one department to pay for its own usage, another department to receive a monthly cost report by project, and finance to apply discount benefits across eligible accounts. Which combination of capabilities best supports these goals?

- A. Use separate payer accounts for every project and manually reconcile invoices without cost allocation tags.
- B. Use security groups to divide charges by department and IAM groups to generate invoices automatically.
- C. Use CloudWatch dashboards only, because operational metrics provide authoritative billing allocation and discount sharing.
- D. Use AWS Organizations consolidated billing, cost allocation tags, and account-level or organizational reporting controls.

<details><summary>Show answer</summary>

**Answer: D.** Organizations supports consolidated billing and discount sharing, while cost allocation tags and reports help attribute spend to projects or departments.
</details>

## 40

A company has a production outage caused by a suspected AWS networking issue. The operations team needs rapid guidance from engineers familiar with the account's architecture, wants proactive operational recommendations, and expects a response appropriate for a business-critical workload. Which support choice most directly provides these capabilities?

- A. Use the Basic Support plan and rely on public documentation for all production incidents.
- B. Use the Developer Support plan because it includes the fastest response for business-critical outages.
- C. Use the Business Support plan, which provides 24/7 access for production issues and enhanced technical guidance.
- D. Use AWS re:Post alone because community answers provide a guaranteed response-time agreement.

<details><summary>Show answer</summary>

**Answer: C.** Business Support provides 24/7 technical support for production workloads and access to additional guidance and Trusted Advisor capabilities; the exact response SLA depends on severity.
</details>

---

## Suggested scoring

- **36–40:** Excellent readiness; focus on speed and eliminating subtle distractor mistakes.
- **30–35:** Strong foundation; review service boundaries and pricing exceptions.
- **24–29:** Moderate readiness; revisit the official domain task statements and practice scenario mapping.
- **0–23:** Build fundamentals first, then retake this mock exam without looking at the explanations.
