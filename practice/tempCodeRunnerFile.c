#include <stdio.h>
void swap(int*a,int*b);
int main(){
    int x=5,y=4;
    int* a=&x;
    int* b=&y;
     printf("\n Before Swap the value of x is %d and the value of y is %d\n",x,y);
    swap(a,b);
    printf("\n After Swap the value of x is %d and the value of y is %d\n",x,y);
    return 0;
}
void swap(int* a,int* b){
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;