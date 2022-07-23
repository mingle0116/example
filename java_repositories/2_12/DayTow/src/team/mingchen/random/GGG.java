package team.mingchen.random;

import java.util.Random;
import java.util.Scanner;

public class GGG {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        Random  r=new Random();
        int number =r.nextInt(99)+1;
       while(true){
           System.out.println("请输入你猜的数字");
           int gnumber=sc.nextInt();
           if(number==gnumber){

               System.out.println("恭喜你猜对了，0.01元已到账");
               break;

           }
           else if(gnumber>number){
               System.out.println("猜测大了，小于"+gnumber);

           }
           else if(gnumber<number){
               System.out.println("猜测小了,大于"+gnumber);
           }
           else{
               System.out.println("请踩踩");
           }
       }
    }
}
