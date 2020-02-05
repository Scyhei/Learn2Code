/*The stdio header is a standard input/output library containing commonly used methods*/
#include <stdio.h>

/**By default, main is the name for our entry point. int refers to the data type that must be returned
 * Usually the main function contains the parameters (int argc, char** argv) which refer to the arguments
 * entered concurrently with the file
*/

/*Since this program does not need arguments to run, they will be omitted*/
int main(){
    /**Arrays can hold multiple variables of the same data type
     * They are stored directly next to each other in memory and are thus very efficient
    */
   /*Arrays can be initialized statically*/
   /**You may not need to specify the array's size when initializing it in a single line
    * but it is required when initialization comes after declaration
    * int static_array[];                               ]   <--This doesn't work
    * static_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}  ]
    */
    int static_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //<--This does
    for(int i=0; i<sizeof(static_array)/sizeof(int); i++){
        printf("%d ", static_array[i]);
    }
    printf("\n");

    /*Arrays can also be initialized dynamically*/
    int dynamic_array[10];
    for(int j=0; j<sizeof(dynamic_array)/sizeof(int); j++){
        dynamic_array[j] = j;
        printf("%d ", dynamic_array[j]);
    }
    printf("\n");

    /*EXCERCISE SOLUTION*/
    int grades[3];
    int average;

    grades[0] = 80;
    grades[1] = 85;
    grades[2] = 90;

    average = (grades[0] + grades[1] + grades[2])/3;
    printf("The average of the 3 grades is: %d", average);
    return 0;
}