/*The stdio header is a standard input/output library containing commonly used methods ie.printf*/
#include <stdio.h>

/**By default, main is the name for our entry point. int refers to the data type that must be returned
 * Usually the main function contains the parameters (int argc, char** argv) which refer to the arguments
 * entered concurrently with the file
*/

/*Since this program does not need arguments to run, they will be omitted*/
int main(){
    /*The following methods are included in the stdio header:*/
    /* printf: writes output to stdout(standard output stream)*/
    printf("Hello, World!\n");

    /* sprintf: writes output to a character string*/
    char strout[16];
    sprintf(strout, "Hello, World!\n");
    printf("%s", strout);

    /*fprintf: writes output to a file*/
    FILE* write_hello = fopen("Hello.txt","w");
    fprintf(write_hello, "Hello, World!\n");
    fclose (write_hello);

    FILE* read_hello = fopen("Hello.txt", "r");
    char fileout[16];
    fread(&fileout, sizeof(char), sizeof(fileout)/sizeof(char), read_hello);
    printf("%s", fileout);
    fclose(read_hello);

    return 0;
}
//featuring unecessary ways of printing "Hello, World!"