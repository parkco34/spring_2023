// Cory Parker
// CSC 101 - Project1

import java.util.Scanner;
import java.lang.Math;
import java.text.DecimalFormat;

class ChangeCP
{
    public static void main(String[] args)
    {
        // Constants
        int TWENTY = 20;
        int TEN = 10;
        int FIVE = 5;
        int ONE = 1;
        double QUARTER = 0.25;
        double DIME = 0.10;
        double NICKEL = 0.05;
        double PENNY = 0.01;

        Scanner input = new Scanner(System.in);
        System.out.println("Enter the total cost of your order:");

        double totalCost = input.nextDouble();
        System.out.println("Enter the customer's payment amount: ");
        double amountPaid = input.nextDouble();
        // Change
        double change = amountPaid - totalCost;
        double changeItems =  change;
        
        // Money items
        int twenties = (int) (changeItems / TWENTY);
        changeItems %= TWENTY;
        int tens = (int) (changeItems / TEN);
        changeItems %= TEN;
        int fives = (int) (changeItems / FIVE);
        changeItems %= FIVE;
        int ones = (int) changeItems;

        // Converts cents in integers
        changeItems = Math.round((changeItems - ones) * 100.0) / 100.0;

        int quarters = (int) (changeItems / QUARTER);
        changeItems %= QUARTER;
        int dimes = (int) (changeItems / DIME);
        changeItems %= DIME;
        int nickels = (int) (changeItems / NICKEL);
        changeItems %= NICKEL;
        int pennies = (int) (Math.ceil(changeItems / PENNY));
        
        DecimalFormat format = new DecimalFormat("$0.00");
        System.out.println("\n==========================\nOriginal Cost: " + format.format(totalCost));
        System.out.println("Amount Paid: " + format.format(amountPaid))   ;
        System.out.println("Change Due: " + format.format(change) + "\n");
        System.out.println("The customer should get back: \n");
        System.out.println(twenties + " twenty dollar bill(s)");
        System.out.println(tens + " ten dollar bill(s)");
        System.out.println(fives + " five dollar bill(s)");
        System.out.println(ones + " one dollar bill(s)");
        System.out.println(quarters + " quarter(s)");
        System.out.println(dimes + " dime(s)");
        System.out.println(nickels + " nickel(s)");
        System.out.println(pennies + " pennie(s)");
        System.out.println("==========================\n");
    }
}
