package com.example.hellojni;

public class SayHello {
    static {
        System.loadLibrary("hello");
    }
    public static native String sayHello();
}
