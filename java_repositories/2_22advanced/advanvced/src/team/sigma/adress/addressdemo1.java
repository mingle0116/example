package team.sigma.adress;

import java.io.IOException;
import java.net.InetAddress;

public class addressdemo1 {
    public static void main(String[] args) throws IOException {
        InetAddress ip1= InetAddress.getByName("www.baidu.com");
        System.out.println(ip1);
        InetAddress ip2=InetAddress.getLocalHost();
        System.out.println(ip2);
        System.out.println(ip1.isReachable(5000));
    }
}
