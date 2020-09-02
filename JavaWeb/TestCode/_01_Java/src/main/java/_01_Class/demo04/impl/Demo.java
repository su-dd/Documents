package _01_Class.demo04.impl;

import _01_Class.demo04.Animal;

public class Demo {
    public static void main(String[] args) {
        Animal animal = new Tiger();
        animal.eat();
        animal.play();
        animal.sleep();

        if (Tiger.class.isInstance(animal))
        {
            Tiger tiger1 = (Tiger) animal;
            tiger1.hunt();
        }

        String str = "abcd";

        System.out.println(String.class.isInstance(str)); //true;
        //自身类.class.isAssignableFrom(自身类或子类.class)  返回true
        System.out.println(String.class.isAssignableFrom(animal.getClass())); //true;
        System.out.println(Tiger.class.isAssignableFrom(String.class)); //true;

        try {
            Tiger animal1 = Tiger.class.newInstance();
        } catch (InstantiationException e) {
            e.printStackTrace();
        } catch (IllegalAccessException e) {
            e.printStackTrace();
        }

    }}
