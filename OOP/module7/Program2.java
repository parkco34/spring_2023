import java.util.Scanner;

class NestedForLoopProgram {

    public static void main(String[] args) {
        int rows = getGoodInt();
        int columns = getGoodInt();
        int startingNumber = getGoodInt();
        int increment = getGoodInt();
        printTable(rows, columns, startingNumber, increment);
    }

    public static int getGoodInt() {
        Scanner scanner = new Scanner(System.in);
        int goodInt = 0;
        boolean goodInput = false;
        do {
            System.out.print("Please enter a positive integer: ");
            try {
                int input = scanner.nextInt();
                if (input < 0) {
                    System.out.println("Invalid input. Please enter a positive integer.");
                } else {
                    goodInput = true;
                    goodInt = input;
                }
            } catch (java.util.InputMismatchException e) {
                System.out.println("Invalid input. Please enter a positive integer.");
                scanner.nextLine();
            }
        } while (!goodInput);
        return goodInt;
    }

    public static void printTable(int rows, int columns, int startingNumber, int increment) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(startingNumber + " ");
                startingNumber += increment;
            }
            System.out.println();
        }
    }
}

