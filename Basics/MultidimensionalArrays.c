/*The stdio header is a standard input/output library containing commonly used methods*/
#include <stdio.h>

/**By default, main is the name for our entry point. int refers to the data type that must be returned
 * Usually the main function contains the parameters (int argc, char** argv) which refer to the arguments
 * entered concurrently with the file
*/

/*Since this program does not need arguments to run, they will be omitted*/
int main(){
    /**Multidimensional arrays: can similarly hold multiple variables of the same datatype
     * Additionally, their size cannot change after being initialized
    */

    /**You can statically initialize multidimensional arrays without specifying the first dimension
     * but only when declaration and initialization occur concurrently
     * the second specifier is required so the compiler knows the boundaries of each dimension
    */
   char static_vowels[][5] = {{'A', 'E', 'I', 'O', 'U'}, 
                       {'a', 'e', 'i', 'o', 'u'}, 
                       {'U', 'O', 'I', 'E', 'A'}
                       };
    printf("%d\n", sizeof(static_vowels));
    printf("%s\n",static_vowels);

    /**Additionally, the size of arrays cannot change once they have been initialized
     * nor can you affect values out of bounds
    */
    static_vowels[3][0] = 'u';
    static_vowels[3][1] = 'o';
    static_vowels[3][1] = 'i';
    static_vowels[3][1] = 'e';
    static_vowels[3][1] = 'a';

    printf("%d\n", sizeof(static_vowels));  //referencing outside of the predetermined size
    printf("%c\n", static_vowels[3][1]);    //points at some unknown value (not an 'o' char)

    /*Dynamic initialization occurs much the same with regular arrays*/
    char dynamic_vowels[3][5];
    for(int i=0; i<3; i++){
        dynamic_vowels[i][0] = 'a';
        dynamic_vowels[i][1] = 'e';
        dynamic_vowels[i][2] = 'i';
        dynamic_vowels[i][3] = 'o';
        dynamic_vowels[i][4] = 'u';
    }
    printf("%d\n", sizeof(dynamic_vowels));
    printf("%s\n", dynamic_vowels); //assumed garbage values are due to not allocating memory?
                                    //also prints until it reaches a null character?

    /*TODO: Declare 2D array grades here*/
    int grades[2][5];

    float average;
    int i;
    int j;

    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

/*TODO: complete the for loop with appropriate terminating conditions*/
    for(i = 0; i < 2; i++){
       average = 0;
       for(j = 0; j < 5; j++){
           average += grades[i][j];
       }
       /*TODO: complete the average marks for subject i*/
    average = average/5;
    printf("The average marks obtained in subject %d is: %.2f\n", i, average);
    }
    return 0;
}