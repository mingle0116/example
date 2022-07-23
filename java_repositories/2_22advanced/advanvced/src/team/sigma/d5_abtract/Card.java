package team.sigma.d5_abtract;

public abstract class Card {
   private String name;
   private double price;
   private double savings;

    public Card() {
    }

    public Card(String name, double price) {
        this.name = name;
        this.price = price;
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

    public double getSavings() {
        return savings;
    }

    public void setSavings(double savings) {
        this.savings = savings;
    }
    protected abstract double Pay(double savings);

}
