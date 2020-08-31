初期技术栈计划：Springboot2.13 + Vue + Mybatis + Postgresql + redies + FreeMarker(这个不一定会用到)
整合配置：Logback日志管理 + Shiro权限管理 + activiti流程引擎
前期准备：
Vue安装：查看node.js 和npm是否安装，这需要注意一点默认npm版本很低，需要自己upgrade下：
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190611210313303.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
我这里npm的版本已经很高了：
npm update常用命令使用
一、更新
　　1. npm-check检查更新
　　　npm install -g npm-check
　　　npm-check
　　2. npm-upgrade更新
　　　npm install -g npm-upgrade
　　　npm-upgrade
　　3. 更新全局包：
　　　npm update -g
　　4. 更新生产环境依赖包：
　　　npm update --save
　　5. 更新开发环境依赖包：
　　　npm update --save-dev
开始安装Vue安装(cls清空dos界面内容后):
日志及命令：

```
// 安装脚手架vue-cli
G:\>npm install --global vue-cli
npm WARN deprecated coffee-script@1.12.7: CoffeeScript on NPM has moved to "coffeescript" (no hyphen)
C:\Users\zy962\AppData\Roaming\npm\vue -> C:\Users\zy962\AppData\Roaming\npm\node_modules\vue-cli\bin\vue
C:\Users\zy962\AppData\Roaming\npm\vue-list -> C:\Users\zy962\AppData\Roaming\npm\node_modules\vue-cli\bin\vue-list
C:\Users\zy962\AppData\Roaming\npm\vue-init -> C:\Users\zy962\AppData\Roaming\npm\node_modules\vue-cli\bin\vue-init
+ vue-cli@2.9.6
updated 1 package in 2.074s

// 安装webpack模块打包器
G:\>npm install -g webpack
C:\Users\zy962\AppData\Roaming\npm\webpack -> C:\Users\zy962\AppData\Roaming\npm\node_modules\webpack\bin\webpack.js
npm WARN optional SKIPPING OPTIONAL DEPENDENCY: fsevents@1.2.9 (node_modules\webpack\node_modules\fsevents):
npm WARN notsup SKIPPING OPTIONAL DEPENDENCY: Unsupported platform for fsevents@1.2.9: wanted {"os":"darwin","arch":"any"} (current: {"os":"win32","arch":"x64"})

+ webpack@4.33.0
added 324 packages from 199 contributors in 35.083s

//初始化webpack
G:\>vue init webpack ZYVue

'git' �����ڲ����ⲿ���Ҳ���ǿ����еĳ���
���������ļ���
? Project name vu
? Project description A Vue.js project
? Author zhouyi
? Vue build standalone
? Install vue-router? Yes
// 这一步如果是大项目需要，作用是：在写代码过程中，它会进行很严格的检查，比如缩进，
//空格问题都非常的敏感，加入报错。但是相反编写会很烦。所以这里不要。
? Use ESLint to lint your code? No 
? Set up unit tests Yes
? Pick a test runner jest
? Setup e2e tests with Nightwatch? Yes
? Should we run `npm install` for you after the project has been created? (recommended) npm

   vue-cli · Generated "ZYVue".


# Installing project dependencies ...
# ========================

npm WARN deprecated extract-text-webpack-plugin@3.0.2: Deprecated. Please use https://github.com/webpack-contrib/mini-css-extract-plugin
npm WARN deprecated browserslist@2.11.3: Browserslist 2 could fail on reading Browserslist >3.0 config used in other tools.
npm WARN deprecated bfj-node4@5.3.1: Switch to the `bfj` package for fixes and new features!
npm WARN deprecated json3@3.3.2: Please use the native JSON object instead of JSON 3
npm WARN deprecated browserslist@1.7.7: Browserslist 2 could fail on reading Browserslist >3.0 config used in other tools.
npm WARN deprecated flatten@1.0.2: I wrote this module a very long time ago; you should use something else.
npm WARN deprecated socks@1.1.10: If using 2.x branch, please upgrade to at least 2.1.6 to avoid a serious bug with socket data flow and an import issue introduced in 2.1.0
npm WARN deprecated left-pad@1.3.0: use String.prototype.padStart()
> chromedriver@2.46.0 install G:\ZYVue\node_modules\chromedriver
> node install.js

Current existing ChromeDriver binary is unavailable, proceding with download and extraction.
Downloading from file:  https://chromedriver.storage.googleapis.com/2.46/chromedriver_win32.zip
Saving to file: C:\Users\zy962\AppData\Local\Temp\2.46\chromedriver\chromedriver_win32.zip
Received 781K...
Received 1568K...
Received 2352K...
Received 3136K...
Received 3920K...
Received 4523K total.
Extracting zip contents
Copying to target path G:\ZYVue\node_modules\chromedriver\lib\chromedriver
Done. ChromeDriver binary available at G:\ZYVue\node_modules\chromedriver\lib\chromedriver\chromedriver.exe

> core-js@2.6.9 postinstall G:\ZYVue\node_modules\core-js //这里可以看到位置
> node scripts/postinstall || echo "ignore"

Thank you for using core-js ( https://github.com/zloirock/core-js ) for polyfilling JavaScript standard library!

The project needs your help! Please consider supporting of core-js on Open Collective or Patreon:
> https://opencollective.com/core-js
> https://www.patreon.com/zloirock

Also, the author of core-js ( https://github.com/zloirock ) is looking for a good job -)


> uglifyjs-webpack-plugin@0.4.6 postinstall G:\ZYVue\node_modules\webpack\node_modules\uglifyjs-webpack-plugin
> node lib/post_install.js

npm notice created a lockfile as package-lock.json. You should commit this file.
npm WARN optional SKIPPING OPTIONAL DEPENDENCY: fsevents@1.2.9 (node_modules\fsevents):
npm WARN notsup SKIPPING OPTIONAL DEPENDENCY: Unsupported platform for fsevents@1.2.9: wanted {"os":"darwin","arch":"any"} (current: {"os":"win32","arch":"x64"})

added 1518 packages from 1065 contributors and audited 31274 packages in 129.427s
found 84 vulnerabilities (65 low, 8 moderate, 10 high, 1 critical)
 run `npm audit fix` to fix them, or `npm audit` for details

# Project initialization finished!
# ========================

To get started:

 cd ZYVue
  npm run dev

Documentation can be found at https://vuejs-templates.github.io/webpack

G:\>  cd ZYVue
G:\ZYVue>  npm run dev // 运行命令，运行结果如下

> vu@1.0.0 dev G:\ZYVue
> webpack-dev-server --inline --progress --config build/webpack.dev.conf.js

12% building modules 21/31 modules 10 active ...template&index=0!G:\ZYVue\src\App.vue{ parser: "babylon" } is depre 95% emitting

 DONE  Compiled successfully in 2274ms                                                       22:31:51

 I  Your application is running here: http://localhost:8080
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110
```

