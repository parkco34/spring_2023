import java.util.Scanner;

class Program1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get input for first triangle
        System.out.print("Enter length of side a for first triangle: ");
        double a1 = scanner.nextDouble();

        System.out.print("Enter length of side b for first triangle: ");
        double b1 = scanner.nextDouble();

        double c1 = findC(a1, b1);
        double perimeter1 = findPerimeter(a1, b1, c1);
        System.out.println("The length of the hypotenuse for the first triangle is " + c1);
        System.out.println("The perimeter of the first triangle is " + perimeter1);

        scanner.close();
    }

    public static double findC(double a, double b) {
        return Math.sqrt(a*a + b*b);
    }

    public static double findPerimeter(double a, double b, double c) {
        return a + b + c;
    }
}

