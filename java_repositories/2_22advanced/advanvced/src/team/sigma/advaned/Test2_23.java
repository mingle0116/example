package team.sigma.advaned;

public class Test2_23 {
    public static int number=0;
    public static void main(String[] args) {

        User u1 =new User("猪八戒","打趴",23);

        System.out.println(u1.getAge()+" \t\t" + u1.getName() +"\t\t"+ u1.getSkill());
        u1.setSkill("改了不变");
         number++;

        System.out.println(u1.getAge()+" \t\t" + u1.getName() +"\t\t"+ u1.getSkill());

        System.out.println("=========adding==========");


    }
}
