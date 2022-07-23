package team.sigma.d3_static_test;

import java.util.Random;

public class VerifyTool {
    /**
     * 静态方法
     *
     */
public static String createdCode(int n){
    String chars="abcdefghijklnmopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    //定义一个变量
    String code="";
    Random r =new Random();
    for (int i = 0; i < n; i++) {
        int index =r.nextInt(chars.length());
        code+=chars.charAt(index);

    }
    return code;
}
}