在浏览器上运行上面的命令：（如下图，则成功）
![在这里插入图片描述](https://img-blog.csdnimg.cn/2019061121523975.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
任务结束命令：
ctrl+c，选择Y即可停止项目的运行（关于这个命令有时是ctrl+v）

```
 DONE  Compiled successfully in 2274ms                                                       22:31:51

 I  Your application is running here: http://localhost:8080                             终止批处理操 作吗(Y/N)? y

G:\ZYVue>
12345
```

去G盘查看自己创建ZYVue
![img](https://img-blog.csdnimg.cn/20190611214913674.png)
打开webstream打开该文件，可看到目录如下（并附上解释）：
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190611223319346.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
那么Vue的运行过程：（个人认为这个过程你懂了后面写Vue理解更加深刻）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190611225607977.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
测试Vue（其实你只需要模仿HelloWorld一套流程即可）：
1.在从components下新建test的Directory目录用于测试，并建一个Test.vue，模板植入，运行。
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190611233618602.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
访问http://localhost:8080/test但是始终没有得到我想要的效果
于是我修改了HelloWord
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190611235509616.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
访问成功。这显然无法完成后续的开发工作。于是去解决上面，访问始终都是hello界面的问题。
仔细看了代码，发现并没有问题，但是终于看到图片是在App.vue中就引入了，删除得到预想的结果：（给出不删除的结果）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190612002538960.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
到此我们Vue环境就配置好了，其实配置什么，你真的没做什么，只不过，你要搞清楚这一套流程。

关于SpringBoot项目的创建，就更简单了直接maven创建或者去官网Spring Initializr下载demo.zip即可。
创建一个SpringBoot项目，后建议个controller里面编写一个测试类：

```
package com.cun.controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;

@Controller
public class TestController {


 @RequestMapping("/testSpringBoot")
 @ResponseBody
 public String testSpringBoot() {
 return "恭喜您！测试成功，您可以开心的编写代码了，码农哥哥！";
}
}
12345678910111213141516
```

运行结果：（到此，我们就完成了，前后端的请求是能够处理的）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190612233057171.png)
接下来就是SpringBoot的常用配置。
1，Logback日志管理配置。这也是Springboot默认的日志管理。我们只需要级别输出即可。
在resources下新建logback.xml(官方推荐使用logback-spring.xml)

```
<?xml version="1.0" encoding="UTF-8"?>  
<configuration scan="true" scanPeriod="60 seconds" debug="false">  
<!-- 定义日志文件 输入位置 -->  
<property name="log_dir" value="G:/logs" />  
<!-- 日志最大的历史 30天 -->  
<property name="maxHistory" value="30"/>  

<appender name="STDOUT" class="ch.qos.logback.core.ConsoleAppender">  
<encoder>  
    <pattern>%d{yyyy-MM-dd HH:mm:ss} [%thread] %-5level %logger -%msg%n</pattern>  
</encoder>  
</appender>  

<appender name="ERROR" class="ch.qos.logback.core.rolling.RollingFileAppender">  
<filter class="ch.qos.logback.classic.filter.LevelFilter">  
    <level>ERROR</level>  
    <onMatch>ACCEPT</onMatch>  
    <onMismatch>DENY</onMismatch>  
</filter>  
<rollingPolicy class="ch.qos.logback.core.rolling.TimeBasedRollingPolicy">  
    <fileNamePattern>${log_dir}/%d{yyyy-MM-dd}/error-log.log</fileNamePattern>  
    <maxHistory>${maxHistory}</maxHistory>  
</rollingPolicy>  
<encoder>  
    <pattern>%d{yyyy-MM-dd HH:mm:ss.SSS} [%thread] %-5level %logger - %msg%n</pattern>  
</encoder>  
</appender>  

<appender name="INFO" class="ch.qos.logback.core.rolling.RollingFileAppender">  
<filter class="ch.qos.logback.classic.filter.LevelFilter">  
    <level>INFO</level>  
    <onMatch>ACCEPT</onMatch>  
    <onMismatch>DENY</onMismatch>  
</filter>  
<rollingPolicy class="ch.qos.logback.core.rolling.TimeBasedRollingPolicy">  
    <fileNamePattern>${log_dir}/%d{yyyy-MM-dd}/info-log.log</fileNamePattern>  
    <maxHistory>${maxHistory}</maxHistory>  
</rollingPolicy>  
<encoder>  
    <pattern>%d{yyyy-MM-dd HH:mm:ss.SSS} [%thread] %-5level %logger - %msg%n</pattern>  
</encoder>  
</appender>  

<appender name="DEBUG" class="ch.qos.logback.core.rolling.RollingFileAppender">  
<filter class="ch.qos.logback.classic.filter.LevelFilter">  
    <level>DEBUG</level>  
    <onMatch>ACCEPT</onMatch>  
    <onMismatch>DENY</onMismatch>  
</filter>  
<rollingPolicy class="ch.qos.logback.core.rolling.TimeBasedRollingPolicy">  
    <fileNamePattern>${log_dir}/%d{yyyy-MM-dd}/debug-log.log</fileNamePattern>  
    <maxHistory>${maxHistory}</maxHistory>  
</rollingPolicy>  
<encoder>  
    <pattern>%d{yyyy-MM-dd HH:mm:ss.SSS} [%thread] %-5level %logger - %msg%n</pattern>  
</encoder>  
</appender>  

<logger name="com.cun" level="debug"/>

<root level="debug">  
<appender-ref ref="STDOUT" />  
<appender-ref ref="ERROR" />  
<appender-ref ref="INFO" />  
<appender-ref ref="DEBUG" />  
</root>
</configuration>  
12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667
```

还需要/vsCode/src/main/resources/application.yml或application.properties中配置
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190613000444476.png)
运行项目请求上面的测试类：（先清空，在请求，可以看到日志打印出）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190613000550471.png)
查看我们配置目录：（也可以看到日志写入文件）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190613000728766.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
到此，日志管理就配置完成。（这里特意说明一点配置debug的配置可以考虑不要，其次还可以优化具体导指定的包，比如这里我偷懒logger name=“com.cun” level="debug"直接配了总体包，其实完全可以具体指定哪里输出）

