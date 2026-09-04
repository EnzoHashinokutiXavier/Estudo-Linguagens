# Data Lakes, Data Warehouses, and Data Lakehouses on AWS

## Exam goal

For the AWS Certified Cloud Practitioner (CLF-C02) exam, focus on matching a business need to the appropriate AWS service. You do not need to design complex data pipelines, but you should understand the purpose of each service and how the services work together.

---

## 1. Core concepts

### Data lake

A **data lake** is a centralized repository that stores large amounts of data in its original format. It can hold structured, semi-structured, and unstructured data.

Examples of data stored in a lake:

- CSV files and relational database exports
- JSON logs and application events
- Images, videos, audio, and documents
- IoT sensor data

Data is usually stored before its final use is known. This approach is called **schema-on-read**: structure and interpretation are applied when a user reads or analyzes the data.

On AWS, the most common storage foundation for a data lake is **Amazon S3**.

### Data warehouse

A **data warehouse** is optimized for analytics and reporting over structured, curated data from multiple sources. It is designed for business intelligence (BI), dashboards, and complex SQL queries over large datasets.

Before data enters a warehouse, it is commonly cleaned, transformed, and modeled. This is often described as **schema-on-write**, because the schema is defined before the data is loaded for analysis.

On AWS, the primary data warehouse service is **Amazon Redshift**.

### Data lakehouse

A **data lakehouse** combines data lake flexibility and low-cost object storage with data warehouse-style governance, SQL analytics, and reliable tables. A lakehouse helps an organization use data in Amazon S3 for BI, machine learning, and analytics without moving every dataset into a traditional warehouse.

AWS does not require one single "lakehouse" product. A common AWS lakehouse architecture combines Amazon S3, AWS Lake Formation, AWS Glue Data Catalog, Amazon Athena, Amazon Redshift, and Amazon EMR.

---

## 2. Data lake services

### Amazon S3

**Amazon Simple Storage Service (Amazon S3)** is highly durable, scalable object storage. It is the core storage service for many AWS data lakes.

Use Amazon S3 when you need to:

- Store raw data at virtually any scale
- Keep data in many formats
- Separate inexpensive storage from compute
- Use lifecycle policies to archive or delete data automatically
- Make data available to analytics and machine learning services

Important exam point: S3 is object storage, not a relational database and not a data warehouse.

### AWS Lake Formation

**AWS Lake Formation** helps build, secure, and manage a data lake. It can simplify collecting data, creating a central catalog, defining permissions, and giving analytics services controlled access to data in Amazon S3.

Use Lake Formation when the requirement emphasizes:

- Centralized governance for a data lake
- Fine-grained access control to data
- Sharing governed data with analytics services
- Simplifying data lake setup and management

Think of it as a governance and management layer around data-lake data, especially data stored in S3.

### AWS Glue

**AWS Glue** is a serverless data integration service. It discovers data, catalogs metadata, and performs extract, transform, and load (ETL) jobs.

Key Glue components:

- **Glue Data Catalog**: a central metadata repository describing datasets, tables, columns, and locations.
- **Glue crawlers**: scan data sources and infer schemas to populate the Data Catalog.
- **Glue ETL jobs**: transform and move data using managed serverless compute.

Use AWS Glue when data must be discovered, cleaned, transformed, or prepared for analytics. Glue is often used between raw S3 data and analytical tools such as Athena or Redshift.

### Amazon Athena

**Amazon Athena** is a serverless interactive query service that lets you run standard SQL queries directly against data in Amazon S3.

Use Athena when you need to:

- Analyze S3 data without provisioning servers
- Run occasional or ad hoc SQL queries
- Pay primarily for the data scanned by queries
- Explore logs, CSV, JSON, Parquet, or other S3 datasets

Athena commonly uses the AWS Glue Data Catalog for table definitions. To reduce cost and improve performance, store data in efficient formats such as Parquet or ORC and partition the data when appropriate.

### Amazon EMR

**Amazon EMR** is a managed big-data platform for processing large datasets using open-source frameworks such as Apache Spark, Apache Hadoop, Apache Hive, and Apache Flink.

Use EMR when you need large-scale distributed data processing or open-source big-data frameworks. For a simple serverless ETL task, AWS Glue is often the more straightforward CLF-C02 answer.

---

## 3. Data warehouse and BI services

### Amazon Redshift

**Amazon Redshift** is a fully managed, cloud data warehouse. It is built for fast analytics across large volumes of structured and semi-structured data using SQL.

Use Redshift when you need to:

- Consolidate data from many operational systems
- Run complex analytical queries at scale
- Support BI reports and dashboards
- Store curated analytical data in a warehouse

Redshift is not intended to be the primary database for high-volume transactional application updates. For transactional relational workloads, a service such as Amazon RDS or Amazon Aurora is usually more suitable.

