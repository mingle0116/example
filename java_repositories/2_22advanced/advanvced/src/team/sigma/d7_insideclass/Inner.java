package team.sigma.d7_insideclass;

public  class Inner {
    private String name ;
    private double price;

    public Inner(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public static void  print(String question){
        System.out.println(question);
    }
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }
}
