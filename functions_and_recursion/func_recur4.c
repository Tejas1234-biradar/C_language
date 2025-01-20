#include <stdio.h>

int fibo(int);
int main(){
    int f;
    printf("Enter the value till which you want fibonacci sereis");
    scanf("%d",&f);
    printf("the fibonacci sequence is %d",fibo(f));
    return 0;
}
int fibo(int n){
    
    if (n==1||n==2)
    {
        return n-1;
    }
    //c compiler evalutes a code in c from right to left ;
    
    else{
        return fibo(n-1)+fibo(n-2);    
    }
    
}