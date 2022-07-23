package team.mingchen.praactice;

import java.util.Random;
import java.util.Scanner;

public class GameWithDouble {
    public static void main(String[] args) {

     int [] luckNumber= creatNumber();
     printArray(luckNumber);
     int [] useNumber=customerChoose();
     judge(luckNumber,useNumber);
    }
    public static void printArray(int [] arr){
        System.out.print("[");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+"\t");
        }
        System.out.println("]");
    }

    public static int [] creatNumber(){
        int [] numbers =new int [7];
        Random r=new Random();
        for (int i = 0; i <numbers.length ; i++) {
           //死循环，不知道次数
            while(true){
                int data=r.nextInt(23)+1;
                boolean flag=true;
            for (int j = 0; j < i; j++) {
                if (numbers[j] == data) {
                    flag=false;
                    break;
                }
              }
            if(flag){
                numbers[i]=data;
                break;
            }
            }
        }

        numbers[numbers.length-1]=r.nextInt(33)+1;

        return numbers;

    }
    public static int [] customerChoose(){
        int [] useNumber=new int[7];
        Scanner sc=new Scanner(System.in);
        for (int i = 0; i < useNumber.length-1; i++) {

            System.out.println("请输入第"+(i+1)+"位红球号码（1 - 23，要求不重复）");
            char data=(char)sc.nextInt();
            if(data>=1&&data<=23){
                useNumber[i]=data;
            }else{
                System.out.println("请重新输入，你输入错误");
            }


        }
        System.out.println("请你输入蓝球号码（1-33）：");
        useNumber[6]=sc.nextInt();

        return useNumber;
    }
    public static void judge(int[] luckNumbers,int[] useNumber){
        int red =0;
        int bule=0;


        for (int i = 0; i < useNumber.length-1; i++) {
            for (int j = 0; j < luckNumbers.length-1; j++) {
                  if(useNumber[i]==luckNumbers[j]){
                      red++;
                      break;
                  }
            }
        }
        bule=useNumber[useNumber.length-1]==luckNumbers[luckNumbers.length-1]?1:0;
        System.out.println("中奖号码的：");
        printArray(luckNumbers);
        System.out.println("你的号码：");
        printArray(useNumber);
        System.out.println("你命中红球的号码的:"+red);
        System.out.println("蓝球是"+bule);
        if(bule==1&&red<3){
            System.out.println("恭喜你，中了5元");
        }
        else if(bule==0&&red==4||bule==1&&red==3){
            System.out.println("恭喜你，中了10元");
        }
        else if(bule==1&&red==4||bule==0&&red==5){
            System.out.println("恭喜你，中了30元");
        }
        else if(bule==1&&red==5){
            System.out.println("恭喜你，中了100元");
        }
        else if(red==6&&bule==0){
            System.out.println("恭喜你，中了150元");
        }else if(red==6&&bule==1){
            System.out.println("恭喜你，中了500元，吃顿好的");
        }else{
            System.out.println("感谢你位事业走出贡献");
        }
    }
}
