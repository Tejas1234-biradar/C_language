#include <stdio.h>

int main(){
    int u;
    printf("Enter the numer whose multiplying table you want");
    scanf("%d",&u);
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int* ptr=&arr[0];
    for (int i = 0; i<10; i++)
    {
        *ptr=*ptr*u;
        *ptr++;
         printf("the table of %d x %d is %d\n",u,(i+1),arr[i]);
    }
   
    
    return 0;
}