public class ForLoops{
    public static void main(String[] args){
        int[] array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int factorial = 1;

        /*TODO: calculate the factorial using a for loop here*/
        for(int i = 0; i<array.length; i++){
            factorial *= array[i];
        }

        System.out.println("10! is "+factorial);
    }
}