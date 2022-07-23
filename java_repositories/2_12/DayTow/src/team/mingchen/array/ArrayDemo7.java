package team.mingchen.array;

public class ArrayDemo7 {
    public static void main(String[] args) {
            int [] faceScore={15,10000,20000,9500,-5};
            int max=faceScore[0];
        for (int i = 1; i <faceScore.length ; i++) {
            if(faceScore[i]>max){
                max=faceScore[i];
            }

        }
        System.out.println("最高研制三十是"+max);
    }
}
