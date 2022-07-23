package team.sigma.sportman;

import java.util.Objects;

public class Test {
    public static void main(String[] args) {
        PingPongMan man = new PingPongMan("linddan");
        man.run();
        man.fly();
        System.out.println(man.toString());
//        if (man.getName().equals("lindan")) {
//            System.out.println("核实清楚，一样的");
//        }

        PingPongMan mant=new PingPongMan("linddan");
        System.out.println(Objects.equals(man, mant));

    }
}