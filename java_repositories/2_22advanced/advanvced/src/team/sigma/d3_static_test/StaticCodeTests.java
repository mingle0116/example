package team.sigma.d3_static_test;

import java.util.ArrayList;

public class StaticCodeTests {
    //因为一开始要加载出来   string  所以用代码块

    public static  ArrayList<String> cards= new ArrayList<>();//加载一次用静态成员变量

    static {
        String [] colors={"❀","〇","♥","潸"};
        String [] numbers={"1","9","8","7","6","5","4","3","2","k","Q","J"};
        for (int i = 0; i < numbers.length; i++) {
            for (int j = 0; j < colors.length; j++) {
                  cards.add(numbers[i]+colors[j]);
            }
        }
    }

    public static void main(String[] args) {
        System.out.println(cards);
    }
}
