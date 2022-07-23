package team.mingchen.scanner;

import java.util.Scanner;

public class ScannerDemo {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int age=sc.nextInt();
        System.out.println("输入的年龄"+age);
               sc=new Scanner(System.in);
        String name=sc.next();
        System.out.println("输入的名字"+name);
    }
}
