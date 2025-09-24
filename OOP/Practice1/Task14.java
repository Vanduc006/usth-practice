import java.util.Scanner;

public class Task14 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Type grade");
        int grade = scanner.nextInt();
        if (grade < 10) {
            System.out.println("F");
        }
        if (grade >= 10 && grade <= 11) {
            System.out.println("E");
        }
        // ....
        scanner.close();
    } 
}
