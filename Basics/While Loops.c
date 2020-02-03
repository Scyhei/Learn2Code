#include <stdio.h>

int main(){
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;

    while(i < 10){
        /*TODO: if the current number which is about to be printed is <5 don't print*/
        if(array[i]<5){
            i++;
            continue;
        }
        /*TODO: if the current number which is about to be printed is >10 don't print
          & stop the loop*/
        else if(array[i]>10){
            break;
        }else{
            printf("%d\n", array[i]);
            i++;
        }
    }
    return 0;
}