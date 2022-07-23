package team.mingchen.branch;

import java.util.Scanner;

public class IfDemo {
    public static void main(String[] args) {
        int x;
        System.out.println("输入心跳频率：");
        Scanner sc= new Scanner(System.in);
        x=sc.nextInt();
        if (60<=x&&x<100){
            System.out.println("normal");
        }
        else{
            System.out.println("innormal");
        }
    }
}
