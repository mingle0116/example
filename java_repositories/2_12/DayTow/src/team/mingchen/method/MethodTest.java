package team.mingchen.method;

import java.util.Random;

public class MethodTest {
    public static void main(String[] args) {
       int a=10;
        System.out.println("1到"+a+"的和"+add(a));

        //the second method
        Random r =new Random();

        recognize(r.nextInt(20)+1);

        //the thrid method
        int [] b={45,122,78,59,456,23};
        System.out.println("数组的最大值："+Max(b));
    }
    public static int  add(int Lenght){
        int sum=0;
        for (int i = 0; i < Lenght; i++) {
            sum+=i;
        }
        return sum;
    }
    public static void recognize(int number){
        String result=null;
        if(number%2==0){
            result="偶数";
        }
       else{
           result="奇数";
        }
        System.out.println("这个数是"+result);
    }
    public static int Max(int [] a){
        int max=a[0];
        for (int i = 1; i <a.length ; i++) {
            if(max<a[i]){
                max=a[i];
            }
        }
        return max;
    }
}
