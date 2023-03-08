//Cory Parker
//CSC 101
//LAB 5

import java.util.Scanner;

class Program1
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter some STRING: ");
        String thing1 = input.nextLine();

        System.out.println("Enter an INTEGER: ");
        int num1 = input.nextInt();

        for (int i=0; i<=num1-1; i++){

            if ((i+1) < 10)
                System.out.println((i+1) + ")  " + thing1);
            else
                System.out.println((i+1) + ") " + thing1);
        }
        
        System.out.println("");
        input.nextLine();
        System.out.println("Enter another STRING: ");
        String thing2 = input.nextLine();

        System.out.println("Enter another INTEGER: ");
        int num2 = input.nextInt();
       
        int counter = 0;
        while (counter < num2) {
            if ((counter+1) < 10)
                System.out.println((counter+1) + ")  " + thing2);
            else
                System.out.println((counter+1) + ") " + thing2);

            counter++;
        }
    }
}
