#include <stdio.h>

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int* ptr=&arr[0];
    for (int i = 0; i<10; i++)
    {
        *ptr=*ptr*5;
        *ptr++;
         printf("the table of 5 x %d is %d\n",(i+1),arr[i]);
    }
   
    
    return 0;
}