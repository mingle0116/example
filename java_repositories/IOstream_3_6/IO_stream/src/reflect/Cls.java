package reflect;

import java.lang.reflect.Field;


public class Cls {
    public static void main(String[] args) {
        Class cls1=Person.class;
        Field[] fields= cls1.getFields();
        for (Field filed:fields
             ) {
            System.out.println(filed);

        }
    }
}
