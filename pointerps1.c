#include <stdio.h>

int main(){
    int x=10;
    int* j=&x;
    printf("The adress of x is %p\n",j);
    printf("the value of x is %d\n",*j);;
    return 0;
}