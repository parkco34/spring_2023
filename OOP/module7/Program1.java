import java.util.Scanner;

class Program1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get input for first triangle
        System.out.print("Enter length of side a for first triangle: ");
        double side1 = scanner.nextDouble();

        System.out.print("Enter length of side b for first triangle: ");
        double side2 = scanner.nextDouble();

        double side3 = findC(side1, side2);
        double perimeter1 = findPerimeter(side1, side2, side3);
        System.out.println("The length of the hypotenuse for the first triangle is " + side3);
        System.out.println("The perimeter of the first triangle is " + perimeter1);

        scanner.close();
    }

    public static double findC(double sideOne, double sideTwo) {
        return Math.sqrt(sideOne*sideOne + sideTwo*sideTwo);
    }

    public static double findPerimeter(double sideOne, double sideTwo, double sideThree) {
        return sideOne + sideTwo + sideThree;
    }
}

