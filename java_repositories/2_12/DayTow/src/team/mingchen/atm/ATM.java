package team.mingchen.atm;

import team.mingchen.atm.javabean.Account;

import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class ATM {
    public static void main(String[] args) {
      showMain();

    }
public static void showMain(){
    System.out.println("==============欢迎进入首页===============");
    ArrayList<Account> accounts = new ArrayList<>();
    Scanner sc =new Scanner(System.in);
    while(true){

        System.out.println("请你输入你想做的事情");
        System.out.println("1.登录");
        System.out.println("2.开户");
        int command =sc.nextInt();
        switch(command){
            case 1:
                break;
            case 2:
                break;
            default :
                System.out.println( "你当前输入的指令不支持");
        }
    }
}

    /**
     *
     * @param accounts
     */

public static void register(ArrayList<Account> accounts,Scanner sc){
    System.out.println("==============用户开户功能===============");
    System.out.println("请输入开户名称");
    String name=sc.next();
    String password="";
      while(true){
          System.out.println("请输入用户密码");
          password=sc.next();
          System.out.println("确认用户的密码");
          String okp=sc.next();
          if(password.equals(okp)){
              break;
          }
          else{
              System.out.println("密码不一致");
          }
      }

   }
   public static String createCardId(ArrayList<Account> accounts){
    String cardId="";
    Random r=new Random();
       for (int i = 0; i < 8; i++) {
           cardId+=r.nextInt(10);
       }

       return cardId;
   }

}
