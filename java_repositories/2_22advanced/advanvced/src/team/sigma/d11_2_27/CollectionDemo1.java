package team.sigma.d11_2_27;

import java.util.*;

public class CollectionDemo1 {
    public static void main(String[] args) {
        Collection<String>  list = new ArrayList<>();

        list.add("第一个");
        list.add("第二个");
        list.add("第三个");

        System.out.println(list);
        System.out.println("是否为空？"+list.isEmpty());
        System.out.println("集合的个数为"+list.size());

        String [] rs=new String[list.size()];
       list.toArray(rs);

        for (int i = 0; i < rs.length; i++) {
            System.out.println(rs[i]);
        }

        System.out.println("===================");
        Iterator<String> it = list.iterator();
        while(it.hasNext()){
            String ele =it.next();
            System.out.println(ele);
        }


        Integer [] ints={11,22,33,4,455,5666};
        for (int anint  : ints) {
            System.out.println(anint);
        }
        Arrays.sort(ints);
        System.out.println("=======");
        for (int anInt : ints) {
            System.out.println(anInt);
        }
        Arrays.sort(ints, new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                return o2-o1;
            }
        });
        System.out.println("=======");
        for (int anInt : ints) {
            System.out.println(anInt);
        }
    }

}
