#include <stdio.h>
int pass(int*);
int pass(int* ptr){
    printf("the value of ptr is %d\n",ptr);
    printf("the value at ptr is %d\n",*ptr);
    return 5;
}

int main(){
    int i=20;
    int* j=&i;
    printf("the address is %u\n",j);
    // printf("the value of adress is %p",pass(j));
    pass(j);
    return 0;
}