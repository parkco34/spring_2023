/* Step 6 - toString() Method
   Driver program created to accompany
   Step-by-Step Class instruction.  
*/

class MainApp{
   public static void main(String[] args ) { 
      //create LibraryPatron objects
      LibraryPatron patron001 = new LibraryPatron("Martha", 112233, 5, 2.25);
      
      //Verify data is set by calling toString() method
      System.out.println(patron001.toString()); 

      System.out.println(patron001); 
      //The commented out line above will also print the toString even though we didn't tell it to
      //The line above only works if a toString method has been defined in the LibraryPatron class   
      
  }
}
