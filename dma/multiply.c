#include <stdio.h>
#include<stdlib.h>

int main(){
    int n=10;
    int* ptr;
    int new_size=15;
    // scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    ptr=(int*)realloc(ptr,new_size*sizeof(int));
    
     for (int i = 0; i < new_size+1; i++) {
        ptr[i] = 7 * i;
        printf("The value of 7 * %d is %d\n", i, ptr[i]);
    }
    free(ptr);
    
    return 0;
}