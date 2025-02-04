#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *ptr;
    // printf("Enter number of array elementds\n");
    scanf("%d",n);
    ptr=(int*)calloc(n,sizeof(int));
    ptr[0]=3;
    ptr[1]=4;
    printf("%d",ptr[1]);

    return 0;

}