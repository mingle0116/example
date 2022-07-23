package team.mingchen.praactice;

import java.util.Scanner;

public class Practice {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
        System.out.println("原价：");
        double money =sc.nextDouble();
        System.out.println("月份：");
        int month=sc.nextInt();
        System.out.println("座位区域");
        String type =sc.next();
        System.out.println(discountTicket(month,money,type));
    }
    public static double discountTicket(int month,double money,String type){
        if(month>=5&&month<=10){
            //旺季
            switch(type){
                case "经济舱":
                    money*=0.85;
                    break;
                case "头等舱":
                    money*=0.9;
                    break;
                default:
                    System.out.println("你输入错误");
                    break;
            }
        }
        else if(month==11||month==12||month>=1&&month<=4){
            //淡季
            switch(type){
                case "经济舱":
                    money*=0.65;
                    break;
                case "头等舱":
                    money*=0.7;
                    break;
                default:
                    System.out.println("你输入错误");
                    break;
            }
        }
        return money;
    }
}
