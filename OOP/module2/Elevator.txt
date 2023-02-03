import java.util.Scanner;
import java.lang.Math;

class Elevator 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        System.out.println("\nWhat is the weight limit of your elevator?: \n");
        double weightLimit = input.nextDouble();

        System.out.println("\nWhat's the weight of a single refrigerator? \n");
        double fridgeWeight = input.nextDouble();

        int numberOfFridges = (int)(weightLimit / fridgeWeight);
        System.out.println("\nThe maximum number of refrigerators allowed are: " + numberOfFridges + 
                "\nLeaving " + (int) (weightLimit % fridgeWeight) + " (units of weight) left over.\n");

    }    
}
