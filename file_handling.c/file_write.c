#include <stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("harry.txt","a");
    int num=432;
    fscanf(ptr,"%d",&num);
    fprintf(ptr,"%d",num);
    printf("The value of num is %d\n",num);
    fscanf(ptr,"%d",&num);
    printf("The value of num is %d\n",num);
    return 0;
}