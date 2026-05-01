# Amazon S3
## Simple Storage Service

### What is S3?

- **Unlimited, scalable object storage** in the cloud
- Stores any file type: documents, images, videos, logs, backups
- Pay only for storage used and data transfer
- 99.99% durability (not the same as availability)
- Global service (not region-specific for access, but buckets are region-specific)

### S3 Use Cases

- Static website hosting
- Backup and archival
- Big Data analytics
- Application logs
- Media distribution
- Data lakes

### S3 Structure (Important for Exam)

- **Bucket**: Root container (like a folder in Windows)
  - Unique name worldwide
  - Created in a specific region
  - Can contain unlimited objects

- **Object**: File (documents, images, videos, etc.)
  - Maximum size: 5TB (use multi-part upload for files > 5GB)
  - Each object has metadata and tags

- **Key**: Path + object name (e.g., `folder/subfolder/file.txt`)

### Storage Classes (Know These for Exam)

Choose based on access frequency and cost:

| Class | Best For | Cost | Retrieval Time |
|-------|----------|------|-----------------|
| **S3 Standard** | Frequent access, hot data | High | Immediate |
| **S3 Standard-IA** | Infrequent access (30+ days) | Lower | Immediate |
| **S3 One Zone-IA** | Infrequent, non-critical data | Lowest | Immediate |
| **S3 Glacier Instant** | Archive with occasional access | Low | Instant |
| **S3 Glacier Flexible** | Long-term archive (backups) | Very Low | Minutes-hours |
| **S3 Glacier Deep Archive** | Compliance, 7+ year retention | Cheapest | 12+ hours |
| **S3 Intelligent-Tiering** | Unknown access patterns | Auto-optimized | Varies |

**Exam Focus**: Understand cost vs. retrieval trade-off

### S3 Security Features (Critical for Exam)

**Encryption:**
- **At Rest**: Data encrypted when stored
  - SSE-S3: AWS manages keys (default)
  - SSE-KMS: You control encryption keys
  
- **In Transit**: Data encrypted during upload/download
  - HTTPS (enforced via bucket policy)

**Access Control:**
- **Block Public Access**: Default blocks all public access
- **Bucket Policies**: JSON policies controlling who can access
- **ACLs**: Access Control Lists (legacy, not recommended)
- **Presigned URLs**: Temporary access links with expiration

**Versioning:**
- Keep multiple versions of objects
- Enables rollback if needed
- Each version is stored separately (increases costs)
- Protects against accidental deletion

### S3 Features for Exam

**Replication:**
- **Same Region Replication (SRR)**: Copy within same region
- **Cross Region Replication (CRR)**: Copy to different region
  - Requires versioning enabled in both buckets
  - Asynchronous (automatic)
  - Use case: Disaster recovery, data locality

**Lifecycle Policies:**
- Automatically transition objects to cheaper storage classes
- Example: Move to Glacier after 30 days, delete after 1 year
- Reduces storage costs significantly

**Static Website Hosting:**
- Can host static HTML/CSS/JS websites
- Requires public bucket policy
- Enable "Static website hosting"
- Cannot run server-side code (use EC2 or Lambda for that)

### Cost Optimization for S3

- Use appropriate storage class for access patterns
- Enable lifecycle policies to move to cheaper tiers
- Delete unnecessary versions
- Use S3 Intelligent-Tiering for unpredictable access
- Monitor costs with AWS Cost Explorer

### Data Transfer to S3 (Exam Focus)

**For Small Amounts:**
- Upload directly via console or CLI

**For Large Amounts (Petabytes):**
- **AWS Snow Family**: Physical devices shipped to you
  - **Snowcone**: 8TB (HDD) or 14TB (SSD)
  - **Snowball Edge**: 100TB (storage optimized) or 28TB (compute optimized)
  - **Snowmobile**: Up to 100PB per truck
  - Use case: Offline data transfer, network limitations

- **AWS Storage Gateway**: On-premises device syncing to S3
  - File gateway, Volume gateway, Tape gateway
  - Use case: Hybrid cloud, incremental backups

### Important for CLF-C02

1. **Durability vs. Availability**: 
   - Durability = data won't be lost (99.999...%)
   - Availability = service is accessible (99.99%)

2. **Storage Class Selection**:
   - Standard: Website content, frequently accessed
   - Standard-IA: Database backups accessed monthly
   - Glacier: Compliance archives accessed rarely
   - Use calculator to compare costs

3. **Security First**:
   - Always enable encryption
   - Use bucket policies to restrict access
   - Enable versioning for important data
   - Use Multi-Factor Delete for extra protection

### Summary

- S3 is the most popular AWS service
- Choose storage class based on access patterns
- Enable versioning and lifecycle policies for cost optimization
- Use appropriate security controls
- For large data transfers, use Snow Family