2，Mybatis的整合。（这里就采用springboot 2.0 默认连接池Hikari）
在我们上面配置的日志后，测试。依赖你有但是没用到，就可以看到console中很多配置信息，需要加载和怎么条件下加载。里面就涉及到数据库信息。
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190613002218285.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
那么进入主题，整合Mybatis + Postgresql。
在pom.xml中导入mybatis和postgresql依赖：

```
	<!-- 为了数据能够显出，引入对象互转json形式依赖 -->
    <dependency>
        <groupId>com.fasterxml.jackson.core</groupId>
        <artifactId>jackson-databind</artifactId>
        <version>2.9.8</version>
    </dependency>
    
    <dependency>
        <groupId>com.fasterxml.jackson.core</groupId>
        <artifactId>jackson-core</artifactId>
        <version>2.9.8</version>
    </dependency>
    <dependency>
        <groupId>com.fasterxml.jackson.core</groupId>
        <artifactId>jackson-annotations</artifactId>
        <version>2.9.8</version>
    </dependency>
    <!-- 数据库+Mybatis依赖 -->
    <dependency>
        <groupId>org.mybatis.spring.boot</groupId>
        <artifactId>mybatis-spring-boot-starter</artifactId>
        <version>2.0.1</version>
    </dependency>
    <dependency>
        <groupId>org.postgresql</groupId>
        <artifactId>postgresql</artifactId>
        <version>42.2.5</version>
    </dependency>
    <!-- 这里引入lombok来简化代码，不过本地你也必须保证要添加配置，详细请看lombok官网的介绍 
	否则你是运行不成功的-->
    <dependency>
        <groupId>org.projectlombok</groupId>
        <artifactId>lombok</artifactId>
        <version>1.18.8</version>
        <scope>provided</scope>
    </dependency>
123456789101112131415161718192021222324252627282930313233343536
```

