/*INFO: Static variables are not cleared from memory until the program ends (initialized once)*/

/**NOTE: Static variables can only be accessed within the given file while
 * global variables can be accessed outside the file as well
 */

#include <stdio.h>

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