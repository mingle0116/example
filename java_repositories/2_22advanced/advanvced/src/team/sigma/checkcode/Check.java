package team.sigma.checkcode;

public class Check {
    public static void main(String[] args) {
        System.out.println(checkQq("2319655765"));
        System.out.println(checkQq("ddddffdfdfss"));
        System.out.println(checkQq("244"));
    }
    public static boolean checkQq(String qq){
        return qq!=null&& qq.matches("\\d{6,20}");
    }
}
