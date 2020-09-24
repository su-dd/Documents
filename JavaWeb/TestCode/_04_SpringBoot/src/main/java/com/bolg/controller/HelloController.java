package com.bolg.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

import javax.sql.DataSource;

@RestController
public class HelloController {

    private DataSource dataSource;

    //public HelloController(DataSource dataSource) {
    //    this.dataSource = dataSource;
    //}

    @Autowired
    public void setDataSource(DataSource dataSource) {
        this.dataSource = dataSource;
    }

    @Value("${blog.url}")
    private String blogUrl;


    @GetMapping("hello")
    public String hello(){
        System.out.println("datasoure = " + dataSource);
        return "hello, spring boot !" + blogUrl;
    }

}
