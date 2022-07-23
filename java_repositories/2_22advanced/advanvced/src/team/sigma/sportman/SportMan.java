package team.sigma.sportman;

public interface SportMan {
    void run();
    void jump();
    void shoot();
    default void fly (){
        System.out.println("ddddd飞");
    };
}