首先说明这里有两种方式整合mybatis:① 依赖于mapper；② 依赖注解。
① 依赖于mapper
我们先用我们最为常见的方式，方式一依赖于mapper文件。
数据库建表+数据insert

```
drop table test_user; // 删除可能存在表

// 创建表
create table "public"."test_user" (
user_no Integer,
user_name varchar(16) COLLATE "default" NOT NULL,
user_sex varchar(2) COLLATE "default" NOT NULL
)
WITH (OIDS=FALSE)
;
ALTER TABLE "public"."test_user" OWNER TO "postgres";

select * from test_user //测试建表结果
// 插入数据
insert into test_user(user_no,user_name,user_sex) values(1001,'zhouyi','男'); 
insert into test_user(user_no,user_name,user_sex) values(1004,'qianqian','女')
12345678910111213141516
```

结果：
![在这里插入图片描述](https://img-blog.csdnimg.cn/2019061413373685.png)
编写程序严格过程（从底层写道controller(这个过程仅纯个人想法，觉得这样逻辑会省很多事情，因为有了请求是开始，有了mapper映射是想要结果。剩下的都是中间过程，这样在写大型的项目处理中，你得逻辑不会走着走着就不知道了)）：
对应的数据库实体对象：

```
package com.cun.entity;

import org.springframework.stereotype.Component;

import lombok.Data;
import lombok.Getter;
import lombok.Setter;

@Data
@Getter
@Setter
@Component
public class TestUser {

private Integer testUserNo;

private String testUserName;

private String testUserSex;
}
1234567891011121314151617181920
```

先写mapper（即你请求时什么，想得到什么）

```
package com.cun.mapper;

import java.util.List;

import org.apache.ibatis.annotations.Mapper;
import org.mybatis.spring.annotation.MapperScan;

import com.cun.entity.TestUser;

// 这里说下编程的思路（仅个人意见）：写代码的顺序从底层代码写起
@Mapper // 利用这个注解让mybatis自动加载
public interface TestUserMapper {

// 这里我们先规划：我们要去跟增删改查
// 1, 查数据
public List<TestUser> geTestUsers() throws Exception;

// 2，改数据
public void updateTestUser(TestUser testUser) throws Exception;

// 3, 新增用户
public void addTestUser(TestUser testUser) throws Exception;

//4, 根据no删除
public void deleteTestUser(Integer testUserNo) throws Exception;
}
1234567891011121314151617181920212223242526
```

写好对应的TestUser.xml

```
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE mapper PUBLIC "-//mybatis.org//DTD Mapper 3.0//EN" "http://www.mybatis.org/dtd/mybatis-3-mapper.dtd">
<mapper namespace="com.cun.mapper.TestUserMapper">
<!-- 对应查数据，带返回值，无参数入力 -->
<select id="geTestUsers" resultType="com.cun.entity.TestUser">
    select * from test_user
</select>

<!-- 关于改数据，总体入力是不好的，这里单纯为了说明问题 -->
<!-- 想了想怕误导别人这里就不写了 -->

<!-- 新增用户，不带返回值，带入力参数 -->
<insert id="addTestUser" parameterType="com.cun.entity.TestUser">
    insert into test_user(user_no,user_name,user_sex) values(#{testUserNo},#{testUserName},${testUserSex})
</insert>

<delete id="deleteTestUser" parameterType="Integer">
    delete from test_user where user_no = #{testUserNo}
</delete>
</mapper>
1234567891011121314151617181920
```

接着在application.yml或application.properties中配置数据库+mapper加载路径。

```
#数据库连接  MyFramework 数据库名
spring:
	datasource:
  		driverClassName: org.postgresql.Driver
 		url: jdbc:postgresql://localhost/MyFramework 
  		username: postgres
  		password: zhouyi

#Mapper配置加载路径
mybatis:
 	mapper-locations: classpath:mapper/*.xml
	configuration:
  		 map-underscore-to-camel-case: true
12345678910111213
```

相应的接口类：

```
package com.cun.service;

import java.util.List;


import com.cun.entity.TestUser;

//@Service // 这里接口不加这个注解
public interface TestUserService {

public List<TestUser> geTestUsers() throws Exception;

public void updateTestUser(TestUser testUser) throws Exception;

public void addTestUser(TestUser testUser) throws Exception;

public void deleteTestUser(Integer testUserNo) throws Exception;
}
123456789101112131415161718
```

接口对应的实现类：

```
package com.cun.serviceImpl;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.cun.entity.TestUser;
import com.cun.mapper.TestUserMapper;
import com.cun.service.TestUserService;

@Service // 这个注解应该加载具体的实现类上
public class TestUserServiceImpl implements TestUserService {

@Autowired
private TestUserMapper mapper;

@Override
public List<TestUser> geTestUsers() throws Exception {

    return mapper.geTestUsers();
}

@Override
public void updateTestUser(TestUser testUser) throws Exception {
    mapper.updateTestUser(testUser);
}

@Override
public void addTestUser(TestUser testUser) throws Exception {
    mapper.addTestUser(testUser);
}

@Override
public void deleteTestUser(Integer testUserNo) throws Exception {
    mapper.deleteTestUser(testUserNo);
}

}
123456789101112131415161718192021222324252627282930313233343536373839
```

最后到控制类：

```
package com.cun.controller;

import java.util.List;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;

import com.cun.entity.TestUser;
import com.cun.service.TestUserService;

@Controller
public class TestUsercontroller {

// 依赖注入
@Autowired
private TestUserService service;

@Autowired
private TestUser user; // 这个你也可以不用注解的方式，自己new

// 显示出所有使用者
@RequestMapping("/showList")
@ResponseBody
public List<TestUser> showList() throws Exception {
    List<TestUser> users = service.geTestUsers();
    System.out.println(users);
    return users;
}

// 增加使用者
@RequestMapping("/addUser")
public String addUser(TestUser user) throws Exception {
    service.addTestUser(user);
    return  user.getTestUserName() + "增加使用者成功";
}

// 删除
@RequestMapping("/deleteUser")
public String deleteUser(Integer testUserNo) throws Exception {
    service.deleteTestUser(testUserNo);
    return "删除"+ testUserNo +"成功";
}
}
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748
```

这里有一个坑：
我还需要在主类：

```
package com.cun;

import org.mybatis.spring.annotation.MapperScan;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
@MapperScan("com.cun.mapper") // 这个配置和上面的mapper配置中@Mapper 相互作用才能正常读到mapper
public class VsCodeApplication {

public static void main(String[] args) {
	SpringApplication.run(VsCodeApplication.class, args);
}
}
1234567891011121314
```

到此我们就配置写完了。
利用postman测试：（结果让我失望了，数据库有数据，查出却为空）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190614140721924.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
回头从新看一遍程序，debug下查了Console日志。发现数据库的值是已经取出来的，但是写出对象是出错。这是为什么呢？于是我们去查出数据转为对象的地方。
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190614141041112.png)
其实原因很简单。看如图分析：
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190614145324404.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
resultMap这个主要针对你有返回值的情况。不多说我们在映射中添加两者转化过程，直接代码。
写之前，你需要的认知：https://blog.csdn.net/weixin_42603009/article/details/91981037

