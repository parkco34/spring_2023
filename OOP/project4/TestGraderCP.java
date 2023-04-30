//This program will allow the user to check multiple choice responses against a test key that is stored in an array.  
//When the user starts the program, it will ask 20 times what letter was entered for that problem (questions 1-20) on a test.  Each input will be compared to the appropriate spot in the array (entry 1 compared to index 0) to see if they match.  The number of matches will be tracked and a score will be calculated and output.
//The entire program only needs to run once. The only valid inputs for the user are A, B, C, D or a, b, c, d.  All other inputs need to be handled in some way.  This is up to you as long as it does not mess up the overall functioning of the program. 
import java.util.Scanner;

public class TestGraderCP
{
    // Static method that checks if student passed or failed
    public static boolean passFail(double percentage)
    {
        if (percentage >= 75) {
            System.out.println("PASSED! （￣ε￣ʃƪ）");
            return true;
        }
        else {
            System.out.println("Lo Siento ... ʕノ•ᴥ•ʔノ ︵ ┻━┻");
            return false;
        }
    }

    public static void main(String[] args) 
    {
        char[] answers = {'B', 'D', 'A', 'A', 'C', 'A', 
            'B', 'A', 'C', 'D', 'B', 'C', 
            'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
        int correct = 0;

        Scanner input = new Scanner(System.in);
        System.out.println("This is the answer key to Professor Shaffer’s super hard test.\n" 
                + "Enter the response for each question to see your final score.\n"
                + "Enter A/a, B/b, C/c, or D/d.");

        // Questions while incrementing counter, 'correct'
        for (int i=0; i < answers.length; i++) {
            System.out.println("Answer to Question " + (i+1) + "? " );
            String userInput = input.nextLine();
            // If user hasn't input any of the options, have them try again
            while(userInput.length() == 0 
                    || (userInput.charAt(0) != 'A' 
                    && userInput.charAt(0) != 'B'
                    && userInput.charAt(0) != 'C' 
                    && userInput.charAt(0) != 'D' 
                    && userInput.charAt(0) != 'a'
                    && userInput.charAt(0) != 'b'
                    && userInput.charAt(0) != 'c'
                    && userInput.charAt(0) != 'd'
                    )) {
                System.out.println("Invalid input.");
                System.out.println("Answer to Question " + (i+1) + "? ");
                userInput = input.nextLine();
            }
            
            char response = userInput.toUpperCase().charAt(0);
            if (response == answers[i]) {
                correct++;
                System.out.println("Correct! ᕙ(▀̿̿Ĺ̯̿̿▀̿ ̿) ᕗ") ;
            }
            else {
                System.out.println("Incorrect ... ʕノ•ᴥ•ʔノ ︵ ┻━┻");
            }
        }
        double percentage = (double) correct / answers.length * 100;
        System.out.println("\nYou answered " + correct + " out of " + answers.length + " questions correctly.");
        System.out.println("Your grade is " + percentage + "%.");
        passFail(percentage);
    }
}
