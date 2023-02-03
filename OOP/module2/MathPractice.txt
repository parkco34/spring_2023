import java.util.Scanner;
import java.lang.Math;

class MathPractice
{
    public static void main(String[] args)
    {
        // Greeting
        System.out.println("\nHello, friend...\n");
        
        // User input
        System.out.println("\nPlease enter two (double) numbers: \n");
        Scanner input = new Scanner(System.in);
        double one = input.nextDouble();
        double two = input.nextDouble();
        
        double sum = two + one;
        System.out.println("\nTheir sum: " + one + " + " + two + " = " + sum);
        double prod = one * two;
        System.out.println("\n" + one + " * " + two + " = " + prod);
        double largest = Math.max(one, two);
        double smallest = Math.min(one, two);
        double lgPowSml = Math.pow(largest, smallest);
        System.out.println("\n" + largest + "^" + smallest + " = " + lgPowSml);

        double sqrtOfAbsOfLarge = Math.sqrt(Math.abs(largest));
        System.out.println("\nSquare root of " + largest + " is " + sqrtOfAbsOfLarge);
        
        double roundedLgPowSml = Math.round(lgPowSml);
        double roundedSqr = Math.round(sqrtOfAbsOfLarge);
        double sumOfPreviousTwo = roundedLgPowSml + roundedSqr;
        System.out.println("\n" + roundedSqr + " + " + roundedLgPowSml + " = " + sumOfPreviousTwo);

        // Subtracting roundedSqr from roundedLgPowSml
        double subtract21 = roundedSqr - roundedLgPowSml;

        // Subtracting roundedLgPowSml from rounded Sqr
        double subtract12 = roundedLgPowSml - roundedSqr;

        // Smallest of the previos two
        double smaller = Math.min(subtract21, subtract12);

        System.out.println("\n" + roundedSqr + " - " + 
                roundedLgPowSml + " = " + subtract21 + 
                "\n" + roundedLgPowSml + " - " + 
                roundedSqr + " = " + subtract12 + "\n");

        System.out.println("\nThe smallest of the two is: " + smaller + "\n");
    }
}
