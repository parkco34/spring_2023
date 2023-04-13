//You will create a program that stores and prints a custom multiplication table. A standard multiplication table goes from 1-12 both vertically and horizontally, as shown below. The products create a mirror image over the diagonal.
import java.util.Scanner;

public class Program2 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the upper boundary of the table: ");
        int n = scanner.nextInt();
        
        // Create 2-D array of size n x n
        int[][] table = new int[n][n];
        
        // Fill the array with products of numbers from 1 to n
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                table[i-1][j-1] = i * j;
            }
        }
        
        // Print the array in table format using printf
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.printf("%6d", table[i][j]);
            }
            System.out.println();
        }
    }
}

