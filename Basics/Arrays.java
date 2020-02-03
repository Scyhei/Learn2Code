public class Arrays{
    public static void main(String[] args){
        int[] grades = new int[3];
        int average;

        grades[0] = 80;
        grades[1] = 85;
        grades[2] = 90;

        average = (grades[0] + grades[1] + grades[2])/3;

        System.out.println("The average of the 3 grades is: "+average);
    }
}