# Databases on AWS

### Relational vs. Non-Relational (Know the Difference)

**Relational (SQL)**
- **Structure**: Tables with rows and columns
- **Schema**: Defined upfront, rigid
- **Relationships**: Linked via foreign keys
- **Best For**: Complex queries, structured data
- **Examples**: Financial records, user accounts, inventory
- **AWS Service**: Amazon RDS, Aurora

**Non-Relational (NoSQL)**
- **Structure**: Documents, key-value pairs, graphs
- **Schema**: Flexible, schema-less
- **Relationships**: Denormalized
- **Best For**: High volume, unstructured, fast reads/writes
- **Examples**: User activity logs, social media posts, IoT sensor data
- **AWS Service**: DynamoDB, MongoDB, Cassandra

### Amazon RDS (Relational Database Service)

**What is RDS?**
- **Managed** relational database service
- AWS handles: backups, patches, maintenance, replication
- You focus on: data and optimization

**Supported Databases:**
- MySQL
- PostgreSQL
- MariaDB
- Oracle
- Microsoft SQL Server
- Aurora (AWS proprietary, most popular)

**Key Features:**
- **Multi-AZ Deployment**: Automatic failover for high availability
- **Read Replicas**: Scale reads by creating read-only copies
- **Automated Backups**: Daily snapshots (no manual work)
- **Encryption**: At rest (KMS) and in transit (SSL/TLS)

**When to Use:**
- Complex queries
- ACID compliance needed
- Relational data

**Cost**: Charged for instance size, storage, and data transfer

### Amazon Aurora (Most Important for Exam)

- **AWS-proprietary** database (MySQL/PostgreSQL compatible)
- **5x faster** than MySQL, **3x faster** than PostgreSQL
- **Fully managed**: AWS handles patching, backups, scaling
- **High Availability**: Automatic multi-AZ replication (3 copies minimum)
- **Auto-Scaling**: Storage grows automatically (no provisioning)
- **No Free Tier** (unlike RDS)

**Use Cases:**
- Production workloads
- High performance needed
- Multi-region replication needed

### Amazon DynamoDB (NoSQL - Important for Exam)

**What is DynamoDB?**
- **Fully serverless** NoSQL database
- **Lightning fast**: Single-digit millisecond latency
- **Scales automatically**: No capacity planning needed
- **Expensive**: Pay per read/write operation
- **Global Service**: Replicates across 3+ AZs automatically

**Key Concepts:**
- **Tables**: Like database tables
- **Items**: Individual records (rows)
- **Attributes**: Fields (columns) (flexible, no schema required)
- **Partition Key**: Primary identifier (must be unique)

**Features:**
- **TTL (Time to Live)**: Auto-delete old items
- **Global Tables**: Multi-region replication
- **Streams**: Capture data changes
- **On-demand pricing**: Good for unpredictable workloads

**When to Use:**
- High-speed data access
- Unpredictable workloads
- Global applications
- IoT and real-time data

**Cost Model:**
- **Provisioned**: Pay for capacity reserved
- **On-Demand**: Pay per request (higher cost but flexible)

### Amazon ElastiCache (In-Memory Database)

**What is It?**
- **Cache layer** in front of databases
- **Ultra-fast**: Data in memory (microseconds vs milliseconds)
- **Types**: Redis (more features) or Memcached (simpler)

**How It Works:**
1. Application checks cache first
2. If found → return immediately (cache hit)
3. If not found → query database, store in cache (cache miss)
4. Next similar request served from cache

**Use Cases:**
- Session storage
- Shopping carts
- Leaderboards
- User preferences

**When to Use:**
- Read-heavy workloads
- Reduce database load
- Improve response time

### Amazon Neptune (Graph Database)

- **Graph database** for relationships
- Best for: Social networks, recommendation engines, knowledge graphs
- **Not on CLF-C02 exam** (too advanced)

### Choosing the Right Database (Exam Focus)

| Need | Choose | Why |
|------|--------|-----|
| **Complex queries** | RDS/Aurora | SQL flexibility |
| **High speed, unstructured** | DynamoDB | Serverless, auto-scaling |
| **Speed up reads** | ElastiCache | In-memory fast |
| **Relationships/graphs** | Neptune | Built for relationships |
| **Large data sets** | Redshift | Data warehouse |

### Data Warehousing (Know for Exam)

**Amazon Redshift:**
- Data warehouse for big data analytics
- **Petabyte-scale** data
- Uses SQL, but optimized for analytics (not transactions)
- Much cheaper than RDS for massive data

### Database Migration Service (AWS DMS)

- Move databases to AWS from on-premises
- Minimal downtime
- Supports all major databases

### AWS Glue (ETL - Extract, Transform, Load)

- Prepare data for analytics
- **Extract**: Pull from S3, RDS, etc.
- **Transform**: Clean, organize, deduplicate
- **Load**: Send to data warehouse (Redshift)
- Serverless, pay per job execution

### Summary Table (Important for Exam)

| Service | Type | Use Case | Cost |
|---------|------|----------|------|
| **RDS** | Relational | Complex SQL queries | Fixed instance cost |
| **Aurora** | Relational | High performance | Pay per usage |
| **DynamoDB** | NoSQL | Fast, unstructured | Per read/write |
| **ElastiCache** | Cache | Speed up reads | Per hour |
| **Redshift** | Data warehouse | Big data analytics | Per cluster hour |
| **Neptune** | Graph | Relationships | Per instance |

### Best Practices

1. **Multi-AZ** for production databases
2. **Read Replicas** to scale reads
3. **Backups** enabled automatically
4. **Encryption** at rest and in transit
5. **Regular testing** of recovery procedures
6. **Monitor performance** with CloudWatch
7. **Use right database** for use case

### Exam Tips

1. RDS is managed, still need to manage DB (like OS)
2. DynamoDB is fully serverless (no infrastructure to manage)
3. Aurora is AWS's best relational database (faster, cheaper at scale)
4. ElastiCache improves performance dramatically
5. Know when to use which database type
