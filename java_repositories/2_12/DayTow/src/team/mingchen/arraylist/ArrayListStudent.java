package team.mingchen.arraylist;

import team.mingchen.javabean.Student;

import java.util.ArrayList;
import java.util.Scanner;

public class ArrayListStudent {
    public static void main(String[] args) {

       ArrayList<Student> students=new ArrayList<>();
       students.add(new Student("张三","123","x13",15));
        students.add(new Student("张4","1253","x13",15));
        students.add(new Student("张三5","55523'","x13",15));
        students.add(new Student("张三56","5555123","x13",15));
        students.add(new Student("张5三","55523","x13",15));
        students.add(new Student("张三556","5555123","x13",15));

        for (int i = 0; i < students.size(); i++) {
            Student s = students.get(i);
            System.out.println(s.getStudyId()+"\t\t"+s.getName()+"\t\t"+s.getAge()+"\t\t"+s.getClassName());

        }

        Scanner sc= new Scanner(System.in);
        System.out.println("请输入要查询的学生学号：");
        String id=sc.next();
        Student s = getStudentById(students,id);
     if(s!=null){
         System.out.println(s.getStudyId()+"\t\t"+s.getName()+"\t\t"+s.getAge()+"\t\t"+s.getClassName());
     }
     else{
         System.out.println("查无此人");
     }
    }

    public static Student getStudentById(ArrayList<Student> students,String studyId){
        for (int i = 0; i < students.size(); i++) {
            Student s= students.get(i);
            if(s.getStudyId().equals(studyId)){
                return s;
            }

        }
        return null;
    }
}
