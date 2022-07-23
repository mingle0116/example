package team.mingchen.praactice;

public class PracticeDemo1 {
    public static void main(String[] args) {

        for (int i = 101; i <=200 ; i++) {
            //找出101-200的数值

            //判断是不是素数
            boolean flag=true;//认为是素数

            for (int j = 2; j <i/2 ; j++) {
                if(i%j==0){
                    flag=false;
                    break;
                }
            }
                if(flag){
                    System.out.print(i+"\t");
                }

        }
    }
}
