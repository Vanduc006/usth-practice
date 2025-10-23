package Practice2;

public class NameCardTester {
    public static void main(String[] args) {
        NameCard myCard = new NameCard("duc",111,"abc",10);
        myCard.setName("duc");

        // System.out.println(myCard.phone);
        System.out.println(myCard.getName());
        myCard.Birthday();
        
        System.out.println(myCard.getAge());
    }
}
