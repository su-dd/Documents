package _01_Class.demo03;

public class Student extends Person {
    private int score;

    public Student() {
    }

    public Student(String name, int score) {
        super(name);
        this.score = score;
    }

    public int getScore() {
        return score;
    }

    public void setScore(int score) {
        this.score = score;
    }

    @Override
    public String getName() {
        return super.getName();
    }

    @Override
    public void setName(String name) {
        super.name = name;
    }

    @Override
    public String toString() {
        return "Student{" +
                "name=" + super.getName() +
                "score=" + score +
                '}';
    }
}
