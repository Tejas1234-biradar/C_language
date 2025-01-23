#include <stdio.h>
void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
}
void rev(int* a[],int size){
    int* start=a;
    int* end=a+size-1;
    while (start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
     
}
int main(){
    int n =5;
    int a[5]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    printArray(a,5);
    rev(a,size);
    printArray(a,5);

  
  
    return 0;
}