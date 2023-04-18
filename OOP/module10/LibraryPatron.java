/*Step 6 - the toString() method
  The toString() method gives you a quick
  and easy way to display all data associated
  with a particular object.
  If data within needs formatted, you must perform it
  within the method. It cannot be formatted when
  being called in your Main program. This is why DecimalFormat
  has been imported.
*/
import java.text.*;

class LibraryPatron{
   //Only to be used for proper dollar formatting
   //for the toString() method
   DecimalFormat df = new DecimalFormat("0.00");
   
   //Private data members
   private String name; 
   private int id;
   private int books;
   private double fee;
   
   //Constructors
   public LibraryPatron(){
      name = "person";
      id = 99999999;
      books = -1;
      fee = -1;
   }

   public LibraryPatron(String word, int code){
      name = word;
      id = code;
      books = 0;
      fee = 0.00;
   }
   
   public LibraryPatron(String word, int code, int count, double fines){
      name = word;
      id = code;
      books = count;
      fee = fines;
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
}
   

   
   
