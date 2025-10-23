package Labwork4;

import java.util.Scanner;

public class Task5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double number = scanner.nextDouble();

        if (number > 0 && number < 9) {
            System.out.println("Fail");
        } else if (number >= 10 && number <= 12) {
            System.out.println("Average");
        } else if (number >= 13 && number <= 14) {
            System.out.println("Above average");
        } else if (number >= 15 && number <= 16) {
            System.out.println("Good");
        } else if (number >= 17 && number <= 18) {
            System.out.println("Excellent");
        } else if (number >= 19 && number <= 20) {
            System.out.println("Outstanding");
        }

        scanner.close();
    }
}