```
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE mapper PUBLIC "-//mybatis.org//DTD Mapper 3.0//EN" "http://www.mybatis.org/dtd/mybatis-3-mapper.dtd">
<mapper namespace="com.cun.mapper.TestUserMapper">
<result property="testUserNo" column="user_no"/>
<result property="testUserName" column="user_name"/>
<result property="testUserSex" column="user_sex"/>
</resultMap>

<select id="geTestUsers" resultMap="TestUser">
    select * from test_user
</select>

<insert id="addTestUser" parameterType="com.cun.entity.TestUser">
    insert into test_user(user_no,user_name,user_sex) values(#{testUserNo},#{testUserName},${testUserSex})
</insert>

<delete id="deleteTestUser" parameterType="Integer">
    delete from test_user where user_no = #{testUserNo}
</delete>
</mapper>
1234567891011121314151617181920
```

再次利用ppostman请求得到如下结果：（另外两个测试不给出，后面的整合篇幅还很大）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190614155347783.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
第一种就整合完成了

另外这里说说第二种mybatis配置方式（个人觉得这种方式用来玩还不错，但是你要用大型项目是不可能，纯属个人见解，或许随着认知的加深这种方式也有大做用）
针对第一种方式中以上的增删改查的操作，有四个注解@Select、@Delete、@Insert、@Update，在注解中加上之前在xml中写的sql就行了。这样子就不需要我们的xml文件了。
代码示例如下：(以下代码职位说明这种概念，并未测试)

