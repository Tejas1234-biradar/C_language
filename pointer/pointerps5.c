#include <stdio.h>
int* sum(int,int);
float* average(int,int);
int main(){
    int x=20,y=30;
    int* ptr1;
    float* ptr2;
    // int* x1=&x;
    // int* y1=&y;
    ptr1=sum(x,y);
    ptr2=average(x,y);
    printf("the adress of sum is %u and average is %u",ptr1,ptr2);
    return 0;
}
int* sum(int a,int b){
    int add = a+b;
    int* ptr=&add;
   printf("the addition of 2 numbers is %d\n",add);
    return ptr;
}
float* average(int a ,int b){
    float average=(a+b)/2.00;
    float* ptr=&average;
    printf("the average of 2 numbers is %f\n",average);
    return ptr;
}