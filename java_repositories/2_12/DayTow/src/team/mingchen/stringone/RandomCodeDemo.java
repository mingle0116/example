package team.mingchen.stringone;

import java.util.Random;

public class RandomCodeDemo {
    public static void main(String[] args) {
        String code ="ABCDEFGHIJKLMNOPQRXYZV0123456789abcdefghijklmnopqrxyzv";
        char [] codes=new char[5];
        Random r=new Random();
        for (int i = 0; i < codes.length; i++) {
            int data=r.nextInt(code.length());
            char c= code.charAt(data);
            codes[i]=c;

        }
        print(codes);

    }
    public static void print(char [] chars){
        for (int i = 0; i < chars.length; i++) {
            System.out.print(chars[i]);
        }
    }
}
