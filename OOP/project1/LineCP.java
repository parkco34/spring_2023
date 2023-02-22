// Cory Parker
// CSC 101 - Project1
import java.util.Scanner;

class LineCP {
    public static void main(String[] args) {

        // Create a scanner object to read user input
        Scanner input = new Scanner(System.in);
        // Print introduction and instructions to the user
        System.out.println("This program will determine the distance between two points, the x, y coordinates of the midpoint, and the slope of the line");
        System.out.println("Enter the x coordinate of the first point: ");
        // Read in the coordinates of point 1
        double x1 = input.nextDouble();

        System.out.println("Enter the y coordinate of the first point: ");
        double y1 = input.nextDouble();

        System.out.println("Enter the x coordinate of the second point: ");
        double x2 = input.nextDouble();

        System.out.println("Enter the y coordinate of the second point: ");
        double y2 = input.nextDouble();

        // Calculate the distance between the two points
        double distance = Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2));

        // Calculate the midpoint coordinates
        double midX = (x1 + x2) / 2;
        double midY = (y1 + y2) / 2;

        // Calculate the slope of the line
        double slope = (y2 - y1) / (x2 - x1);

        System.out.println("Point 1: (" + x1 + ", " + y1 + ")");
        System.out.println("Point 2: (" + x2 + ", " + y2 + ")");
        System.out.printf("Distance: %.2f\n", distance);
        System.out.println("Midpoint: (" + midX + ", " + midY + ")");
        System.out.printf("Slope: %.2f\n", slope);
    }
}

