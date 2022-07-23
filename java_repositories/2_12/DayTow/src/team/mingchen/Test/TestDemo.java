package team.mingchen.Test;

public class TestDemo {
    public static void main(String[] args) {
        int a =10;
        int [] arr={20,45,89};
        change(arr);
        System.out.println(arr[0]);

    }
    public static void change (int [] a ){
        System.out.println(a[0]);
        a[0]=24;
        System.out.println(a[0]);
    }
}
