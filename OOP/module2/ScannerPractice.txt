import java.util.Scanner;

class ScannerPractice 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.println("\nEnter your favorite food: \n");
        String food = input.nextLine();
        System.out.println("\nYou entered: " + food + "\n");

        System.out.println("\nEnter a whole number: \n");
        int whole = input.nextInt();
        System.out.println("\nYou entered: " + whole + "\n");

        System.out.println("\nEnter a real number: \n");
        double real = input.nextDouble();
        System.out.println("\nYou entered: " + real + "\n");

        System.out.println("\n\nYour favorite food is: " + food +
"\nThe product of the two numbers is: " + real*whole + ".\n"
                );
    }
}