```
package com.cun.mapper;

import java.util.List;

import org.apache.ibatis.annotations.Mapper;
import org.mybatis.spring.annotation.MapperScan;

import com.cun.entity.TestUser;

@Mapper // 利用这个注解让mybatis自动加载
public interface TestUserMapper {

// 1, 查数据
// 这里查数据不太举例子，个人能力有限，理解不到用这种方式来写查并返回给实体
@Select("select * from test_user")
public List<TestUser> geTestUsers() throws Exception;

// 2，改数据
// 这个也不太说，大致参考下面两种。
@Update("update user set username = #{name} where id = #{id}")
public void updateTestUser(TestUser testUser) throws Exception;

// 3, 新增用户
 @Insert("insert into test_user(user_no,user_name,user_sex) values(#{testUserNo},#{testUserName},${testUserSex})"）
public void addTestUser(TestUser testUser) throws Exception;

//4, 根据no删除
@Delete("delete from test_user where user_no = #{testUserNo}")
public void deleteTestUser(Integer testUserNo) throws Exception;
}
123456789101112131415161718192021222324252627282930
```

到此我们mybatis整合+相关概念就完成了。

接下来就是**前后台数据对接**如何对接上的问题。
但是如何对接？目前的对接处理方式我所了解的有三种：ajax、axios、fetch。在接着写下面的内容之前，我想我有必要去研究这三个的用法区别。
请参考：https://blog.csdn.net/weixin_42603009/article/details/92079285
完全没有用过axios，这也是现在流行，浏览器支持最好的方式。我们就来尝试按官方文档使用axios实现我们前后台分离数据对接。

