import java.text.DecimalFormat;
import java.util.Random;

public class Sphere {

    // Private data members
    private double radius;
    private String color;
    private boolean bouncy;

    // static variable
    private static int counter = 0;
   
    // Constructors
    public Sphere() {
        this.radius = 0.0;
        this.color = "White";
        this.bouncy = false;
        counter++;
    }
    
    public Sphere(double radius) {
        this.radius = radius;
        this.color = "White";
        this.bouncy = false;
        counter++;
    }
    
    public Sphere(double radius, String color, boolean bouncy) {
        this.radius = radius;
        this.color = color;
        this.bouncy = bouncy;
        counter++;
    }
   
    // Accessor methdods
    public double getRadius() {
        return radius;
    }
    
    public double getVolume() {
        return (4.0/3.0) * Math.PI * Math.pow(radius, 3);
    }
    
    public double getSurfaceArea() {
        return 4 * Math.PI * Math.pow(radius, 2);
    }
    
    public String getColor() {
        return color;
    }
    
    public boolean isBouncy() {
        return bouncy;
    }
   
    // Mutator methods
    public void setRadius(double radius) {
        this.radius = radius;
    }
    
    public void setColor(String color) {
        this.color = color;
    }
    
    public void setBouncy(boolean bouncy) {
        this.bouncy = bouncy;
    }
    
    public void setRandomColor() {
        Random rand = new Random();
        int randomNum = rand.nextInt(6);

        switch(randomNum) {
            case 0:
                this.color = "Goldenrod";
                break;

            case 1:
                this.color = "Blue";
                break;

            case 2:
                this.color = "White";
                break;

            case 3:
                this.color = "Green";
                break;

            case 4:
                this.color = "Red";
                break;
    
            case 5:
                this.color = "Black";
                break;

        }
    }

    // method to output state
    public String toString() {
        DecimalFormat df = new DecimalFormat("#.00");
        String formattedRadius = df.format(radius);
        String bouncyStr = bouncy ? "Bouncy" : "Non-Bouncy";
        return bouncyStr + " " + color + " sphere with a radius of " + formattedRadius;
    }
    // Determine whether this spehere is the same as some other sperher, where truth value depends on both radii
    
    public boolean equals(Sphere otherSphere) {
        return this.radius == otherSphere.radius && this.color.equals(otherSphere.color) && this.bouncy == otherSphere.bouncy;
    }
   
    // Clones original sphere's values
    public Sphere clone() {
        return new Sphere(this.radius, this.color, this.bouncy);
    }
   
    // Increment radii
    public void incrementRadius(double amount) {
        radius += amount;
    }
 
    // Decrment radii
    public void decrementRadius(double amount) {
        radius -= amount;
    }
}

