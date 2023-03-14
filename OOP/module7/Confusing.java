
class Confusing{
    public static void main(String[] args){
            int carrot = 1;
            int eggplant = 2;
            int squash = 3;
            int pepper = 4;
          
            int corn = flipFlop(carrot, eggplant);
            System.out.println(corn);
            int onion = flipFlop(corn, squash);
            System.out.println(onion);
            flipFlop(onion, corn);  
            System.out.println(squash);
            System.out.println(flipFlop(pepper, pepper));   
    }
   
    public static int flipFlop(int corn, int onion){
        int carrot = corn + onion;
        int eggplant = carrot * 2;
        System.out.println(eggplant);
        int squash = eggplant * 2;
        return squash;
    }
}

// Guesses:
// 

