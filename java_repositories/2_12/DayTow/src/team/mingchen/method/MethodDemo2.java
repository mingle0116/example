package team.mingchen.method;

public class MethodDemo2 {
    public static void main(String[] args) {
       fire();
       fire("daoguo");
       fire("daoguo",9999);
    }
    public static void fire(){
        System.out.println("发射一枚");
    }
    public static void fire(String location){
        System.out.println("发射一枚"+location);
    }
    public static void fire(String location ,int number ){
        System.out.println("发射"+number+location);
    }
    //return ;  跳出当前方法，结束当前方法

}
