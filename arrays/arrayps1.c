#include <stdio.h>

int main(){
    int arr[5]={0,1,2,3,4};
    int* ptr=&arr[0];
    printf("the value of array before increment %d\n",*ptr);
    *ptr+=2;
    printf("the value of array after increment%d\n",*ptr);
    return 0;
}