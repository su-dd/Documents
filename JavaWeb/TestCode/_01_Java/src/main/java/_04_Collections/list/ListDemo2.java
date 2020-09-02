package _04_Collections.list;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class ListDemo2 {
    public static void main(String[] args) {
        // 创建集合对象
        List<String> list = new ArrayList<>();

        // 添加元素
        list.add("hello");
        list.add("world");

        //迭代器方式
        //Iterator<String> it=list.iterator();
        //while (it.hasNext()) {
        //    String s = it.next();
        //    if (s.equals("world")) {
        //        list.add("java"); //
        //    }
        //}

        // for循环方式
        for(int i=0; i < list.size(); i++) {
            String s = list.get(i);
            if (s.equals("world")) {
                list.add("java");
            }
        }

        // 输出集合对象
        System.out.println(list);
    }
}
