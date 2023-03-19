// Cory Parker
// CSC 101 OOP
// BeepBoopCP - Your program will then print every number from 1 up to and including the user’s number.  However, some of your numbers will be replaced with nonsense text.  

import java.util.Scanner;

public class BeepBoopCP {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Tell the user what the program does
        System.out.println("This program will print every number up to and including the positive integer you enter.");
        System.out.println("However, some of the numbers will be replaced with nonsense text!");

        // Ask the user for a positive integer
        System.out.print("Please enter a positive integer: ");
        int n = input.nextInt();

        // Print the sequence of numbers and substitutions
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 4 == 0 && i % 5 == 0) {
                System.out.println("Shazam! ");
            } else if (i % 3 == 0 && i % 4 == 0) {
                System.out.println("Ding! ");
            } else if (i % 4 == 0 && i % 5 == 0) {
                System.out.println("Pow! ");
            } else if (i % 3 == 0 && i % 5 == 0) {
                System.out.println("Blammo! ");
            } else if (i % 3 == 0) {
                System.out.println("Beep ");
            } else if (i % 4 == 0) {
                System.out.println("Boop ");
            } else if (i % 5 == 0) {
                System.out.println("Blip ");
            } else {
                System.out.println(i + " ");
            }
        }

        // Print a newline character to end the output
        System.out.println();
    }
}

