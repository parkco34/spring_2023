// Cory Parker
// CSC 101 OOP
// Quadratic Sovler

import java.util.Scanner;

public class QuadraticCP {
    /*
     * This program solves a quadratic equation using the quadratic formula
     * ax^2 + bx + c = 0
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.println("Quadratic Equation Solver");
        System.out.println("Enter coefficients for the equation ax^2 + bx + c = 0:");
        
        double a = 0, b = 0, c = 0;
        
        // Ask for A and make sure it's not 0
        while (a == 0) {
            System.out.print("Enter A (cannot be 0): ");
            a = input.nextDouble();
            if (a == 0) {
                System.out.println("(ノ͡° ͜ʖ ͡°)ノ︵┻┻ ");
                System.out.println("A cannot be 0. Please enter a non-zero value.");
            }
        }
        
        // Ask for B and C
        System.out.print("Enter B (cannot be 0): ");
        b = input.nextDouble();
        System.out.print("Enter C (cannot be 0): ");
        c = input.nextDouble();
        
        // Calculate discriminant
        double discriminant = b * b - 4 * a * c;
        
        if (discriminant < 0) {
            System.out.println("No real answers");
        } else {
            double x1 = (-b + Math.sqrt(discriminant)) / (2 * a);
            double x2 = (-b - Math.sqrt(discriminant)) / (2 * a);
            System.out.println("Original equation: " + a + "x^2 + " + b + "x + " + c + " = 0");
            System.out.printf("x = %.2f \nx = %.2f\n", x1, x2);
        }
        
    }
}

