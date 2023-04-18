/*Step 10 - Main Method for testing
  You can throw a small main method in for
  testing purposes.  Recommended to put it 
  at the bottom of the class. 
*/

import java.text.*;

class LibraryPatron_Arr{
    //Only to be used for proper dollar formatting
   //for the toString() method
   DecimalFormat df = new DecimalFormat("0.00");
   
   //Private data members
   private String name;
   private int id;
   private int books;
   private double fee;
   
   //Static Constants - Can use these in or outside of the class
   public final static double DAILY_FINE = .35;
   public final static int MAX_BOOKS = 15;
   public final static double MAX_FINE = 10;
   
   //Static Variable
   public static int counter = 0;
   
   //Constructors
   public LibraryPatron(){
      name = "person";
      id = 99999999;
      books = -1;
      fee = -1;
      counter++;
   }
   
   public LibraryPatron(String word, int code){
      name = word;
      id = code;
      books = 0;
      fee = 0.00;
      counter++;
   }
   public LibraryPatron(String word, int code, int count, double fines){
      name = word;
      id = code;
      books = count;
      fee = fines;
      counter++;
   }
   
   //Accessor Methods (Getters)
   public String getName(){
      return name;  
   }
      
   public int getId() { 
      return id;                                            
   }                       
      
   public int getBooks() {
      return books;
   }  
   
   public double getFee(){
      return fee;
   }
   
   //Modifier Methods (Setters
   public void setName(String word){
      name = word;
   }
   
   public void setId(int num){
      id = num;
   }
   
   public void setBooks(int count){
      books = count;
   }
   
   public void setFee(double fine){
      fee = fine;
   }  
   
   //toString() Method to show data quickly
   public String toString(){
      return "ID: " + id +
             "\nName: " + name + 
             "\nBooks: " + books + 
             "\nFines: " + df.format(fee);
   }  
    
   //Additional methods
   //Method for increasing fees - doesn't return anything
   //Requires the number of days so fee can be assessed
   public void addFee(int days){
      fee = fee + (DAILY_FINE * days); //adds new fee to old fees
   }
   
   //Method for decreasing fees - doesn't return anything
   //Requires the payment amount to be passed in
   public void payFee(double paid){
      fee = fee - paid;  //subtracts payment from fee
   }
   
   //Method for checking out books (increase book count)
   public void checkOutBooks(int number){
      if(books > MAX_BOOKS || books + number > MAX_BOOKS){
         System.out.println("You're over the limit.");
      } else {
         books = books + number;                               //adds new number to old count
      }  
   }
   
   //Method for returning books (decreases book count)
   public void returnBooks(int number){
      if(number > books){
         System.out.println("Stop giving me your personal books.");
      } else {
         books = books - number;
      }
   }
   
      //Public method that gives patron's book check-out status
   //Relies on the private method
   public String returnStatus(){
      if (isGood() == true){
         return "Account is good.";
      } else {
         return "Cannot check out more books.";
      }
   }
   
   //Public method that gives patron's computer access status
   //Relies on the private method
   public String computerAccess(){
      if(isGood() == true){
         return "Computer access is granted.";
      } else {
         return "Computer access is denied.";
      }
   }
   
   //Public method that tells how much the patron
   //must pay to be in good standing.
   //Relies on the private method
   public void accountFeedback(){
      double payNow;
      int returnBooks;
      
      if(isGood() == true){
         payNow = 0;
         returnBooks = 0;
      } else {
         payNow = fee-MAX_FINE;
         returnBooks = books - MAX_BOOKS;
         if(payNow <= 0){
            payNow = 0;
         } 
         if(returnBooks <= 0){
            returnBooks = 0;
         }
      }  
      if(payNow == 0 && returnBooks == 0){
         System.out.println("Your account is in good standing.");
      } else {   
         System.out.println("To get your account into good standing, you must pay $" + df.format(payNow) +
               " and/or return " + returnBooks + " books.");
      }
   }
   
   //Private method to be used in two other public methods
   private boolean isGood(){
      if(fee <= 10.00 && books <= 15){
         return true;
      } else {
         return false;
      }
   }
   
   
   //main method for testing
   //beware that you can access private data members and private methods from within this
   //if you were in a different class, you would not be able to access those things
   public static void main(String[] args){
      LibraryPatron p1 = new LibraryPatron("Jo", 12345, 5, 2);
      System.out.println(p1.toString());
      System.out.println(p1.getName());        //this works because a we are still inside of the same class where name is declared
                                          //this will not work outside of this class so beware!                          
   }
}
   

