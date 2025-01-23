#include <stdio.h>

int main(){
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of areray at index %d is %u\n",i,&marks[i]);
    }
    
    return 0;
}