package team.sigma.services;

import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;

public class Services2 {
    public static void main(String[] args) throws IOException {
        DatagramSocket socket=new DatagramSocket(8888);
        byte [] buffer= new byte[1024*64];

        DatagramPacket packet =new DatagramPacket(buffer,buffer.length);
        System.out.println("======服务器启动=====");
        socket.receive(packet);
        System.out.println("ddd");
        String rs = new String(buffer);
        System.out.println("收到了" + rs);
        socket.close();

    }
}
