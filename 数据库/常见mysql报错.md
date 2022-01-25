# 常见MySql报错

## 问题：Please DISCARD the tablespace before IMPORT

**问题描述：**

用以下语句，创建表

```sql
CREATE TABLE IF NOT EXISTS `table` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=utf8;
```

报错：

> SQL错误（1813）：Tablespace for table 'table' exists. Please DISCARD the tablespace before IMPORT.



**我的问题的解决方案：**

```sql
ALTER TABLE tableName DISCARD TABLESPACE;
DROP TABLE IF EXISTS tableName;
```





**报错：**

> SQL错误（1010）：Error dropping database (can't rmdir '.\competitivemonitorspider_error', errno: 41)



**我的解决方案：**