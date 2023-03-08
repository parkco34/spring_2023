import java.util.Scanner;

public class Program1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String unit;
        double length, width, height;

        // Get unit of measurement
        System.out.println("This program will determine the surface area and volume of a rectangular prism.");
        System.out.print("Enter the unit of measurement that you will be using: ");
        unit = input.nextLine();

        // Get length of prism
        while (true) {
            System.out.print("Enter the length of the prism (must be a positive value): ");
            try {
                length = Double.parseDouble(input.nextLine());
                if (length > 0) {
                    break;
                } else {
                    System.out.println("Input cannot be negative or zero.");
                }
            } catch (NumberFormatException e) {
                System.out.println("Invalid entry. Must be a number.");
            }
        }

        // Get height of prism
        while (true) {
            System.out.print("Enter the height of the prism (must be a positive value): ");
            try {
                height = Double.parseDouble(input.nextLine());
                if (height > 0) {
                    break;
                } else {
                    System.out.println("Input cannot be negative or zero.");
                }
            } catch (NumberFormatException e) {
                System.out.println("Invalid entry. Must be a number.");
            }
        }

        // Get width of prism
        while (true) {
            System.out.print("Enter the width of the prism (must be a positive value): ");
            try {
                width = Double.parseDouble(input.nextLine());
                if (width > 0) {
                    break;
                } else {
                    System.out.println("Input cannot be negative or zero.");
                }
            } catch (NumberFormatException e) {
                System.out.println("Invalid entry. Must be a number.");
            }
        }

        // Calculate surface area and volume
        double surfaceArea = 2 * ((height * width) + (width * length) + (length * height));
        double volume = length * width * height;

        // Print results
        System.out.printf("You entered %.2f as the length, %.2f as the height, and %.2f as the width of a rectangular prism.\n", length, height, width);
        System.out.printf("Surface Area = %.2f %s^2\n", surfaceArea, unit);
        System.out.printf("Volume = %.2f %s^3\n", volume, unit);
        System.out.println("Goodbye.");
    }
}

