#include <stdio.h>

int main(){
    char a ='A';
    float k=71.232;
    float* k1=&k;//write here the same data type used for vairable declaraion
    char *j=&a;
   printf("the adress of %c is %u\n",a,&a);
   printf("The adress of %c is %u\n",a,j);
   printf("the adress of %f is %u\n",k,&k);
   
   printf("the value at adress j is %f\n", *(&k));
    return 0;
    
 }
 