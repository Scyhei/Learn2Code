public class Conditions{

    public static void guessNumber(int guess){
        if(guess > 555){
            System.out.println("Your guess is too high.");
        }
        else if(guess < 555){
            System.out.println("Your guess is too low.");
        }else{
            System.out.println("Correct. You guessed it!");
        }
    }
    public static void main(String[] args){
        guessNumber(600);
        guessNumber(500);
        guessNumber(555);
    }
}