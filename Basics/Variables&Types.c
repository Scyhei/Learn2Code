/*The stdio header is a standard input/output library containing commonly used methods*/
#include <stdio.h>

/**C has several variables and datatypes
 * each of which can have arithmetic done between them
*/

typedef struct{
    char some_number;
}Numbers;

/**By default, main is the name for our entry point. int refers to the data type that must be returned
 * Usually the main function contains the parameters (int argc, char** argv) which refer to the arguments
 * entered concurrently with the file
*/

/*Since this program does not need arguments to run, they will be omitted*/
int main(){
    /*Integers: whole numbers defined using char, int, short, long or long long*/
    char character = 1;
    int integer = 2;
    short short_integer = 3;
    long long_integer = 4;
    long long long_long_integer = 5;

    int int_sum = character+integer+short_integer+long_integer+long_long_integer;
    printf("%d\n", int_sum);

    /*Floating point: numbers with fractions defined using float, double*/
    float floating_point = 13.0/7.0;
    double double_num = floating_point*2;

    double floating_sum = floating_point+double_num;
    printf("%.3f\n", floating_sum);

    /*Structures: user-defined variables that can contain multiple datatypes*/
    Numbers a_struct = {5};
    Numbers b_struct = {10};
    Numbers c_struct = {15};

    int struct_sum = a_struct.some_number+b_struct.some_number+c_struct.some_number;
    printf("%d\n", struct_sum);

    /*Different datatypes can also have arithmetic performed on them together*/
    double total_product = int_sum*floating_sum*struct_sum;
    printf("%.3f\n", total_product);

    return 0;
}