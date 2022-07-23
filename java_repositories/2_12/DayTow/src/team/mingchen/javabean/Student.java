package team.mingchen.javabean;

public class Student {
    private String name;
    private String studyId;
    private  String className;
    private int age;

    public Student() {
    }

    public Student(String name, String studyId, String className, int age) {
        this.name = name;
        this.studyId = studyId;
        this.className = className;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getStudyId() {
        return studyId;
    }

    public void setStudyId(String studyId) {
        this.studyId = studyId;
    }

    public String getClassName() {
        return className;
    }

    public void setClassName(String className) {
        this.className = className;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
}
