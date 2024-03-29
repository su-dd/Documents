# Spring IoC的Xml配置

## 1 Spring初识Bean

### 1.1 JavaBean的定义

`百度百科：`JavaBean 是一种JAVA语言写成的可重用组件。为写成JavaBean，类必须是具体的和公共的，并且具有无参数的[构造器](https://baike.baidu.com/item/构造器/9844976)。JavaBean 通过提供符合一致性设计模式的公共方法将内部域暴露成员属性，set和get方法获取。众所周知，属性名称符合这种模式，其他Java 类可以通过自省机制(反射机制)发现和操作这些JavaBean 的属性。



`RUMNOOB.com:`JavaBean 是特殊的 Java 类，使用 Java 语言书写，并且遵守 JavaBean API 规范。

接下来给出的是 JavaBean 与其它 Java 类相比而言独一无二的特征：

- 提供一个默认的无参构造函数。
- 需要被序列化并且实现了 Serializable 接口。
- 可能有一系列可读写属性。
- 可能有一系列的 getter 或 **setter** 方法。



### 1.2 SpringBean

SpringBean是受Spring管理的对象，所有能受Spring容器管理的对象都可以成为SpringBean。

基本配置：

```xml
<bean id="student" class="com.study.Student"/>
```

id：Bean实例在Spring容器中唯一标识

class：Bean的全限定名称



## 2 SpringBean实例化

### 2.1 SpringBean的范围

**Xml属性：**scope

**Bean有两种方式：**

1. singleton

   - 实例个数：1个
   - 创建时机：当Spring核心文件被加载时，创建

2. prototype

   - 实例个数：多个

   - 创建时机：当调用getBean()方法时实例化Bean

**xml配置Demo：**

```xml
<bean id="school" class="com.study.instantiation.School" scope="singleton"></bean>
<bean id="student" class="com.study.instantiation.Student" scope="prototype"></bean>
```



### 2.2 SpringBean的生命周期

singleton：

- 对象创建：当应用加载，创建容器时，对象就被创建了

- 对象运行：只要容器在，对象一直活着
- 对象销毁：当应用卸载，销毁容器时，对象就被销毁了

prototype：

- 对象创建：当使用对象时，创建新的对象实例
- 对象运行：只要对象在使用中，就一直活着
- 对象销毁：当对象长时间不用时，被 Java 的垃圾回收器回收了

init-method：指定类中的初始化方法名称

destroy-method：指定类中销毁方法名称

**xml配置Demo：**

```xml
<bean id="school" class="com.study.instantiation.School" scope="singleton" init-method="initValue" destroy-method="destroyValue"></bean>
```



### 2.3 SpringBean的创建方式

1. 使用构造函数，如果没有对应的构造函数将创建失败。

   **如无参构造Demo：**

   ```xml
   <bean id="school" class="com.study.instantiation.School"></bean>
   ```

   

2. 使用工厂实例化

   - 静态工厂方法

     ```java
     public class StaticFactoryBean {
         public static UserDao createSchool(){    
         return new School();
         }
     }
     ```

     ```xml
     <bean id="staticFactorySchool" class="com.study.instantiation.StaticFactoryBean" factory-method="createSchool"/>
     ```

   - 工厂实例的方法

     ```java
     public class DynamicFactoryBean {
         public School createSchool() {
             return new School();
         }
     }
     ```

     ```xml
     <bean id="dynamicFactoryBean" class="com.study.instantiation.DynamicFactoryBean"/>
     <bean id="dynamicFactorySchool" factory-bean="dynamicFactoryBean" factory-method="createSchool"/>
     ```


## 3 SpringBean依赖注入

### 3.1 构造函数注入

标签：constructor-arg

常用属性：

	- name：参数名
	- value：值，用于简单类型
	- ref：引用，用于引用类型，引用标记为bean的id

注意点：

​	通过构造函数创建Bean实例，所以需要对应的构造函数。



**XmlDemo:**

```xml
<bean id="information112" class="com.study.injection.Information">
    <constructor-arg name="phoneNum" value="112"/>
</bean>

<bean id="studentXiaoMing" class="com.study.injection.Student">
    <constructor-arg name="name" value="小明"/>
    <constructor-arg name="age" value="16"/>
    <constructor-arg name="information" ref="information112"/>
</bean>
```



### 3.2 set方法注入

标签：property

常用属性：

 - name：参数名
 - value：值，用于简单类型
 - ref：引用，用于引用类型，引用标记为bean的id

注意点：

​	通过无参构造创建Bean实例，所以需要无参构造。通过set函数注入，所以需要set函数（PS时机操作，不写set也行；搜索结果为通过反射直接赋值了）。



**XmlDemo:**

```xml
<!--  需要无参构造  -->
<bean id="studentXiaoHong" class="com.study.injection.Student">
    <property name="name" value="小红"/>
    <property name="age" value="16"/>
    <property name="information" ref="information110"/>
</bean>
```

### 3.3 P命名空间注入

beans标签增加属性引用P命名空间  `xmlns:p="http://www.springframework.org/schema/p"`

实际效果：

```xml
<beans xmlns="http://www.springframework.org/schema/beans"
       xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
       xmlns:p="http://www.springframework.org/schema/p"
       xsi:schemaLocation="http://www.springframework.org/schema/beans http://www.springframework.org/schema/beans/spring-beans.xsd">
</beans>
```

P命名空间的本质也是Set方法注入，所以注意点也同Set方法注入。



**XmlDemo：**

```xml
<bean id="studentXiaoFang" class="com.study.injection.Student" p:name="小芳" p:age="15" p:information-ref="information110"/>
```

于P命名空间相对的有一个C命名空间，本质上就是构造方法注入；



### 3.4 不同类型注入

注入的类基本可以分为3种：基本类型，引用类类，集合类型。

上述注入方式中已经演示了：基本类型和引用类型，分别使用`value`和`ref`属性；这里主要演示集合类型。

**List集合：**

标签：list

**XmlDemo:**

```xml
<property name="studentNames">
    <list>
        <value>小红</value>
        <value>小明</value>
        <value>小芳</value>
        <value>小王</value>
    </list>
</property>
<property name="mathClass">
    <list>
        <bean id="studentXiaoWang" class="com.study.injection.Student" p:name="小王" p:age="17" p:information-ref="information112"/>
        <ref bean="studentXiaoMing"/>
    </list>
</property>
```



**Map集合：**

标签：map

**XmlDemo：**

```xml
<property name="studentMap">
    <map>
        <entry key="小明" value-ref="studentXiaoMing"/>
        <entry key="小红" value-ref="studentXiaoHong"/>
        <entry key="小芳" value-ref="studentXiaoFang"/>
        <entry key="小王" value-ref="studentXiaoWang"/>
    </map>
</property>
```



**Properties：**

标签：props

**XmlDemo：**

```xml
<property name="classTeacher">
	<props>
    	<prop key="math">大王</prop>
        <prop key="chinese">大明</prop>
        <prop key="english">大芳</prop>
    </props>
</property>
```



## 4引入其他配置文件

使用import导入

```xml
<import resource="appliactionContext-Student.xml"/>
```



## 5 Demo

Demo路径：https://github.com/su-dd/KnowledgeStack.git

具体路径：JavaWeb/TestCode/_03_Spring/Demo2