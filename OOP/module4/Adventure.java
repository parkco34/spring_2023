import java.util.Scanner;

class Adventure 
{
    public static void main(String[] args)
    {
        System.out.println("\nWELCOME TO ¯\\_( ͡° ͜ʖ ͡°)_/¯\n");
        Scanner input = new Scanner(System.in);
        System.out.println("\nPlease decide, right or left?: ");

        String decision = input.nextLine();

        if (decision.equals("right")) {
            System.out.println("\nRight we go ...\nFor how many rightSteps? (Enter an integer from 1 to 3)");
            String rightSteps = input.nextLine();

            if (rightSteps.equals("3")) {
                System.out.println("\nMoving right " + rightSteps + " steps.");
            }
            else if (rightSteps.equals("2")) {
                System.out.println("\nMoving right " + rightSteps + " steps.");
            }
            else if (rightSteps.equals("1")) {
                System.out.println("\nMoving right for " + rightSteps + " steps.");
            }
            else {
                System.out.println("\nInvalid input, so you turned right but are going nowhere... \nJust like your Rabbi always said!");
            }
        }
        else if (decision.equals("left")) {
            System.out.println("\nLeft we go ... \nFor how many steps? (Enter an integer from 1 to 3)");
            String leftSteps = input.nextLine();

            if (leftSteps.equals("3")) {
                System.out.println("\nMoving left " + leftSteps + " steps.");
            }
            else if (leftSteps.equals("2")) {
                System.out.println("\nMoving left " + leftSteps +  " steps.");
            }
            else if (leftSteps.equals("1")) {
                System.out.println("\nMoving left " + leftSteps + " steps.");
            }
            else {
                System.out.println("\nInvalid input, so you turned left but are going nowhere ... \nJust like your Pastor always said!");
            }
        }
        else  {
            System.out.println("\nLO SIENTO ... (｢•-•)｢ ʷʱʸ?");
        }
    }
}

//QUESTIONS:
// 1) Because Switch statements are not for RANGES of values, but discrete/specific values within a decision tree
// 2) FALSE
//    TRUE
// 3) Because Java looks at the objects instead of the addresses like (==), meaning it would provide a more accurate boolean value
// 4) A
// 5) X
//    P
//    T
//    W
