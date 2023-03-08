import java.util.Scanner;
import java.text.DecimalFormat;

public class Program2
{
    public static void main(String[] args)
    {

        Scanner scanner = new Scanner(System.in);
        DecimalFormat decimalFormat = new DecimalFormat("#.##");

        boolean isRunning = true;

        while (isRunning) {

            System.out.println("Please choose an option:");
            System.out.println("1. Convert radians to degrees");
            System.out.println("2. Convert degrees to radians");
            System.out.println("3. Exit");

            int choice = 0;

            try {
                choice = Integer.parseInt(scanner.nextLine());
            } catch (NumberFormatException e) {
                System.out.println("Invalid option. Please enter a valid integer.");
                continue;
            }

            switch (choice) {
                case 1:
                    System.out.print("Enter radians: ");
                    double radians = 0;

                    try {
                        radians = Double.parseDouble(scanner.nextLine());
                    } catch (NumberFormatException e) {
                        System.out.println("Invalid input. Please enter a valid number.");
                        continue;
                    }

                    double degrees = radians * 180 / Math.PI;
                    System.out.println("Degrees: " + decimalFormat.format(degrees));
                    break;

                case 2:
                    System.out.print("Enter degrees: ");
                    double degrees2 = 0;

                    try {
                        degrees2 = Double.parseDouble(scanner.nextLine());
                    } catch (NumberFormatException e) {
                        System.out.println("Invalid input. Please enter a valid number.");
                        continue;
                    }

                    double radians2 = degrees2 * Math.PI / 180;
                    System.out.println("Radians: " + decimalFormat.format(radians2));
                    break;

                case 3:
                    isRunning = false;
                    System.out.println("Exiting...");
                    break;

                default:
                    System.out.println("Invalid option. Please enter a valid integer.");
                    break;
            }

            System.out.println();
        }

        scanner.close();
    }
}


