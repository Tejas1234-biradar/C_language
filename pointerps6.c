#include <stdio.h>

int main(){
    int x=10;
    int* j=&x;
    int** k=&j;
    printf("the value of x is %d",**(&j));
    return 0;
}