#include <stdio.h>

int main(){
    int marks[]={20,30,40,80};
    // int* ptr=&marks[0];
    int* ptr=&marks;
    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d\n",i,*ptr);
        ptr++;
    }
    //same as above
    return 0;
    //printArray(arr,n){
    // int *i,int n}
    //3 is number of rows 
    //2 is number of coloumns 
    int arr[3][2]={{1,4},
                    {7,0},
                    {11,22}};
    //arr[0][0]=1;arr[0][1]=4      
}