package team.sigma.d4_static_test;

public class Teacher extends people {

    private String branchName;

    public String getBranchName() {
        return branchName;
    }

    public void setBranchName(String branchName) {
        this.branchName = branchName;
    }

    public  void feedBack(String feedback){
        System.out.println(feedback);

    }
    public void askQuestion(String question){
        System.out.println("请回答你的问题："+question);
    }
}
