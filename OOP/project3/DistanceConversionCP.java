//Cory Parker - Distance Conversion Program that takes user input as distance and converts the given value to the appropriate metric
//Miles to Kilometers (Kilometers = Miles * 160934)
//Kilometers to Miles (Miles = Kilometers * 0.621371)
//Yards to Meters (Meters = Yards * 0.9144)
//Meters to Yards (Yards = Meters * 1.09361)
//Inches to Centimeters (Centimeters = Inches * 2.54)
//Centimeters to Inches (Inches = Centimeters * 0.393701)
import java.util.Scanner;
import java.util.InputMismatchException;
import java.text.DecimalFormat;

public class DistanceConversionCP {

    public static void main(String[] args) {
        double distance = 0.0;
        DecimalFormat df = new DecimalFormat("0.######");
        int choice = 0;

        while (choice != 7) {
            System.out.println("Please choose an option:");
            System.out.println("1. Miles to Kilometers");
            System.out.println("2. Kilometers to Miles");
            System.out.println("3. Yards to Meters");
            System.out.println("4. Meters to Yards");
            System.out.println("5. Inches to Centimeters");
            System.out.println("6. Centimeters to Inches");
            System.out.println("7. Quit");

            
            choice = getGoodInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter distance in miles: ");
                    distance = getGoodDouble();
                    System.out.println();
                    System.out.println(distance + " miles = " + df.format(milesToKm(distance)) + " kilometers");
                    System.out.println();
                    break;
                case 2:
                    System.out.print("Enter distance in kilometers: ");
                    distance = getGoodDouble();
                    System.out.println();
                    System.out.println(distance + " kilometers = " + df.format(kmToMiles(distance)) + " miles");
                    System.out.println();
                    break;
                case 3:
                    System.out.print("Enter distance in yards: ");
                    distance = getGoodDouble();
                    System.out.println();
                    System.out.println(distance + " yards = " + df.format(yardsToMeters(distance)) + " meters");
                    System.out.println();
                    break;
                case 4:
                    System.out.print("Enter distance in meters: ");
                    distance = getGoodDouble();
                    System.out.println();
                    System.out.println(distance + " meters = " + df.format(metersToYards(distance)) + " yards");
                    System.out.println();
                    break;
                case 5:
                    System.out.print("Enter distance in inches: ");
                    distance = getGoodDouble();
                    System.out.println();
                    System.out.println(distance + " inches = " + df.format(inchesToCm(distance)) + " centimeters");
                    System.out.println();
                    break;
                case 6:
                    System.out.print("Enter distance in centimeters: ");
                    distance = getGoodDouble();
                    System.out.println();
                    System.out.println(distance + " centimeters = " + df.format(cmToInches(distance)) + " inches");
                    System.out.println();
                    break;
                case 7:
                    System.out.println("Exiting program...");
                    break;
                default:
                    System.out.println("Invalid choice, please try again.");
                    break;
            }
        }
    }

    public static int getGoodInt() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a choice via positive integer: ");
        boolean valid = false;
        int good = 0;

        // Iterate through until user provides valid input
        while (!valid) {
            try {
                good = input.nextInt();

                if (good <= 0) {
                    valid = false;
                    throw new Exception("Invalid input. Please enter a positive integer.");
                } else {
                    valid = true;
                }
            } catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter a positive integer.");
                input.nextLine();
                valid = false;
            } catch (Exception e) {
                System.out.println(e.getMessage());
                valid = false;
            }
        }

        return good;
    }

    public static double getGoodDouble() {
        Scanner input = new Scanner(System.in);
        double good = 0;
        boolean valid = false;

        // Iterate until user provides valid input
        while (!valid) {
            try {
                System.out.println("\nEnter a double value: ");
                String userInput = input.next();

                // Try parsing the input as a double
                good = Double.parseDouble(userInput);

                // Check if the value is negative
                if (good < 0) {
                    throw new Exception("Negative values are not valid");
                }

                valid = true;
            } catch (NumberFormatException e) {
                System.out.println("Oops! You entered an invalid input. Please enter a valid double value.");
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }

        return good;
    }

    public static double milesToKm(double distance) {
        return distance * 1.60934;
    }

    public static double kmToMiles(double distance) {
        return distance * 0.621371;
    }

    public static double yardsToMeters(double distance) {
        return distance * 0.9144;
    }

    public static double metersToYards(double distance) {
        return distance * 1.09361;
    }

    public static double inchesToCm(double distance) {
        return distance * 2.54;
    }

    public static double cmToInches(double distance) {
        return distance * 0.393701;
    }
}


