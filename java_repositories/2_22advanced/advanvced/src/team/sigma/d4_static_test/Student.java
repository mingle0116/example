package team.sigma.d4_static_test;

public class Student extends people{
    /**
     * 独有属性
     */
    private String className;

    public String getClassName() {
        return className;
    }

    public Student(String name, int age) {
        super(name, age);
    }

    public void setClassName(String className) {
        this.className = className;
    }
    public void feedBack(String question){
        System.out.println("问题是" + question);
        System.out.println(getName() + "今天学得很好，很开心");
    }
}
