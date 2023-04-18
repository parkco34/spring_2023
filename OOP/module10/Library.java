/* This program represents a small portion of a larger
   library management system. This program focuses on
   functionality that can be applied to a single
   LibraryPatron object. The menu gives the option to 
   view all of the patron's information (using toString()), 
   update each individual data member (using setters), with
   confirmation of each change printed (from the getters).
*/

import java.util.*;

class Library{
   public static void main(String[] args){
      //Variables needed throughout
      Scanner scan = new Scanner(System.in);
      boolean start = true;
      int menuInput;
      String newName;
      int newId;
      int newBookCount;
      double newFee;
      
      //The patron
      LibraryPatron patron = new LibraryPatron("Dave Jones", 1234567, 4, 1.10);
      
      //Continuous operation with menu
      while(start){
         System.out.println("Library Patron Management System");
         System.out.println("What would you like to do?");
         System.out.println("1. See all information");
         System.out.println("2. Update user's id");
         System.out.println("3. Update user's name");
         System.out.println("4. Update user's book count");
         System.out.println("5. Update user's fines");
         System.out.println("6. Exit");
         
         menuInput = scan.nextInt();
         
         if(menuInput < 1 || menuInput > 6){
            System.out.println("Outside of range.");
         } else if(menuInput == 6){                //exit
            System.out.println("Goodbye");
            start = false;
         } else if(menuInput == 1){                //print all info
            System.out.println(patron);
            System.out.println();
         } else if(menuInput == 2){                //update id
            System.out.println("What is the new id?");
            newId = scan.nextInt();
            patron.setId(newId);          
            System.out.println("New id is: " + patron.getId()); 
            System.out.println();             
         } else if(menuInput == 3){                //update name
            System.out.println("What is the new name?");
            scan.nextLine();                       //clear buffer 
            newName = scan.nextLine();
            patron.setName(newName);      
            System.out.println("New name is: " + patron.getName());
            System.out.println();           
         } else if(menuInput == 4){                //update book count
            System.out.println("What is the new book count?");
            newBookCount = scan.nextInt();
            patron.setBooks(newBookCount);
            System.out.println("New book count is: " + patron.getBooks());
            System.out.println();
         } else if(menuInput == 5){                //update fee amount
            System.out.println("What is the new fee amount?");
            newFee = scan.nextDouble();
            patron.setFee(newFee);
            System.out.println("New fee amount is: " + patron.getFee());
            System.out.println();
         }
      }
   }
}
            
         
