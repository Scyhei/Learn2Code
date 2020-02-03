#include <stdio.h>

//entry point does not call argc nor argv so excluded
int main(){
    //arithmetic can be done between datatypes
    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float sum;

    sum = a+b+c;

    printf("the sum of a, b and c is %f", sum);
    return 0;
}