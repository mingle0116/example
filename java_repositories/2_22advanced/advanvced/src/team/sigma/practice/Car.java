package team.sigma.practice;

public class Car {
    private String name;
    private String output;
    private double price;


    public Car() {
    }

    public Car(String name, String output, double price) {
        this.name = name;
        this.output = output;
        this.price = price;
    }
    public void go(String name){
        System.out.println(this);
        System.out.println(this.name+"正在和"+name+"比赛");
    }
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getOutput() {
        return output;
    }

    public void setOutput(String output) {
        this.output = output;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }
}
