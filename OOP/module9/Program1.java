// create a program that creates and uses several different arrays. The user will create the first array and fill it with Strings. You will use information from the String array to create two additional. One of these arrays will store the lengths of the Strings. The other will store the first character of each String.
import java.util.Scanner;

public class  Program1 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        
        // Get the number of strings from the user
        System.out.println("Array Generator");
        System.out.println("How many Strings would you like to enter?");
        int numStrings = input.nextInt();
        input.nextLine(); // Deal with leftover newline character
        
        // Create the String array and fill it
        String[] strings = new String[numStrings];
        for (int i = 0; i < numStrings; i++) {
            System.out.println("Enter string " + (i+1) + ":");
            strings[i] = input.nextLine();
        }
        
        // Create the arrays of lengths and first characters
        int[] lengths = new int[numStrings];
        char[] firstChars = new char[numStrings];
        for (int i = 0; i < numStrings; i++) {
            lengths[i] = strings[i].length(); // length of each string
            firstChars[i] = strings[i].charAt(0); // First character 
        }
        
        System.out.println("\nInformation sorted by String using single for loop:");
        for (int i = 0; i < numStrings; i++) {
            System.out.println("String: " + strings[i]);
            System.out.println("Length: " + lengths[i]);
            System.out.println("First Character: " + firstChars[i]);
            System.out.println();
        }
        
        // Information by type using three for each loops
        System.out.println("\nInformation by type using three for each loops:");
        
        System.out.println("All Strings");
        for (String s : strings) {
            System.out.println(s);
        }
        System.out.println();
        
        System.out.println("All Lengths");
        for (int length : lengths) {
            System.out.println(length);
        }
        System.out.println();
        
        System.out.println("All Chars");
        for (char c : firstChars) {
            System.out.println(c);
        }
        
        System.out.println("\nGoodbye.");
    }
}

