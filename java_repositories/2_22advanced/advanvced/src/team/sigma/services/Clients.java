package team.sigma.services;

import java.io.IOException;
import java.net.*;
import java.util.Scanner;

public class Clients {
    public static void main(String[] args) throws IOException {
        DatagramSocket socket=new DatagramSocket();
        Scanner sc =new Scanner(System.in);
        while(true){
            String msg= sc.nextLine();
            if("exit".equals(msg)){
                System.out.println("离线成功");
                socket.close();
                break;
            }
            byte[] buffer= msg.getBytes();
            DatagramPacket packet = new DatagramPacket(buffer,buffer.length, InetAddress.getLocalHost(),6666);
            socket.send(packet);
        }

    }
}
