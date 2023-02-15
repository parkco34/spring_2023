import java.util.Scanner;

class Remainders {
    public static void main(String[] args)
    {
        System.out.println("\nPlease enter two integers: \n");
        Scanner input = new Scanner(System.in);

        int dividend = input.nextInt();
        int divisor = input.nextInt();
        int remainder = dividend % divisor;

        switch(remainder) {
            case 0:
                System.out.println(dividend + " is a multiple of " + divisor + ".\n");
                break;

            default:
                System.out.println("\nThe dividend " + dividend + " is not a multiple of " + divisor);
                System.out.println("The remainder is: " + remainder);
        }
    }
}
