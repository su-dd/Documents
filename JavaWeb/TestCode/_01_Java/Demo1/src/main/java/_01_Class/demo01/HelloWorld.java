package _01_Class.demo01;

import java.sql.SQLOutput;
import java.util.ArrayList;
import java.util.List;

public class HelloWorld {
    public static void main(String[] args) {
        List<Integer> list = new ArrayList<Integer>();
        list.add(1);
        list.add(2);

        list.forEach(i -> System.out.println(i));

    }
}
