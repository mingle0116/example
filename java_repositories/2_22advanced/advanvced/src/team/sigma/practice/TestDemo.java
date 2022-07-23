package team.sigma.practice;

public class TestDemo {
    public static void main(String[] args) {
         Car c=new Car("法拉利","德国",5000000);
        System.out.println(c.getName());
        System.out.println(c.getPrice());
        c.go("保时捷");
    }
}
