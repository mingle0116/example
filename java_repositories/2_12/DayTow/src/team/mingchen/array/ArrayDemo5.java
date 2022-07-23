package team.mingchen.array;

public class ArrayDemo5 {
    public static void main(String[] args) {
        int [] scores={16,26,36,6,100};
        int sum=0;
        for (int i = 0; i <scores.length ; i++) {
            sum+=scores[i];
        }
        System.out.println(sum +"   "+ scores.length);
    }
}
