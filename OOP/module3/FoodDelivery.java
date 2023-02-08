// Cory Parker
// OOP
// Food Delivery
// -------------------------------------------------------
// Create a program that calculates the user’s final bill for a food order from a food delivery service. You will also ask how many people are eating and show the total cost for each person.
//I recommend breaking each calculation down and storing results in variables. This makes troubleshooting easier and cuts down on repetitive code.
// You must get the following information from the user:
// The total cost of the food (just the Food)
// How much they want to Tip the driver (as a decimal - Example: For a 15% tip, they should enter .15) 
// How many People are eating (whole number)
// Use the information below to calculate the values on the final bill. You will display/calculate:
// The user’s initial food cost
// The initial food cost plus the service charge
// Service charge = $3.99 (flat rate)
// The delivery fee
// Delivery fee = 25% of food + service charge
// The total cost after the delivery fee is added
// Food + service charge + delivery fee dollar amount
// The amount due for sales tax
// Sales tax =  8.875% of food + service charge + delivery fee
// The total bill so far with the sales tax amount added in
// The amount of the tip
// Whatever percentage the user typed in multiplied by the total bill in step f.
// The final bill with the tip added to it.		
//-------------------------------------------------------
import java.text.DecimalFormat;
import java.lang.Math;
import java.util.Scanner;

class FoodDelivery
{
    public static void main(String[] args)
    {
        // Constants
        final double SERVICE_CHARGE = 3.99;
        final double TAX = 0.08875; // Sales tax rate
        final double DELIVERY_FEE = .25;
        Scanner input = new Scanner(System.in);
        System.out.println("\nPlease enter the total cost for the food: \n");
        double cost = input.nextDouble();

        // Get the number of people
        System.out.println("\nHow many people are eating with you?\n");
        int numberOfPeople = input.nextInt();

        // Establish tip
        System.out.println("\nHow much would you like to tip? (decimal as percentage)\n");
        double tip = input.nextDouble();

        // Delivery fee
        double deliveryFee = DELIVERY_FEE * cost + SERVICE_CHARGE;
        double costWithFees = cost + SERVICE_CHARGE + deliveryFee; // Cost with service/delivery fees
        double salesTax = TAX * cost + SERVICE_CHARGE + deliveryFee;
        double subtotal = costWithFees + salesTax;  // Cost with service/delivery fees sales tax
        double total = subtotal * (1 + tip);   // Total amount due

        // Using DecimalFormat class for formatting output
        DecimalFormat twoPlace = new DecimalFormat("$ 0.00");
        DecimalFormat percent = new DecimalFormat("0.000%");
        DecimalFormat shortPercent = new DecimalFormat("0%");

        // Output
        System.out.println("\n***********************************************************\n");
        System.out.println("\nInitial cost: " + twoPlace.format(cost) + ".\n");
        System.out.println("\nService Charge: " + twoPlace.format(SERVICE_CHARGE) + "\n");
        System.out.println("\nService charge: " + twoPlace.format(SERVICE_CHARGE) + "\n");
        System.out.println("\nDelivery fee (" + shortPercent.format(DELIVERY_FEE) + "): " + twoPlace.format(deliveryFee) + ".\n");
        System.out.println("\nTotal cost after delivery fee: " + twoPlace.format(costWithFees) + "\n");
        System.out.println("\nTotal tax: ("+ percent.format(TAX) + ")" + twoPlace.format(salesTax) + ".\n");
        System.out.println("\nThe subtotal is: " + twoPlace.format(subtotal) + ".\n");
        System.out.println("\nYour tip: " + shortPercent.format(tip) + ".\n");
        System.out.println("\nThe final (TOTAL) amount to pay is: " + twoPlace.format(total) + ".\n");

        //-------------------------------------------------------
        // Find the amount each person must pay and display this as well
        //-------------------------------------------------------
        System.out.println("\nEach person should be paying: " + twoPlace.format(total / numberOfPeople) + ".\n");
    }
}
