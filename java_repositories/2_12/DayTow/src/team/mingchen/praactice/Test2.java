package team.mingchen.praactice;

import java.util.Scanner;

public class Test2 {
    public static void main(String[] args) {

        System.out.println("请你输入需要加密的几位数字");
          Scanner sc=new Scanner(System.in);
          int length=sc.nextInt();
          int [] arr=new int[length];
          //录入需要的数字
        for (int i = 0; i < arr.length; i++) {
            System.out.println("请输入第"+i +"位数字");
            int number =sc.nextInt();
            arr[i]=number;

        }
        //print
        printArray(arr);
        //核心逻辑
        for (int i = 0; i < arr.length; i++) {

            arr[i]=(5+arr[i])%10;

        }
        printArray(arr);
        for (int i = 0,j=arr.length-1; i < j; i++) {
            int temp= arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        printArray(arr);
    }

   public static void printArray(int [] arr){
       System.out.print("[");
       for (int i = 0; i < arr.length; i++) {
           System.out.print(arr[i]+"\t");
       }
       System.out.print("]");
   }
}
