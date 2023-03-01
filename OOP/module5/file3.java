import java.util.Scanner;

public class file3 {

    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        System.out.print("Enter number of rows: ");
        int rows = input.nextInt();
        
        System.out.print("Enter number of columns: ");
        int columns = input.nextInt();
        
        System.out.print("Enter starting value: ");
        int start = input.nextInt();
        
        System.out.print("Enter increment value: ");
        int increment = input.nextInt();
        
        // outer loop for rows
        for (int i = 0; i < rows; i++) {
            
            // inner loop for columns
            for (int j = 0; j < columns; j++) {
                
                // print current value and increment it
                System.out.printf("%5d", start);
                start += increment;
            }
            
            // print new line for next row
            System.out.println();
        }
    }
}

