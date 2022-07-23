package team.mingchen.arraylist;

import java.util.ArrayList;

public class ArrayListDemo5 {
    public static void main(String[] args) {
        ArrayList<Integer> scores=new ArrayList<>();
        scores.add(98);
        scores.add(77);
        scores.add(66);
        scores.add(89);
        scores.add(79);
        scores.add(50);
        scores.add(100);
        System.out.println("输出的分数");
        System.out.println(scores);

        for (int i = scores.size()-1; i >=0 ; i--) {
            int score=scores.get(i);
            if(score<80){
                scores.remove(i);

            }
        }
        System.out.println("------------------------");
        System.out.println(scores);
    }
}
