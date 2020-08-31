package _01_Class.demo03;

public abstract class Person {
    // 成员变量
    protected String name;

    private boolean live;

    // 无参构造
    public Person() {
    }

    // 有参构造
    public Person(String name) {
        this.name = name;
    }
    // 成员方法
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public boolean isLive() {
        return live;
    }

    public void setLive(boolean live) {
        this.live = live;
    }
}
