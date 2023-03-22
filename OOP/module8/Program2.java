import java.util.Scanner;

public class Program2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("This program will help encrypt/decrypt a message using Caesar cipher.\n");

        // Ask user if they want to encrypt or decrypt
        System.out.println("Do you want to encrypt or decrypt?");
        String choice = scanner.nextLine().toLowerCase();
        while (!choice.equals("encrypt") && !choice.equals("decrypt")) {
            System.out.println("Invalid choice. Please enter either 'encrypt' or 'decrypt'.");
            choice = scanner.nextLine().toLowerCase();
        }

        // Get the plaintext message
        System.out.println("\nEnter your " + choice + " message:");
        String message = scanner.nextLine();

        // Get the encryption/decryption key
        System.out.println("Enter the " + choice + " key (1-26):");
        int key = scanner.nextInt();
        scanner.nextLine(); // consume the newline character

        // Encrypt or decrypt the message
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < message.length(); i++) {
            char c = message.charAt(i);
            if (Character.isLetter(c)) {
                int code = (int) c + key;
                if (choice.equals("decrypt")) {
                    code = (int) c - key;
                }
                if (Character.isUpperCase(c)) {
                    code = (code - 65) % 26 + 65;
                } else {
                    code = (code - 97) % 26 + 97;
                }
                c = (char) code;
            }
            result.append(c);
        }

        // Print the result
        System.out.println("\nYour " + choice + "ed text: " + result.toString());

        scanner.close();
    }

}

