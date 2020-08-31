package _01_Class.demo04.impl;

import _01_Class.demo04.Animal;
import _01_Class.demo04.Cat;

public class Tiger implements Animal, Cat {

    public Tiger() {
    }

    public Tiger(String name) {
    }


    @Override
    public void eat() {
        // Animal, Cat
        System.out.println("Tiger eat ... ");
    }

    @Override
    public void play() {
        // Animal
        System.out.println("Tiger play ... ");
    }

    @Override
    public void hunt() {
        // Cat
        System.out.println("Tiger hunt ... ");
    }
}
