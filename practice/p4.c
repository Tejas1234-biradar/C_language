#include <stdio.h>

int main(){
    int c,r;
    printf("Enter the number of coloums\n");
    scanf("%d",&c);
    printf("Enter the number of rows\n");
    scanf("%d",&r);
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter the values of matrix 1 of[%d][%d]",i,j);
            scanf("%d %d",&i,&j);
        }
        
    }
    

    return 0;
}