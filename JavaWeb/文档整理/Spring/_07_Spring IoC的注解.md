# Spring IoC的注解

## 1 基本定义

随着Spring程序的日益增大，Xml注解文件也会变得繁杂不易维护。所以注解开发成为你Spring的趋势。

基础定义在`Spring DI和IoC理解` 和 `Spring IoC的Xml配置`已经阐述清楚，不做赘述。



## 2 Xml配置

### 2.1 Beas属性

添加属性： `xmlns:context`

```xml
xmlns:context="http://www.springframework.org/schema/context"
```

属性`xsi:schemaLocation`数据增加：

```xml
http://www.springframework.org/schema/context http://www.springframework.org/schema/context/spring-context.xsd
```

### 2.2 组价扫描

标签：`context:component-scan`

```xml
<context:component-scan base-package="com.study"/>
```

**XmlDemo:**

```xml
<beans xmlns="http://www.springframework.org/schema/beans"
       xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
       xmlns:context="http://www.springframework.org/schema/context"
       xsi:schemaLocation="
       http://www.springframework.org/schema/context http://www.springframework.org/schema/context/spring-context.xsd
       http://www.springframework.org/schema/beans http://www.springframework.org/schema/beans/spring-beans.xsd">
    <!--  组价扫描  -->
    <context:component-scan base-package="com.study"/>
</beans>
```



## 3 注解

### 3.1 实例化Bean

对应Xml的`<bean>`标签， 标识需要Spring进行实例化

| 注解          | 说明                              |作用位置 |
| ------------- | ------------------------- | --------- |
| `@Component`  | 使用在类上用于实例化Bean          |类声明上|
| `@Controller` | 使用在web层类上用于实例化Bean     |类声明上|
| `@Service`    | 使用在service层类上用于实例化Bean |类声明上|
| `@Repository` | 使用在dao层类上用于实例化Bean     |类声明上|

**Demo:**

```java
@Component("school")
public class School {
    public School() {
        System.out.println("——运行 School 无参构造——");
    }
}
```



### 3.2 设置Bean范围

对应Xml的`<bean>`标签的`scope`属性

| 注解     | 说明               | 作用位置 |
| -------- | ------------------ | --------- |
| `@Scope` | 标注Bean的作用范围 |类声明上|

**Demo:**

```java
@Component("school")
@Scope("prototype")
public class School {
    public School() {
        System.out.println("——运行 School 无参构造——");
    }
}
```



### 3.3 设置Bean的初始化和销毁

对应Xml的`<bean>`标签的属性`init-method` 、`destroy-method`

| 注解             | 说明          |作用位置 |
| ---------------- | --------------------------- | --------- |
| `@PostConstruct` | 使用在方法上标注该方法是Bean的初始化方法 |函数上|
| `@PreDestroy`    | 使用在方法上标注该方法是Bean的销毁方法   |函数上|

**Demo:**

```java
@Component("school")
@Scope("singleton")
public class School {
    public School() {
        System.out.println("——运行 School 无参构造——");
    }

    @PostConstruct
    public void initValue() {
        System.out.println("——运行 School 初始化函数——");
    }

    @PreDestroy
    public void destroyValue() {
        System.out.println("——运行 School 销毁函数——");
    }
}
```



### 3.4 依赖注入

| 注解        | 说明                 |作用位置 |
| ----------- | -------------------- | --------- |
| `@Value`   | 注入普通属性                                   |set函数上、或者 参数上|
| `@Autowired` | 使用在字段上用于根据类型依赖注入（byType） |set函数上、或者 参数上|
| `@Qualifier` | 结合@Autowired一起使用用于根据名称进行依赖注入（byName） |set函数上、或者 参数上|
| `@Resource` | 相当于@Autowired+@Qualifier，按照名称进行注入（byName） |set函数上、或者 参数上|

#### 3.4.1 `@Value`

```java
@Service("information110")
public class Information110 implements Information {
    private String phone;
    @Value("110")
    public void setPhone(String phone) {
        this.phone = phone;
    }
}
```



#### 3.4.2 `@Autowired`

按照类型注册

```java
@Service("information110")
public class Information110 implements Information {
    ...省略...
}

@Controller("studentXiaoHong")
public class StudentXiaoHong implements Student {
    @Autowired
    private Information110 information;
}
```



#### 3.4.3 `@Qualifier`

配合@Autowired一起使用，按照名称注入

```java
@Controller("studentXiaoHong")
public class StudentXiaoHong implements Student {
    private Information110 information;
    
    @Autowired
    @Qualifier("information110")
    public void setInformation(Information information) {
        this.information = information;
    }
}
```



#### 3.4.4 `@Resource`

`@Resource `默认是按照名称去注入

```java
@Controller("studentXiaoHong")
public class StudentXiaoHong implements Student {
    @Resource
    private Information information110;
}
```

使用`name`属性按照名称注入

