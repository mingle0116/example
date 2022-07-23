package team.mingchen.array;

import java.util.Random;
import java.util.Scanner;

public class ArrayDemo8 {
    public static void main(String[] args) {
       int [] guess=new int[5];
       Random  r =new Random();
        for (int i = 0; i < 5; i++) {

            guess [i]= r.nextInt(19)+1;
           // System.out.println(guess[i]);
        }

        int count=0;
        Scanner sc=new Scanner (System.in);
        while(true){
            System.out.println("请输入猜测的数字");
            int guessData= sc.nextInt();
            for (int i = 0; i < 5; i++) {
                if(guessData==guess[i]){
                    System.out.println("你猜中了"+guessData);
                    count++;
                  break;
                }

                System.out.println("没猜中");

            }

        }
    }
}
