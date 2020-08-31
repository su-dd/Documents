package _01_Class.demo05;

public class Person {
    private boolean live;

    public class Leg {
        public void run() {
            if (live) {
                System.out.println("running .... ");
            } else {
                System.out.println("dead");
            }
        }
    }

    public Person() {
        this.live = true;
    }

    public Person(boolean live) {
        this.live = live;
    }

    public boolean isLive() {
        return live;
    }

    public void setLive(boolean live) {
        this.live = live;
    }
}
