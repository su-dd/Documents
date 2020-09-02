package _01_Class.StackClass;

// 局部内部类
public class Demo {
    public static void main(String[] args) {
        Eat eat = new Eat() {
            @Override
            public void eat() {
                System.out.println("eat fruit");
            }
        };

        eat.eat();
    }
}
