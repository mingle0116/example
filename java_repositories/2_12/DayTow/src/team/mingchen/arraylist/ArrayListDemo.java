package team.mingchen.arraylist;

import java.util.ArrayList;

public class ArrayListDemo {
    public static void main(String[] args) {
        ArrayList list =new ArrayList();
        //
        list.add("java0");
        list.add("mysql");
        list.add(1,"ddd");
        list.add(2,"charu");//插入位置 : index  element:插入的元素
        System.out.println(list);
        //ArrayList <泛型>  专业一点
        //整型使用，integer `
    }
}
