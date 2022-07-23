package team.mingchen.random;

import java.util.Random;

public class RandomDemo {
    public static void main(String[] args) {
        Random r=new Random();

        for (int i =0;i<2;i++) {
            int data=r.nextInt(10);//contrl  + alt + t快捷键  包裹
            System.out.println(data);
        }
        System.out.println("=--------------------------=");
        int data = r.nextInt(15)+1;
        System.out.println(data);

    }
}
