package team.mingchen.branch;

public class BreakAndContinue {
    public static void main(String[] args) {
        for (int i = 0; i <5 ; i++) {
            System.out.println("快乐希望");
            if(i==2){
                break;
            }
        }
        for (int i = 0; i <4 ; i++) {
            if(i==2){
                continue;
            }
            System.out.println("kuailexiwan"+i);
        }
    }
}
