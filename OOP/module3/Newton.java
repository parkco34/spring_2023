import java.util.Scanner;
import java.lang.Math;
import java.text.DecimalFormat;

class Newton
{
    public static void main(String[] args)
    {
        // Preliminaries
        DecimalFormat sciNo = new DecimalFormat("0.000E0");
        Scanner input = new Scanner(System.in);
        final double GRAVITATIONAL_CONST = 6.674E-11;
        
        System.out.println("\nEnter the mass (in kg) for mass one: \n");
        double massOne = input.nextDouble();
        System.out.println("\nEnter a mass (in kg) for mass two: \n");
        double massTwo = input.nextDouble();
        System.out.println("\nEnter the distance between the two mases (in meters): \n");
        double distance = input.nextDouble();
        double distanceSqrd = Math.pow(distance, 2);

        double force = GRAVITATIONAL_CONST * (massOne * massTwo) / distanceSqrd;

        // Output
        System.out.println("\n***********************************************************");

        System.out.println("\nMass 1 is: " + sciNo.format(massOne) + " kg\nMass 2: " + sciNo.format(massTwo) + " kg\nDistance between the masses: " + 
                sciNo.format(distance) + " m (meters)\n");
        System.out.println("The force between the two masses is: " + sciNo.format(force) + " N (newtons).\n");
        System.out.println("\n***********************************************************");

    }
}

//Example:
//    massOfEarth = 5.97219E24;
//    massOfMoon = 7.35E22;
//    earthMoonDistance = 384.4E6;
//    ---------------------------
//    force = 
//    ---------------------------
