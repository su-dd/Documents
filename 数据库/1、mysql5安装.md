# MySql安装

版本：5.XXX

## 1、配置my-default.ini文件

复制解压后目录的my-default.ini文件，并将副本重命名为my.ini

> [client]
> #设置mysql客户端默认字符集default-character-set=utf8
> [mysqld]
> sql_mode=NO_ENGINE_SUBSTITUTION,STRICT_TRANS_TABLES 
> #服务端使用的字符集默认为8比特编码的latin1字符集
> character-set-server=utf8
> #设置mysql的安装目录
> basedir=C:\\****\mysql-5.6.47-winx64
> #设置mysql数据库的数据存放目录
> datadir=C:\\****\mysql-5.6.47-winx64\data
> #设置3306端口
> port = 3306
> #创建新表时将使用的默认存储引擎
> default-storage-engine=INNODB

## 2、安装启动

用管理员身份，运行命令行工具

**初始化：**

5.7.7 开始，添加了--initialize 选项
5.6， 没有--initialize 选项，跳过初始化。

```bash
# 默认密码存在于xxx.err文件中：
# 例：D:\***\mysql\data\主机名.err
mysqld --initialize

# 默认密码输出到控制台
mysqld --initialize --user=mysql --console
```

**安装：**

```bash
mysqld --install [服务名]

# 指定 配置文件初始化
mysqld --install [服务名] --defaults-file="my.ini的文件路径"
```

**卸载：**

```bash
mysqld --remove [服务名]
```

**启动服务：**

```bash
net start [服务名]
```

**关闭服务：**

```bash
net stop[服务名]
```

## 3、更新root用户的密码

> mysql -uroot -p
> 
> 步骤：  
> 1.进入MySQL，选择数据库：use mysql;  
> 2.执行更新语句：update user set password=PASSWORD("123123") where user ="root";  
> 3.刷新权限：flush privileges;  
> 4.重启MySQL服务： net start mysql;  
> 5.可以使用新的密码登录了。

## 4、卸载

删除注册表：

> - HKEY_LOCAL_MACHINE\SYSTEM\ControlSet001\Services\Eventlog\Application\MySQL 目录删除 
> 
> - HKEY_LOCAL_MACHINE\SYSTEM\ControlSet002\Services\Eventlog\Application\MySQL 目录删除
> 
> - HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Services\Eventlog\Application\MySQL 目录删除 

注册表中的ControlSet001、ControlSet002不一定是001和002，可能是ControlSet005、006之类，删除的时候都删除就可以 。
