#include <stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("harry.txt","r");
    if (ptr==NULL)
    {
        printf("The file does not exit\n");
    }
    else{
    
    int num;
    fscanf(ptr,"%d",&num);
    printf("The value of num is %d\n",num);
    fscanf(ptr,"%d",&num);
    printf("The value of num is %d\n",num);
    fclose(ptr);
    //program working for 10 minutes 
    return 0;
}
}