package team.sigma.d6_animal;

public  class Test {
    public static void main(String[] args) {
        Animal a = new Dog();
        a.run2();
        a.setName("老虎");

        System.out.println("===========子类===========");
       if (a instanceof Dog){
           Dog d=(Dog) a;
           d.run();

       }
    }

}
