// Cory Parker
// CSC 101 OOP
// Dice Game
// Try to get a character from start (space 0) to finish (space 250) using two 6-sided dice before you run out of lives!
import java.util.Random;
import java.util.Scanner;

public class DiceGameCP {
    public static void main(String[] args) {
        int lives = 2;
        int space = 0;
        int rolls = 0;
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();
        System.out.println("Welcome to the Dice Game! You have two lives and start on space 0.");

        while (lives > 0 && space < 250) {

            System.out.println("1. Roll Dice");
            System.out.println("2. See Stats");
            System.out.println("3. Quit Game (and Lose)");
        
            int choice = scanner.nextInt();
            if (choice == 1) {
                System.out.println();
                System.out.println("You are currently on space " + space);
                int roll1 = random.nextInt(6) + 1;
                int roll2 = random.nextInt(6) + 1;
                rolls++;

                System.out.println("You rolled a " + roll1 + " and a " + roll2 + ".");

                if (roll1 == roll2) {
                    if (roll1 % 2 == 0) {
                        lives++;
                        System.out.println("You gained a life! ᕙ(▀̿̿Ĺ̯̿̿▀̿ ̿) ᕗ");

                    } else {
                        lives--;
                        System.out.println("You lost a life.");
                    }

                } else if ((roll1 == 1 && roll2 == 2) || (roll1 == 2 && roll2 == 1)) {
                    space -= 10;
                    System.out.println("You went back 10 spaces.");
                    System.out.println("You are now at space " + space);

                } else if ((roll1 == 1 && roll2 == 6) || (roll1 == 6 && roll2 == 1)) {
                    space += 20;
                    System.out.println("You moved forward 20 spaces!");
                    System.out.println("You are now at space " + space);

                } else if ((roll1 == 2 && roll2 == 4) || (roll1 == 4 && roll2 == 2)) {
                    System.out.println("You lost your turn!");
                    System.out.println("You are now at space " + space);

                } else if ((roll1 == 3 && roll2 == 5) || (roll1 == 5 && roll2 == 3)) {
                    space += (roll1 + roll2) * 2;
                    System.out.println("You are now at space " + space);
                    System.out.println("You moved forward " + (roll1 + roll2) * 2 + " spaces!");

                } else {
                    space += roll1 + roll2;
                    System.out.println("You move forward " + (roll1 + roll2) + " spaces!");
                    System.out.println("You are now at space " + space);
                }

                if (lives <= 0) {
                    System.out.println("You lost the game! You ran out of lives.");
                    break;
                }

                if (space >= 250) {
                    System.out.println("ᕙ(▀̿̿Ĺ̯̿̿▀̿ ̿) ᕗ   ᕙ(▀̿̿Ĺ̯̿̿▀̿ ̿) ᕗ   ᕙ(▀̿̿Ĺ̯̿̿▀̿ ̿) ᕗ   ᕙ(▀̿̿Ĺ̯̿̿▀̿ ̿) ᕗ   ᕙ(▀̿̿Ĺ̯̿̿▀̿ ̿) ᕗ");
                    System.out.println("Congratulations! You won the game in " + rolls + " rolls!");
                    System.out.println("ᕙ(▀̿̿Ĺ̯̿̿▀̿ ̿) ᕗ   ᕙ(▀̿̿Ĺ̯̿̿▀̿ ̿) ᕗ   ᕙ(▀̿̿Ĺ̯̿̿▀̿ ̿) ᕗ   ᕙ(▀̿̿Ĺ̯̿̿▀̿ ̿) ᕗ   ᕙ(▀̿̿Ĺ̯̿̿▀̿ ̿) ᕗ");
                    break;
                }

            } else if (choice == 2) {
                System.out.println("You are currently on space " + space);
                System.out.println("You have rolled " + rolls + " times.");
                System.out.println("You are currently on space " + space + ".");
                System.out.println("You have " + lives + " lives remaining.");

            } else if (choice == 3) {
                System.out.println("Thanks for playing! Goodbye!");
                break;

            } else {
                System.out.println("Invalid input. Please choose again.");
            }
        }
    }
}

