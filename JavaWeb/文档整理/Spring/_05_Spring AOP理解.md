# Spring AOP理解



理解AOP前先要知道OOP，OOP为Object Oriented Programming的缩写，译为面向对象编程。在OOP出现之前，我们使用的是OPP（Procedure Oriented Programming，面向过程编程）；

## 1面向过程编程OPP

OPP（Procedure Oriented Programming，面向过程编程）认为程序是一系列的命令的集合，即为一组函数的顺序执行。程序通过大函数切成小函数来降低系统复杂度。OPP编程方式是通过对事物发展运行过程的描述，进行编程。



## 2 面向对象编程OOP

OOP（Object Oriented Programming，面向对象编程） 认为程序是一系列对象的集合，每个对象有自己的属性，方法，关系。程序运行就是一系列的消息、调用在各个对象之间传递的过程。OOP编程方式是通过对事物本事和事物关系的描述，进行编程。



## 3 面向切面编程AOP

AOP（Aspect Oriented Programming，面向切面编程）是基于OOP的延生出来的编程思想。在AOP的思维中，我们的程序业务分为**主体核心业务**和**周边辅助业务**。

主体核心业务为程序的主要实体，主流程。

周边辅助业务是伴生在核心业务旁的一些支持性的功能，他们需要在核心业务运行的某个阶段（切面）执行。

通过AOP，我们将核心业务和辅助业务之间断开关联，降低耦合；让他们可以分别独立开发，在通过AOP编织在一起运行。

