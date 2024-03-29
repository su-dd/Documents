package _04_Collections.set;

public class Student2 implements Comparable<Student2> {
    private String name;
    private int age;

    public Student2() {
    }

    public Student2(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    @Override
    public int compareTo(Student2 student2) {
        int num = this.getAge() - student2.getAge();
        int num2 = num == 0 ? this.getName().compareTo(student2.getName()) : num;
        return num2;
    }
}