### Amazon Redshift Spectrum

**Redshift Spectrum** lets Redshift query data stored in Amazon S3 without first loading all of that data into Redshift storage. This is a key bridge between a data warehouse and a data lake.

Exam clue: If the question asks to analyze data in both Redshift and S3 using Redshift SQL, Redshift Spectrum is a strong answer.

### Amazon QuickSight

**Amazon QuickSight** is a cloud-native business intelligence service for creating dashboards, visualizations, and reports.

Use QuickSight when users need to visualize or share insights from data sources such as Amazon Redshift, Athena, Amazon S3, and relational databases.

QuickSight is the presentation layer; it does not replace S3, Glue, Athena, or Redshift.

---

## 4. A simple AWS analytics flow

```text
Data sources
  |  databases, logs, devices, files
  v
Amazon S3 (raw data lake storage)
  |\
  | \-- AWS Glue: catalog and transform data
  |\
  |  \-- Amazon Athena: ad hoc SQL directly on S3
  |   \-- Amazon Redshift / Spectrum: warehouse analytics + S3 queries
  v
Amazon QuickSight (dashboards and reports)
```

AWS Lake Formation can provide centralized governance and permissions across this data-lake environment.

---

## 5. Choosing the right service

| Requirement | Best service or concept |
|---|---|
| Store raw files, logs, images, and datasets cheaply at scale | Amazon S3 / data lake |
| Build and govern a secure data lake | AWS Lake Formation |
| Discover schemas and run serverless ETL transformations | AWS Glue |
| Run SQL directly against data in S3, with no infrastructure to manage | Amazon Athena |
| Process massive data with Apache Spark or Hadoop | Amazon EMR |
| Run high-performance SQL analytics on curated enterprise data | Amazon Redshift |
| Query Amazon S3 data from Amazon Redshift | Redshift Spectrum |
| Build dashboards and visual reports | Amazon QuickSight |

---

## 6. Data lake vs. data warehouse

| Topic | Data lake | Data warehouse |
|---|---|---|
| Typical AWS foundation | Amazon S3 | Amazon Redshift |
| Data types | Structured, semi-structured, and unstructured | Mostly structured and curated |
| Data state | Raw, detailed, or processed | Cleaned, transformed, modeled |
| Schema approach | Schema-on-read | Schema-on-write |
| Main users | Data engineers, data scientists, analysts | Business analysts and BI users |
| Common workloads | Exploration, ML, logs, large-scale storage | Reporting, dashboards, SQL analytics |

They are complementary. Many organizations keep raw historical data in S3 and load selected, transformed data into Redshift for repeatable reporting.

---

## 7. CLF-C02 decision clues

- **"Object storage"**, **"raw data"**, or **"data lake"**: think Amazon S3.
- **"Govern access to a data lake"**: think AWS Lake Formation.
- **"ETL"**, **"data catalog"**, or **"crawler"**: think AWS Glue.
- **"Query S3 with SQL"** and **"serverless"**: think Amazon Athena.
- **"Enterprise analytics warehouse"** or **"complex BI queries"**: think Amazon Redshift.
- **"Use Spark/Hadoop"**: think Amazon EMR.
- **"Dashboards"** or **"data visualizations"**: think Amazon QuickSight.
- **"Query S3 from Redshift"**: think Redshift Spectrum.

---

## 8. Practice questions

### Question 1

A company wants a low-cost central repository for CSV files, application logs, and images. Data scientists will analyze the data later. Which service is the best foundation?

**Answer: Amazon S3.** It provides scalable object storage and is commonly used as the foundation of a data lake.

### Question 2

An analyst needs to run occasional SQL queries against log files stored in Amazon S3. The company does not want to manage servers. Which service should be used?

**Answer: Amazon Athena.** It is serverless and queries data directly in S3 using SQL.

### Question 3

A company needs a managed service to crawl data sources, store table metadata, and transform data before analysis. Which service fits best?

**Answer: AWS Glue.** Glue provides crawlers, the Data Catalog, and serverless ETL capabilities.

### Question 4

A BI team needs fast, repeatable SQL analysis across large volumes of curated business data from several systems. Which service is most appropriate?

**Answer: Amazon Redshift.** It is AWS's managed data warehouse for large-scale analytics.

### Question 5

A company wants centralized fine-grained permissions for data stored in its S3-based data lake. Which service should it use?

**Answer: AWS Lake Formation.** It helps build, secure, and govern data lakes.

### Question 6

An organization needs to build interactive executive dashboards from data in Athena and Redshift. Which service should it use?

**Answer: Amazon QuickSight.** It is the AWS BI and visualization service.

---

## Final memory aid

**S3 stores it. Glue prepares it. Lake Formation governs it. Athena queries it in S3. Redshift warehouses it. QuickSight shows it.**
