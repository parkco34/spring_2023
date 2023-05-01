//This program will allow the user to dictate the size of an array and then fill it with integers, both negative and positive. You will then determine how many of the integers in the array are even and odd, as well as how many are positive and negative. (Count 0 as positive.) Four more arrays will be required to store the values from these categories - evens, odds, positives and negatives. All count data will be printed, followed by the actual values from each category
import java.util.Scanner;

public class CounterCP {
    public static void main(String[] args) {
        System.out.println("Integer Array Analyzer");
        System.out.println("This program will display and count the number of evens/odds and positive/negative values in a user-created array of integers.");

        Scanner input = new Scanner(System.in);
        int size = 0;
        int[] mainArray = null;
        while (true) {
            System.out.println("How many integers would you like to store in the array?");
            try {
                size = Integer.parseInt(input.next());
                if (size <= 0) {
                    System.out.println("Cannot be negative value or 0");
                } else {
                    mainArray = new int[size];
                    break;
                }
            } catch (NumberFormatException e) {
                System.out.println("Invalid input. Must be an integer.");
            }
        }

        for (int i = 0; i < size; i++) {
            while (true) {
                System.out.printf("Enter #%d: ", i + 1);
                try {
                    mainArray[i] = Integer.parseInt(input.next());
                    break;
                } catch (NumberFormatException e) {
                    System.out.println("Must be an integer.");
                }
            }
        }

        int evenCount = 0;
        int oddCount = 0;
        int positiveCount = 0;
        int negativeCount = 0;

        for (int i : mainArray) {
            if (i % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }

            if (i >= 0) {
                positiveCount++;
            } else {
                negativeCount++;
            }
        }

        int[] evenArray = new int[evenCount];
        int[] oddArray = new int[oddCount];
        int[] positiveArray = new int[positiveCount];
        int[] negativeArray = new int[negativeCount];

        int evenIndex = 0;
        int oddIndex = 0;
        int positiveIndex = 0;
        int negativeIndex = 0;

        for (int i : mainArray) {
            if (i % 2 == 0) {
                evenArray[evenIndex++] = i;
            } else {
                oddArray[oddIndex++] = i;
            }

            if (i >= 0) {
                positiveArray[positiveIndex++] = i;
            } else {
                negativeArray[negativeIndex++] = i;
            }
        }

        System.out.println("\nThere are " + evenCount + " even numbers.");
        System.out.print("They are: ");
        for (int i : evenArray) {
            System.out.print(i + " ");
        }

        System.out.println("\n\nThere are " + oddCount + " odd numbers.");
        System.out.print("They are: ");
        for (int i : oddArray) {
            System.out.print(i + " ");
        }

        System.out.println("\n\nThere are " + positiveCount + " positive numbers.");
        System.out.print("They are: ");
        for (int i : positiveArray) {
            System.out.print(i + " ");
        }

        System.out.println("\n\nThere are " + negativeCount + " negative numbers.");
        System.out.print("They are: ");
        for (int i : negativeArray) {
            System.out.print(i + " ");
        }

        System.out.println("\nGoodbye.");
        input.close();
    }
}
