// Method Characteristics:
// - Only contains letters, numbers, $ symbol and _
// - 

import java.util.Scanner;

class delete
{
    public static void main(String[] args)
    {
        System.out.println("Enter two integers:");
        Scanner input = new Scanner(System.in);
        int num1 = input.nextInt();
        int num2 = input.nextInt();

        System.out.println("Largest number is: " + biggerNumber(num1, num2));
    }

    public static int biggerNumber(int num1, int num2)
    {
        int result;

        if (num1 < num2) {
            result = num2;
        } else {
            result = num1;
        }
        
        return result;
    }

    public static int smallerNumber(int num1, int num2)
    {
        int result;

        if (num1 > num2) {
            result = num2;
        } else {
            result = num1;
        }

        return result;
    }

    try {
        int newNumber = input.nextInt();
        return newNumber;
    }
    catch {

    }
}

class Practice
{
    public static void main(String[] args)
    {
        delete.main(null);
    }
}
