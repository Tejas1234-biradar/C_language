#include <stdio.h>
void change(int* x){
   *x=*x * 10;
}
int main(){
    int x=20;
    int* j=&x; 
    printf("the value of is %d\n",x);
    change(j);
    printf("the value of x is %d\n",x);
    return 0;  
}