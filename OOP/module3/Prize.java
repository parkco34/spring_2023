// Cory Parker
// OOP
// Prize
// ------------------------------------------------------------------------
// This program will help a host pick a random winner for two different prizes based on ticket numbers.
//Please ask for the following information in the exact order shown:
//What the first prize is
//The lower bound and upper bound for the ticket range
//What the second prize is
//The lower bound and upper bound for the ticket range
//Use the two numbers from step b to generate a random number within that range. Use the Random class.
//Use the two numbers from step d to generate a random number within that range. Use the Random class.
//We will assume that the user gives a lower number first and then a higher number for each of the two ranges.
//Print back two statements with each containing the prize and the winning number.  (See sample output.)
//// ------------------------------------------------------------------------


import java.util.Scanner;
import java.util.Random;

class Prize
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.println("\nWhat is the first prize?\n");
        String prize1 = input.nextLine();

        System.out.println("\nWhat's the lower1 and upper1 bounds for the ticket range? \n");
        int lower1 = input.nextInt();
        int upper1 = input.nextInt();

        System.out.println("\nPrize: " + prize1 + "\nLower bound: " + lower1 + "\nUpper: " + upper1 + "\n");

        System.out.println("\nWhat is the second prize?");
        input.nextLine();
        String prize2 = input.nextLine();

        System.out.print("\nPrize 2: " + prize2 + "\n");
        System.out.print("\nEnter another set of lower and upper bounds: \n");
        int lower2 = input.nextInt();
        int upper2 = input.nextInt();
    
        Random random = new Random();
        int firstNumber = random.nextInt(upper1 - lower1) + lower1;
        System.out.println("\nFirst random number is: " + firstNumber + " for a " + prize1 + ".\n");

        int number2 = random.nextInt(upper2 - lower2) + lower2;
        System.out.println("\nSecond random number is: " + number2 + " for a " + prize2 + "!\n");
    }
}
