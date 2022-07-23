package team.mingchen.shopcart;

public class ShopCart {
    public static void main(String[] args) {
        Cart cart=new Cart("波子",6666);
        System.out.println(cart.getName()+"\t\t\t"+cart.getPrice());
    }
}