axios安装有三种方式：1，使用 npm；2，使用 bower；3，使用 cdn
这里使用npm，在WebStorm的项目根目录下：

```
npm install axios -S
1
```

结果如下：
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190615132806280.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
这里我安装完成，照理来说是可以直接使用的，但是这不符合现实情况，比如请求可能出现各种错误，最常见是代码错误，业务请求方式错误。我们的目标是只是处理请求成功。

因为我们有必要对前端请求进行封装，封装完成后，将前端错误统一处理。这样，开发者只需要在每一次发送请求的地方处理请求成功的情况即可。

首先我们来尝试用两种方式fetch和axios实现跨域请求处理：
我们后台的URI:http://127.0.0.1:8000/showList
首先在config目录下的index.js进行跨域设置：

```
 proxyTable: {
  '/api': {
     target:"http://127.0.0.1:8000/",
     chunkOrigins: true,// 允许跨域
    pathRewrite:{
          '^/api': '' // 路径重写，使用"/api"代替target.
     }
   }
},
123456789
```

fetch测试请求处理：
在App.vue中：

```
<template>
	<div id="app">

	<router-view/>
  	</div>
</template>

<script>
export default {
  name: 'App',
 data(){
 return{

  }
  },
  // fetch实现跨域
  created() {
// fetch方式实现跨域
fetch("/api/showList",{
  method:"POST",
}).then(res => {
  console.log(res)
})
  }
}
</script>
1234567891011121314151617181920212223242526
```

在后台设置断点，访问http://127.0.0.1:8080/#/
![在这里插入图片描述](https://img-blog.csdnimg.cn/2019061722123526.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
后台进入断点：
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190617221331168.png)
结果：（请求处理成功，但是返回值，并没有打印处理来，这个问题后面处理）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190617221449219.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
Axios请求测试：(操作同上，下面只给出程序 + 结果)