```java
@Controller("studentXiaoHong")
public class StudentXiaoHong implements Student {
    @Resource(name = "information110")
    private Information information;
}
```

使用`type`属性按照l类型注入

```java
@Controller("studentXiaoHong")
public class StudentXiaoHong implements Student {
    @Resource(type = com.study.injection.info.impl.Information110.class)
    private Information information;
}
```



## 4 新注解

使用上面的注解还不能全部替代xml配置文件，还需要下面的注解

| 注解            | 说明                                                         |
| --------------- | ------------------------------------------------------------ |
| @ComponentScan  | 用于指定 Spring   在初始化容器时要扫描的包。                 |
| @Configuration  | 用于指定当前类是一个 Spring   配置类，当创建容器时会从该类上加载注解 |
| @Bean           | 使用在方法上，标注将该方法的返回值存储到 Spring 容器中       |
| @PropertySource | 用于加载   .properties  文件中的配置                         |
| @Import         | 用于导入其他配置类                                           |

### 4.1 组件扫描 `@ComponentScan`

在上面我们是通过组件扫描，知道组件的位置

```xml
<!--  组价扫描  -->
<context:component-scan base-package="com.study.newAnnotation"/>
```

标记需要配合AnnotationConfigApplicationContext使用：

```java
@ComponentScan(value = "com.study.newAnnotation")
public class MainScanConfig {
}
public class MainApp {
    public static void main(String[] args) {
        ApplicationContext applicationContext = new AnnotationConfigApplicationContext(MainScanConfig.class);
        Information information = (Information) applicationContext.getBean("information110");
        System.out.println(information.info());

    }
}
```



### 4.2 `@Configuration`和`@Bean`

某些XMl配置的用法，通过以上的方式我们不能实现。如对于一个类创建不同的对象。 这是可以使用`@Configuration`和`@Bean`

`@Configuration`：指定对象是 Bean 定义的源。本质上是一个`@Component`。

`@Bean`：等价于Xml的`<bean>`，可以同任何`@Component`一起使用。但是通常只和`@Configuration`一起使用。`@Bean`默认是单例的，可以通过`@Scope`设置范围。

​	属性：

- `name`：等价于Xml里`<bean>`的`<id>`，自定义名称
- `initMethod` :等价于Xml里`<bean>`的`<init-method>`，指定初始化函数
- `destroyMethod ` :等价于Xml里`<bean>`的`<destroy-method >`，指定释放处理函数
- `autowireCandidate`：标准是否常用自动注入，两个值： true，false
- `autowire`：自动注入，有3个值：Autowire.NO ，Autowire.BY_NAME ，Autowire.BY_TYPE

```java
@ComponentScan(value = "com.study.newAnnotation")
public class MainScanConfig {
    @Bean(name = "information110")
    public Information getInformation110(){
        return new Information("110");
    }
}
```



### 4.3 `@Import`

导入配置类，同xml的`<import>`

```java
@Import(ServiceConfig.class)
@Import({ServiceConfig.class, RepositoryConfig.class})
```



### 4.4 `@PropertySource`

加载properties文件的配置,同Xml的`< context:property-placeholder>`

```java
@PropertySource("classpath:info.properties")
public class DataSourceConfiguration {
    @Value("${jdbc.xiaoming}")
    private String phone;
}
```



## 5、 容器的注解注入

### 5.1 @Autowired 或者 @Resource

`@Order`可指定顺序， 对有顺序的容器有效

StudentXiaoHong.java

```java
@Order(1)
@Controller("studentXiaoHong")
public class StudentXiaoHong implements Student {

    @Value("小红")
    private String name;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    @Override
    public String toString() {
        return "StudentXiaoHong{" +
                "name='" + name + '\'' +
                '}';
    }
}
```

StudentXiMing.java

```java
@Order(2)
@Controller("studentXiMing")
public class StudentXiMing implements Student {
    private String name;

    public String getName() {
        return name;
    }

    @Value("小明")
    public void setName(String name) {
        this.name = name;
    }

    @Override
    public String toString() {
        return "Student{" +
                "name='" + name + '\'' +
                '}';
    }
}
```

School.java

```java
public class School {
    @Autowired
    private List<Student> studentList;

    @Resource
    private Map<String, Student> studentMap;

    @Override
    public String toString() {
        return "School{" +
                "studentList=" + studentList +
                ", studentMap=" + studentMap +
                '}';
    }
}
```

数据：

```markdown
School
{
	studentList=
	[
		StudentXiaoHong{name='小红'},
		Student{name='小明'}
	],
	
	studentMap=
	{
		studentXiMing=Student{name='小明'},
		studentXiaoHong=StudentXiaoHong{name='小红'}
	}
}
```



这种注入只能对Bean有效果，普通类型不能注入。



## 6 Demo

Demo路径：https://github.com/su-dd/KnowledgeStack.git

具体路径：JavaWeb/TestCode/_03_Spring/Demo4