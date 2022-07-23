package team.sigma.d3_static_test;

import java.util.Random;

import static team.sigma.d3_static_test.VerifyTool.createdCode;

public class Login {
    public static void main(String[] args) {
        String chars="abcdefghijklnmopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        //定义一个变量
        String code="";
        Random r =new Random();
        for (int i = 0; i < 5; i++) {
            int index =r.nextInt(chars.length());
            code+=chars.charAt(index);

        }
        System.out.println("验证码：" + VerifyTool.createdCode(5));
    }
}
