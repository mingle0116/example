package team.mingchen.arraylist;

public class Moive {
    private String name;
    private double price;
    private String actor;

    public Moive() {
    }

    public Moive(String name, double price, String actor) {
        this.name = name;
        this.price = price;
        this.actor = actor;
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

    public String getActor() {
        return actor;
    }

    public void setActor(String actor) {
        this.actor = actor;
    }
}
