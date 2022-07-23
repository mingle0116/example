package team.sigma.d3_static_test;

public class TestDemo1 {
    public static String schoolName;//定义静态成员变量

    public static void main(String[] args) {
        System.out.println("=======方法背着行=========");
        System.out.println(schoolName);

    }
    static {
        System.out.println("静态代码块成员变量被触发");
        schoolName="老陈" +
                "顶顶顶顶";
    }

}
