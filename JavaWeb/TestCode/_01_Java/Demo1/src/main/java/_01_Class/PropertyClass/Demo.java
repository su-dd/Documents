package _01_Class.PropertyClass;

public class Demo {
    public static void main(String[] args) {
        Person person = new Person();
        Person.Leg leg1 = person.new Leg();
        leg1.run();
    }
}
