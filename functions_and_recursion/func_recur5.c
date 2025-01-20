#include <stdio.h>
int sum(int);
int main(){
    int n;
    printf("enter the n");
    scanf("%d",&n);
    printf("the sum of values is %d",sum(n));
    return 0;
}
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}