package team.sigma.stringbuilder;

public class StringBuilderDemo2 {

    public static void main(String[] args) {
        int [] arr={11,22,33,44,55};
        System.out.println(toString(arr));
    }
    public static String toString (int arr[]){
        if(arr!=null){
            java.lang.StringBuilder sb= new java.lang.StringBuilder();
            sb.append("[");
            for (int i = 0; i < arr.length; i++) {
                sb.append(arr[i]).append(",");

            }
            sb.append("]");
            String rs=sb.toString();
            return rs;
        }else{

            return null;
        }
    }
}
