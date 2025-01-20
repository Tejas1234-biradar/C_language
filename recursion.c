#include <stdio.h>
int factorial(int);
int main(){
    int f;
    printf("Enter the number of which you want fActorial");
    scanf("%d",&f);
    printf("The factorial of %d is %d",f,factorial(f));
    return 0;
}
//recursion is often the direct way to implement an algorithm 
//the condiitoin in a 
int factorial(int n){
    int fact;
    if(n==0||n==1){
        return 1;
    }
    return factorial(n-1)*n;
}