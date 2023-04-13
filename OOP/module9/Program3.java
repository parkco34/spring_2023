//create a multi-dimensional array with variable-length 
//rows. This will create a triangular-shaped array that stores chars
import java.util.Scanner;

public class Program3 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("How many lines would you like in your triangle?\n>>> ");
        int numRows = scanner.nextInt();

        System.out.print("Which character will fill the array?\n>>> ");
        char fillChar = scanner.next().charAt(0);

        char[][] triangle = new char[numRows][];
        for (int i = 0; i < numRows; i++) {
            triangle[i] = new char[i + 1]; // # of elements in each row
            for (int j = 0; j < i + 1; j++) {
                triangle[i][j] = fillChar; // Fill position with filChar
            }
        }

        // Output triangle
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < triangle[i].length; j++) {
                System.out.print(triangle[i][j]);
            }
            System.out.println();
        }
    }
}

