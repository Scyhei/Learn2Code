#include <stdio.h>
//The above line calls the stdio library for some of the common functions used in C

int main(){
    //the main method returns an int datatype and does not take any parameters

    //what is the difference between puts and printf?
    printf("This is a simple print line program!\n");
    puts("This is a simple print line program!");

    //puts automatically adds a new line to the end of the string hence the space in output
    char* myString = "This is a print line program!\n";
    printf(myString);
    puts(myString);

    //printf allows for variables in a string to be modified during run time with the proper syntax
    char* thisString = "This string has a % character!\n";
    printf(thisString);
    puts(thisString);

    printf("%s", thisString);
    puts(thisString);

    return 0;

}

//What is the difference between C and Java that makes it such that Java requires me to include
//parameters in the main method when they are not used?