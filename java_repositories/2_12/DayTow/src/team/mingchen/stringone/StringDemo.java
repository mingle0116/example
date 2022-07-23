package team.mingchen.stringone;

public class StringDemo {
    public static void main(String[] args) {
        char[] chars={'我','中'};
        String name = new String(chars);
        System.out.println(name.charAt(1
        ));
        System.out.println(name);
        char [] chars2=name.toCharArray();
        for (int i = 0; i < chars2.length; i++) {
            System.out.println(chars2[i]);
        }
    }
}
