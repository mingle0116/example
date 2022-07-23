package team.sigma.d10_2_27;

public class Student {
    private String name;
    private String number;
    private int age;
    private double height;

    public Student() {
    }

    public Student(String name, String number, int age, double height) {
        this.name = name;
        this.number = number;
        this.age = age;
        this.height = height;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getNumber() {
        return number;
    }

    public void setNumber(String number) {
        this.number = number;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }
//重写todtring 方法
    @Override
    public String toString() {
        return "Student{" +
                "name='" + name + '\'' +
                ", number='" + number + '\'' +
                ", age=" + age +
                ", height=" + height +
                '}';
    }
}
