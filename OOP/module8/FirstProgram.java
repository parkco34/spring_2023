//==============================================================================
//Create a program that takes the user’s String input and “fixes it” 
//by making sure it written as a proper sentence.
//
//Your program must take a sentence, make sure the first character is uppercase,
//and that all other characters are lowercase. (We will not be entering any proper
//names.) You must also add a period to the end but only if the user did not enter
//any punctuation. If they entered a period, question mark, or exclamation point at
//the end, you do not need to add a period.
//Make sure there are no spaces at the beginning of the String. If there are,
//remove them using a String method.
//==============================================================================
import java.util.Scanner;

class FirstProgram {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a sentence: ");

        String sentence = input.nextLine().trim();  // Get rid of trailing/leading whitespace
        
        if (sentence.length() > 0) {
            sentence = Character.toUpperCase(sentence.charAt(0)) +
                sentence.substring(1).toLowerCase();

            if (sentence.charAt(sentence.length()-1) != '.' || sentence.charAt(sentence.length()-1) != '!'
                    || sentence.charAt(sentence.length()-1) != '?') {
                sentence += '.';
            }
//            if (!sentence.endsWith(".") && !sentence.endsWith("?") && !sentence.endsWith("!")) {
//                sentence += ".";
//            } else if (sentence.length() > 1 && sentence.charAt(sentence.length() - 2) == '.') {
//                sentence = sentence.substring(0, sentence.length() - 1);
//            }
        }

        System.out.println(sentence);
    }
}
