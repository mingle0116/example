package team.sigma.locationtime;

import java.time.LocalDate;
import java.time.Month;

public class Time {
    public static void main(String[] args) {
        LocalDate t=LocalDate.now();
        int hour =t.getYear();
        int minutes=t.getDayOfMonth();
       Month second=t.getMonth();
        System.out.println("小时："+hour);
        System.out.println("分钟"+minutes);
        System.out.println("秒："
                +second);

    }
}
