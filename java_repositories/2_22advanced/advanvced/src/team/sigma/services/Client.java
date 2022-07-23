package team.sigma.services;

import java.io.IOException;
import java.net.*;

public class Client {
    public static void main(String[] args) throws IOException {
        //创建发送端对象
        DatagramSocket socket = new DatagramSocket();
        //数据包
        byte[] buffer ="程序员好".getBytes();
        //建立数据包i对象

        DatagramPacket packet =new DatagramPacket(buffer ,buffer.length, InetAddress.getLocalHost(),8888);

        socket.send(packet);
        socket.close();
    }
}
