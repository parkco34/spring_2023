// Cory Parker
// CSC-101
// Program 3
import java.util.Scanner;

public class Program3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("This program will build a table based on user values.");
        System.out.print("How many rows will this table have? ");
        int numRows = input.nextInt();
        System.out.print("How many columns will this table have? ");
        int numCols = input.nextInt();
        System.out.print("What is the starting count value? ");
        int startValue = input.nextInt();
        System.out.print("What is the increment value for the counting? ");
        int increment = input.nextInt();

        // Build and print table
        System.out.println("\nYour Table:");
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                System.out.print(startValue + "\t");
                startValue += increment;
            }
            System.out.println();
        }
    }
}

// QUESTIONS
// 1) A while loop is PRE-TEST loop and may never run.
//   A do-while loop is a POST-TEST loop and runs atleast once.
//
// 2) 6 times
// 3) Infinite loop
// 4) When setting up a table using nested for loops, the outer loop controls the number of rows and the inner loop controls the number of columns.
