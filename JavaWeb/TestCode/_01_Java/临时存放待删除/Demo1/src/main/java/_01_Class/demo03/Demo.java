package _01_Class.demo03;

import _01_Class.demo03.Person;

public class Demo {
    public static void main(String[] args) {
        Student student = new Student();
        System.out.println(student);

        int i = 0;
        System.out.println(i);

        Person person = new Student("李四", 90);
        person.setName("Mr.Li");
        System.out.println(person.getName());
        System.out.println(person);


    }
}
