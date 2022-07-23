package team.sigma.d10_2_27;

import java.util.Arrays;
import java.util.Comparator;

public class TestDemo3 {
    public static void main(String[] args) {
        int [] arr= {11,22,33,4477,88};
        Arrays.sort(arr);
        System.out.println(Arrays.toString(arr));
        Student [] students=new Student[3];
        students[0]=new Student("a","23",1,1.70);
        students[1]= new Student("李四","45",16,1.80);
        students[2]=new Student("皇位","108",13,1.90);

        Arrays.sort(students, new Comparator<Student>() {
            @Override
            public int compare(Student o1, Student o2) {
                return o2.getAge()-o1.getAge();
            }
        });
        Arrays.sort(students, new Comparator<Student>() {
            @Override
            public int compare(Student o1, Student o2) {
                return Double.compare(o1.getHeight(),o2.getHeight());
            }
        });

        Arrays.sort(students,(Student o1, Student o2)->{
                return o2.getAge()-o1.getAge();

        });
        System.out.println(Arrays.toString(students));


    }
}
