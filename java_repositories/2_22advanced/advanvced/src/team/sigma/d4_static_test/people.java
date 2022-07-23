package team.sigma.d4_static_test;

/**
 * 父类   人的角色
 *
 */
public class people {
    private String name;
    private int age;

    public people() {
    }

    public people(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
    public void checkSchedule(String schedule){
        System.out.println("查看课表");
    }
}
