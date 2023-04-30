//The user will enter their chosen password as a String and your code will examine this String to determine if it meets all of the rules. You will then print that the password is valid or not valid. If it is not valid, you will list all of the reasons why (what is missing).
//
// The password must contain:
// At least 8 characters
// At least one uppercase letter
// At least one lowercase letter
// At least one number
// At least one special character from the following list: 
// ! “ # $ % & ‘ ( ) * + ` - . / : ; < = > ? @ [ \ ] ^ _
//(The characters above are 33 - 47, 58 - 64, and 91 - 95 in the ASCII table.)
//
//	Not only do you display if the password is valid or invalid, you must also display 
//the reasons why. 
//
//If more than one condition is not met, all unmet conditions must 
//be presented to the user at the same time
import java.util.Scanner;

public class PasswordCP 
{
    
    public static void main(String[] args) 
    {
        
        Scanner input = new Scanner(System.in);
        
        System.out.println("Enter a password to see if it satisfies all of the rules.");
        System.out.printf("The password must contain:%n"
            + "- At least 8 characters%n"
            + "- At least one uppercase letter%n"
            + "- At least one lowercase letter%n"
            + "- At least one number%n"
            + "- At least one special character from the following list:%n"
            + "! “ # $ %% & ‘ ( ) * + ` - . / : ; < = > ? @ [ \\ ] ^ _\n");
        System.out.print("Password: ");

//        System.out.println("The password must contain:\n"
//            + "At least 8 characters"
//            + "At least one uppercase letter"
//            + "At least one lowercase letter"
//            + "At least one number"
//            + "At least one special character from the following list:" 
//            + "! “ # $ % & ‘ ( ) * + ` - . / : ; < = > ? @ [ \\ ] ^ _");
        String password = input.nextLine();
       
        // Variables to ensure rules are followed
        boolean hasLength = false;
        boolean hasUppercase = false;
        boolean hasLowercase = false;
        boolean hasNumber = false;
        boolean hasSpecial = false;
        
        // Password length check
        if (password.length() >= 8) {
            hasLength = true;
        }
        
        // Uppercase, lowercase, and numeric characters
        for (int i = 0; i < password.length(); i++) {
            char c = password.charAt(i);
            if (Character.isUpperCase(c)) {
                hasUppercase = true;
            } else if (Character.isLowerCase(c)) {
                hasLowercase = true;
            } else if (Character.isDigit(c)) {
                hasNumber = true;
            }
        }
        
        // Special Characters via ASCII values
        for (int i = 0; i < password.length(); i++) {
            char c = password.charAt(i);
            if (c >= 33 && c <= 47 || c >= 58 && c <= 64 || c >= 91 && c <= 95) {
                hasSpecial = true;
            }
        }
       
        // Check for validity
        if (hasLength && hasUppercase && hasLowercase && hasNumber && hasSpecial) {
            System.out.println("This is a valid password.");
        } else {
            System.out.println("Invalid Password Choice");
            if (!hasLength) {
                System.out.println("-Must have a length of 8 or more");
            }
            if (!hasUppercase) {
                System.out.println("-Missing an uppercase letter");
            }
            if (!hasLowercase) {
                System.out.println("-Missing a lowercase letter");
            }
            if (!hasNumber) {
                System.out.println("-Missing a number");
            }
            if (!hasSpecial) {
                System.out.println("-Missing a special character");
            }
        }
        
        System.out.println("Goodbye.");
        
        input.close();
    }
}

