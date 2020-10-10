package _01_Class.demo02;

public class Person {
    // 成员变量
    private String name;

    // 类变量
    public static String nation = "wo";

    // 静态代码块
    static {
        System.out.println("Person static !");
        nation = "中国";
    }

    // 类方法
    public static String getNation() {
        return nation;
    }

    public static void main(String[] args) {
        System.out.println("Person main running ... ");
        Person person = new Person();
    }

    // 无参构造
    public Person() {
        System.out.println("无参构造");
    }

    // 有参构造
    public Person(String name) {
        System.out.println("有参构造");
        this.name = name;
    }
    // 成员方法
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
}
