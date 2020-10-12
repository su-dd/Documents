package com.study.injection;

public class School {
    private String name;

    public School() {
        System.out.println("——运行 School 无参构造——");
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
}
