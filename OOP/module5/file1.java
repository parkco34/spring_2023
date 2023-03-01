import java.util.Scanner;

public class file1 
{

    public static void main(String[] args) 
    {

        Scanner scanner = new Scanner(System.in);

        // First example using for loop
        System.out.print("Enter a string: ");
        String inputString1 = scanner.nextLine();

        System.out.print("Enter a positive integer: ");
        int inputInt1 = scanner.nextInt();

        for (int i = 1; i <= inputInt1; i++) {
            System.out.println(i + ". " + inputString1);
        }

        // Second example using while loop
        scanner.nextLine(); // consume the remaining newline character

        System.out.print("Enter another string: ");
        String inputString2 = scanner.nextLine();

        System.out.print("Enter another positive integer: ");
        int inputInt2 = scanner.nextInt();

        int j = 1;
        while (j <= inputInt2) {
            System.out.println(j + ". " + inputString2);
            j++;
        }

        scanner.close();
    }
}

