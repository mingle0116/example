package team.mingchen.arraylist;

import sun.security.rsa.RSAUtil;

import java.util.ArrayList;

public class  ArrayListDemo6 {
    public static void main(String[] args) {
        ArrayList<Moive> movies=new ArrayList<>();
        //将影片对象放到moivezhong
        movies.add(new Moive("《肖申克的救赎》",25,"罗宾斯"));
        movies.add(new Moive("霸王别姬",45,"张国荣，张丰毅"));
        movies.add(new Moive("three idolts",25,"阿米汗"));
        movies.add(new Moive("阿甘正传",15,"汤姆.寒假克斯"));
        System.out.println(movies);
        for (int i = 0; i < movies.size(); i++) {
          Moive movie=  movies.get(i);
            System.out.print("片名："+movie.getName());
            System.out.print("价钱："+movie.getPrice());
            System.out.println("主演："+movie.getActor());
        }
    }
}
