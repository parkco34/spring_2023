/*Driver class for Lab 11 - Sphere
  Do not alter this class!
  You may comment out lines as you test different 
  features but code should remain unaltered.
*/
import java.text.*;

class SphereTester{
   public static void main(String[] args){
      DecimalFormat two = new DecimalFormat("#.##");
      //The next three lines will test your three constructors
      Sphere sphere1 = new Sphere();
      Sphere sphere2 = new Sphere(5.5, "Lime Green", true);
      Sphere sphere3 = new Sphere(10);
      
      //The next three lines will test your getters and ensure the constructors correctly set values
      System.out.println("Testing the getters...");
      System.out.printf("Sphere1 radius: %.2f, color: %s, bouncy? %b\n", sphere1.getRadius(), sphere1.getColor(), sphere1.isBouncy());
      System.out.printf("Sphere2 radius: %.2f, color: %s, bouncy? %b\n", sphere2.getRadius(), sphere2.getColor(), sphere2.isBouncy());
      System.out.printf("Sphere3 radius: %.2f, color: %s, bouncy? %b\n", sphere3.getRadius(), sphere3.getColor(), sphere3.isBouncy());
      System.out.println();
      
      //Testing the toString()
      System.out.println("Testing the toString()...");
      System.out.println("Sphere1: " + sphere1);
      System.out.println("Sphere2: " + sphere2);
      System.out.println("Sphere3: " + sphere3);
      System.out.println();
      
      //Testing setters
      System.out.println("Testing the setters...");
      sphere1.setRadius(5.5);
      sphere1.setColor("Lime Green");
      sphere1.setBouncy(true);
      System.out.println("Sphere1: "+ sphere1);
      System.out.println();

      //Testing the equals() method
      System.out.println("Testing the equals() method...");
      System.out.println("Sphere1 = Sphere2? " + sphere1.equals(sphere2));
      System.out.println();
      
      //Testing the clone method
      System.out.println("Cloning Sphere3 to create Sphere 4...");
      Sphere sphere4 = sphere3.clone();
      System.out.println("Sphere3: " + sphere3);
      System.out.println("Sphere4: " + sphere4);
      System.out.println("Sphere3 = Sphere4? " + sphere3.equals(sphere4));
      System.out.println();
      
      //This will test the geometric equation methods
      System.out.println("Testing equation methods...");
      System.out.printf("Volume of Sphere1: %.2f\n", sphere1.getVolume());
      System.out.printf("Surface Area of Sphere2: %.2f\n",sphere2.getSurfaceArea());
      System.out.printf("Volume of Sphere3: %.2f\n", sphere3.getVolume());     
      System.out.printf("Surface Area of Sphere4: %.2f",sphere4.getSurfaceArea());
      System.out.println("\n");
      
      //This will test the increment/decrement methods
      System.out.println("Testing increment and decrement methods...");
      System.out.println("Sphere1 Original Radius: " + two.format(sphere1.getRadius()));
      System.out.println("Sphere1 radius incrementing by 2.2...");
      sphere1.incrementRadius(2.2);
      System.out.println("Sphere1 New Radius: " + two.format(sphere1.getRadius()));
      
      System.out.println("Sphere2 Original Radius: " + two.format(sphere2.getRadius()));
      System.out.println("Sphere2 radius decrementing by 5.1...");
      sphere2.decrementRadius(5.1);
      System.out.println("Sphere2 New Radius: " + two.format(sphere2.getRadius()));
      System.out.println();
       
      //This will test the random color method
      System.out.println("Testing the random color method...");
      System.out.println("Sphere3 Original Color: " + sphere3.getColor());
      sphere3.setRandomColor();
      System.out.println("Sphere3 First New Color: " + sphere3.getColor());
      sphere3.setRandomColor();
      System.out.println("Sphere3 Second New Color: " + sphere3.getColor());
      sphere3.setRandomColor();
      System.out.println("Sphere3 Third New Color: " + sphere3.getColor());
      System.out.println();
      
      //Testing the counter variable
      System.out.println("Testing the counter variable...");
      int total = Sphere.counter;
      System.out.println("There are " + total + " Sphere objects.");
   }
}