```
<template>
 <div id="app">
	<h3><router-link to="/test">test画面</router-link></h3>
 	<router-view/>
 </div>
</template>

<script>
export default {
name: 'App',
 data(){
	return{

}
 },
  //实现跨域
  created() {
	// fetch方式实现跨域
	this.$axios.post("/api/showList").then(res=>{
	 console.log(res)
  })
  }

}
</script>
12345678910111213141516171819202122232425
```

测试结果：（结果为自己预想的结果，可以看到请求成功，并返回和上面postman测试相同的结果）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190617222951462.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
到此关于跨域就解决了，并且前后台也贯通了。

数据报格式设计：
请求格式设计：（暂时这样设计，后面可能根据实际改动）

```
// 请求格式，针对postman
{ 
"requestNo":null,
"requsetTimeStamp":null,
"type":null,
"userid":null,
"AdminId":null,
"userType":null,
"token":null,
"usedates":null,
"requestData":null
}
123456789101112
```

3，定义一个响应拦截器。响应这一块数据结构是需要设计的。
具体设计：
① 返回的数据格式：

```
// 返回格式定义，这里就是用最常见的格式
{
"requestNo":null,
"responseTimestamp":null,
"token":null,
"userid":null,
"userType":null,
"responseCode":null,
"errorCode":null,
"responseData":{
	"usr":{
		"testUserNo":123,
		"testUserName":"周毅",
		"testUserSex":"男"
		}
}
}
1234567891011121314151617
```

简单来说上面封装的对应代码：
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190619211013173.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
回到上面的问题。上面数据报的设计就是为了更好写拦截器。
正如上面所说，存在的各种各样的问题，我们关心的只有正确的请求，所以进一步前端请求封装：
首先我们要明白设置拦截器的目的是什么,当我们需要统一处理http请求和响应时我们通过设置拦截器。处理方便很多axios 中，有请求拦截器，也有响应拦截器。都在axios.interceptors中。
大致思路：
1，引入axios、错误/成功信息显示element-ui的loading和message
2，定义请求拦截器处理。
请求/响应拦截（这里是指对http的拦截，暂时这么定义，后面权限设计时会改动）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190619221540765.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
编写测试接口用返回封装：

```
package com.cun.controller;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;

import com.cun.common.JsonAndObject;
import com.cun.common.JsonRequestBody;
import com.cun.common.JsonResponseBody;
import com.cun.entity.TestUser;

@Controller
public class TestController {

@RequestMapping("/testResAndReq")
  @ResponseBody
 // @RequestBody 不能是空参数，这是这样写巨大缺陷，请求不能为空
 // 
 // @RequestBody（required = false）
 public String  testResAndReq(@RequestBody JsonRequestBody<Map<String, Object>> requestBody,
      HttpServletRequest request, HttpServletResponse response) {
  String jsonString = null;
  TestUser usr = new TestUser();
  usr.setTestUserNo(123);
  usr.setTestUserName("周毅");
  usr.setTestUserSex("男");
  Map<String, Object> map = new HashMap<String, Object>();
  map.put("usr", usr);
  JsonResponseBody<Map<String, Object>> responseBody = new JsonResponseBody<>();
  responseBody.setResponseData(map);
  jsonString = JsonAndObject.translateObjectToJsonString(responseBody);
  return jsonString;
 }
}
12345678910111213141516171819202122232425262728293031323334353637383940414243
```

postman的结果：（很多值没设置，单纯是为了测试）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190619222028839.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
Vue画面上测试：
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190619223902118.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
上面报错org.springframework.http.converter.HttpMessageNotReadableException: Required request body is missing解决方式：（这里在说明一点，深入研究的心要深一点，我们点击equest body，我我们可以看到默认是true,也就是必须带参数，所以我设置required = false即可）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20190619224011388.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MjYwMzAwOQ==,size_16,color_FFFFFF,t_70)
到此我们基础框架就搭完了。接下来是Vue画面设计和后台相关技术的整合。