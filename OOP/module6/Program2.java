import java.util.Scanner;

public class Program2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("Enter a number between 1 and 100. Enter 0 to end.");
            int number = 0;
            try {
                number = Integer.parseInt(scanner.nextLine());
                if (number == 0) {
                    break;
                } else if (number < 1 || number > 100) {
                    System.out.println("Number outside of range.");
                    continue;
                }
            } catch (NumberFormatException e) {
                System.out.println("Must be an integer.");
                continue;
            }

            for (int i = 0; i < number; i++) {
                System.out.print("$ ");
            }
            System.out.println();
        }

        System.out.println("Goodbye!");
    }
}

// QUESTIONS
// 1) code that may potentially throw an exception.
// 2) False
// 3) The more specific catch block should occur prior to the more general one.
// 4) keyboard.nextLine() 
// 5) in the InputMismatchException block only
