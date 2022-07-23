package team.sigma.d4_static_test;

import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Student s= new Student("张三",15);

        s.feedBack("你学的怎么样/?????？");
        Student s2=new Student ("huohuo",12);
        s2.setClassName("200713");
        System.out.println(s2.getClassName());
        System.out.println(s.getClassName());
        Teacher t=new Teacher();
        t.askQuestion("今天遇到一些问题?");
        Scanner sc=new Scanner(System.in);

    }

}
