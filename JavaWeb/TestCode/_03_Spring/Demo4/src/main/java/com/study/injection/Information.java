package com.study.injection;

import org.springframework.beans.factory.annotation.Value;
import org.springframework.stereotype.Component;

@Component("information")
public class Information {
    @Value("110")
    private String phoneNum;

    public Information() {
    }

    public Information(String phoneNum) {
        this.phoneNum = phoneNum;
    }

    public String getPhoneNum() {
        return phoneNum;
    }

    public void setPhoneNum(String phoneNum) {
        this.phoneNum = phoneNum;
    }

    @Override
    public String toString() {
        return "Information{" +
                "phoneNum='" + phoneNum + '\'' +
                '}';
    }
}
