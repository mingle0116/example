package team.mingchen.branch;

import java.util.Scanner;

public class DoWhileDemo {
    public static void main(String[] args) {
        //目标是学习dowhile 循环，并理解其执行
        //do while  无论如何都执行一次在判断
//        int i=3;
//        do{
//            System.out.println("djddj");
//               i++;
//        }while(i<3);


        int okPwd=520;
        Scanner sc=new Scanner(System.in);

        while(true){
            System.out.println("请输入正确的密码");
          int pwd=sc.nextInt();
          if(pwd==okPwd){
              System.out.println("登陆成功");
              break;
          }
          else{
              System.out.println("密码错误");
          }
        }
    }
}
