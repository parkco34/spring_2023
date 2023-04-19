import java.util.Scanner;

public class BookOrder {
    public static void main(String[] args) {
        Book[] books = new Book[5];

        // Test the constructors
        books[0] = new Book();
        books[1] = new Book("Autobiography of Benjamin Franklin", "Benjamin Franklin");
        books[2] = new Book("Thus Spoke Zarathustra", "Friedrich Nietzsche", 1883, 57.52, true);
        books[3] = new Book("How to Die", "Lucius Annaeus Seneca", 2018, 15.25, true);
        books[4] = new Book("A Modern Approach to Quantum Mechanics 2nd ed.", "John Townsend", 2012, 129.03, false);

        //Without user input
        System.out.println("============================================================");
        System.out.println("Without user input");
        System.out.println("\nAll books using for loop and toString()");
        for (int i=0; i < books.length; i++) {
            System.out.println(books[i].toString());
        }
        System.out.println("============================================================\n");

        // Set user input for the first book
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the title of the book: ");
        String title = scanner.nextLine();
        System.out.print("Enter the author of the book: ");
        String author = scanner.nextLine();
        System.out.print("Enter the year the book was published: ");
        int year = scanner.nextInt();
        System.out.print("Enter the price of the book: ");
        double price = scanner.nextDouble();
        System.out.print("Is the book used? (true/false): ");
        boolean used = scanner.nextBoolean();

        // Using setter methods
        books[0].setTitle(title);
        books[0].setAuthor(author);
        books[0].setYear(year);
        books[0].setPrice(price);
        books[0].setUsed(used);

        // User's books
        System.out.println("============================================================");
        System.out.println("All books using for each loop w/ Getters/Setters");
        for (Book book: books) {
            System.out.println("Title -> " + book.getTitle());
            System.out.println("Author -> " + book.getAuthor());
            System.out.println("Year -> " + book.getYear());
            System.out.println("Price -> " + book.getPrice());
            System.out.println("Used -> " + book.isUsed());
            System.out.println(); 
        }
        System.out.println("============================================================");
    }
}


