package team.mingchen.praactice;

import java.util.Random;
import java.util.Scanner;

public class CommitCode {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("qingshuru " );
        String number=sc.next();
   String code=code(5);
        System.out.println("你的验证码是"+code);
    }

    public static String code(int n){
        Random r=new Random();
        String code="";
        String codel="";
        for (int i = 0; i <n ; i++) {
            int type =r.nextInt(3);
            switch(type){
                case 0:
                    char ch=(char)(r.nextInt(26)+65) ;//0-25
                    code+=ch;
                    break;
                case 1:
                    char ch1=(char)(r.nextInt(26)+97);
                    code+=ch1;
                    break;
                case 2:
                     int ch2=r.nextInt(10);
                    code+=ch2;
                    break;

            }



        }
        return code;
    }
}
