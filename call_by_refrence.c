#include <stdio.h>
int sum(int*,int*);
void swap(int*,int*);
int sum(int* a,int* b){
    *a=6;
    return *a+*b;//sum function changed the value of x; 
    }
int main(){
    int x=1,y=6;
    swap(&x,&y);
    printf("the value of x and y is %d and %d",x,y);
    printf("The sum of 1 and 6 is %d\n",sum(&x,&y));
    printf("the value of x is %d",x);
    return 0;
}
void swap(int* x,int* y){
int temp;
temp=*x;
*x=*y;
*y=temp;

}