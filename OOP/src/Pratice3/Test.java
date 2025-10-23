package Pratice3;

public class Test {
    public static void main(String[] args) {
        Cow bo = new Cow();
        bo.setName("abc");
        System.out.println(bo.getName());

        bo.sound();
        bo.Breah();

        Animal bo1 = new Cow("xyz");
        System.out.println(bo1.name);
        

    }
}
