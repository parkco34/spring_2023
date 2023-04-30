import java.util.Scanner;

public class delete {

    public static void main(String[] args) {
        char[] answerKey = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
        int numCorrect = 0;
        Scanner scanner = new Scanner(System.in);
        System.out.println("This is the answer key to Professor Shaffer’s super hard test. Enter the response for each question to see your final score. Enter A/a, B/b, C/c, or D/d.");
        for (int i = 0; i < answerKey.length; i++) {
            System.out.print("Answer to Question " + (i+1) + "? ");
            String input = scanner.nextLine();
            while (input.length() == 0 || (input.charAt(0) != 'A' && input.charAt(0) != 'B' && input.charAt(0) != 'C' && input.charAt(0) != 'D' && input.charAt(0) != 'a' && input.charAt(0) != 'b' && input.charAt(0) != 'c' && input.charAt(0) != 'd')) {
                System.out.println("Invalid input.");
                System.out.print("Answer to Question " + (i+1) + "? ");
                input = scanner.nextLine();
            }
            char response = input.toUpperCase().charAt(0);
            if (response == answerKey[i]) {
                System.out.println("Correct");
                numCorrect++;
            } else {
                System.out.println("Incorrect");
            }
        }
        double percentage = (double) numCorrect / answerKey.length * 100;
        System.out.println("\nYou answered " + numCorrect + " out of " + answerKey.length + " questions correctly. Your grade is " + percentage + "%. " + (percentage >= 75 ? "You passed!" : "You failed."));
    }

}

