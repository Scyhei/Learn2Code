/*INFO: Static variables are not cleared from memory until the program ends (initialized once)*/

/**NOTE: Static variables can only be accessed within the given file while
 * global variables can be accessed outside the file as well
 */

#include <stdio.h>

/**By default, main is the name for our entry point. int refers to the data type that must be returned
 * Usually the main function contains the parameters (int argc, char** argv) which refer to the arguments
 * entered concurrently with the file
*/

/*Since this program does not need arguments to run, they will be omitted*/
int not_static(){
    int count = 0;
    count++;
    return count;
}

int is_static(){
    static int count = 0;
    count++;
    return count;
}

/*EXERCISE SOLUTION*/
int sum(int num){
    /*find sum to n numbers*/
    static int total = 0;   //By default, static variables are initialized to 0 but its good to be concise
    total += num;

    return total;
}

int main(){
    printf("%d\n", not_static());
    printf("%d\n", not_static());
    printf("\n");

    printf("%d\n", is_static());
    printf("%d\n", is_static());
    printf("\n");

    /*EXERCISE OUT*/
    printf("%d\n", sum(55));
    printf("%d\n", sum(45));
    printf("%d\n", sum(50));

    return 0;
}