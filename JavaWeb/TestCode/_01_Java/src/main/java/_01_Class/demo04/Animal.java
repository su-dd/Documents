package _01_Class.demo04;

public interface Animal {
    public static String name = "000";
    public abstract void eat();
    public abstract void play();
    public default void sleep() {
        // 默认方法
        System.out.println("animal sleep .... ");
    }
}
