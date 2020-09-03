package _04_Collections.set;

import java.util.TreeSet;

public class TreeSetDemo2 {
    public static void main(String[] args) {
        //创建集合对象
        TreeSet<Student2> ts = new TreeSet<Student2>();
        //把学生添加到集合
        ts.add(new Student2("xishi", 29));
        ts.add(new Student2("wangzhaojun", 28));
        ts.add(new Student2("diaochan", 30));
        ts.add(new Student2("yangyuhuan", 33));
        ts.add(new Student2("linqingxia",33));
        ts.add(new Student2("linqingxia",33));
        //遍历集合
        for (Student2 s : ts) {
            System.out.println(s.getName() + "," + s.getAge());
        }
    }
}
