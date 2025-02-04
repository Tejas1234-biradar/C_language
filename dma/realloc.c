#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *ptr;
    // printf("E")
    scanf("%d",n);
    ptr=(int*)malloc(n*sizeof(int));
    ptr[0]=3;
    ptr[1]=4;
    printf("%d",ptr[1]);
    ptr=(int*)malloc(10*sizeof(int));

    return 0;

}