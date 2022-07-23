package team.sigma.stringbuilder;

public class StringBuilder {
    public static void main(String[] args) {
        java.lang.StringBuilder  sb=new java.lang.StringBuilder();
        sb.append("hello java ");
        sb.append(".ming!!!!");
        sb.append("lalalall");
        System.out.println(sb);
        System.out.println("反转字符" + sb.reverse());


        System.out.println("======================" +
                "==================");
        sb.reverse();
        String rs=sb.toString();

        System.out.println(rs);
    }
}
