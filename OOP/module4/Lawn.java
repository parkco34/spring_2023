import java.util.Scanner;

class Lawn
{
    public static void main(String[] args)
    {
        System.out.println("This program will give you feedback about your lawn’s height.");
        System.out.println("Please enter the height of your grass in inches:\n " );
        Scanner input = new Scanner(System.in);

        double inches = input.nextDouble();

        if (inches < 0) {
            System.out.println("\nGrass cannot have a negative height");
        }
        else if (inches <= 1.0) {
            System.out.println("\nYou need to plant grass seed.");
        }
        else if (1.01 <= inches && inches <= 2.0) {
            System.out.println("\nDo not mow your grass this short.\n");
        }
        else if (2.01 <= inches && inches <= 4.0) {
            System.out.println("\nYour lawn is perfect.\n");
        }
        else if (4.01 <= inches && inches <= 6.0) {
            System.out.println("\nA bit high so make plans to mow soon.\n");
        }
        else if (inches >= 6.01){
            System.out.println("\nYou are out of compliance. Mow your lawn now.");
        }

        System.out.println("\nGoodbye ( ͡~ ͜ʖ ͡°)");
    }
}
