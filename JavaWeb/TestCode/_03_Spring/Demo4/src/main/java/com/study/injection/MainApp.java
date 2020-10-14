package com.study.injection;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class MainApp {
    public static void main(String[] args) {
        ApplicationContext applicationContext = new ClassPathXmlApplicationContext("applicationContext_injection.xml");
        Student student = (Student)applicationContext.getBean("student");
        System.out.println(student);
    }
}
