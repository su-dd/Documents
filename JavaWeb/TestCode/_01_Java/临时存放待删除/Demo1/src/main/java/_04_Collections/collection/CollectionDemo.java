package _04_Collections.collection;

import java.util.ArrayList;
import java.util.Collection;

public class CollectionDemo {
    public static void main(String[] args) {
        //创建collection集合的对象
        Collection<String> c = new ArrayList<String>();
        //添加元素：boolean add(E e)
        c.add("hello");
        c.add("worid");
        c.add("java");
        //输出集合对象
        System.out.println(c);
    }
}
