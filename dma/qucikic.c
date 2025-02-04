#include <stdio.h>
#include<stdlib.h>

int main(){
    int n=5;
    float *ptr;
    // printf("E")
    
    ptr=(float*)malloc(n*sizeof(float));
    ptr[0]=3.12345;
    ptr[1]=3.12345;
    ptr[2]=4.12345;
    ptr[3]=4.12345;
    ptr[4]=3.12345;
    printf("%f\n",ptr[0]);
    printf("%f\n",ptr[1]);
    printf("%f\n",ptr[2]);
    printf("%f\n",ptr[3]);
    printf("%f\n",ptr[4]);


    return 0;

}