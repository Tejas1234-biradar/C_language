#include <stdio.h>
void printMatrix(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    
}
void addArray(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    printf("The sum is =%d\n",sum);
    
}
void minEle(int arr[],int size){
    int min=arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    printf("The minimum value in the array is %d\n",min);
    
}
void searchEle(int arr[],int size,int x){
   int found=0;
    for (int i = 0; i < x; i++)
    {
        if (arr[i]==x)
        {   printf("Element found at %d index",i);
            found=1;
            break;
        }
        
    }
    if (!found)
    {
        printf("in the array element not found");
    }
    
    
}

int main(){
    int arr[100],size,x;
  while (1)
  {
    printf("\n----MENU----\n");
    printf("1-Read the Array");
    printf("2-Print the Array");
    printf("3-add the Array");
    printf("4-find minimum the Array");
    printf("5-search in the Array");


  }
  
   
    return 0;
}