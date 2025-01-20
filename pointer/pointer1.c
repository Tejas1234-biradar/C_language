#include <stdio.h>

int main(){
    int a =4;
    int k=71;
    int *j=&a;//j is pointing to i j stores the memory aderss of i;; j is an integer pointer;
   printf("the adress of %d is %u\n",a,&a);
   printf("The adress of %d is %u\n",a,j);
   printf("the adress of %d is %u\n",k,&k);
   //&i=87994
   //*87994=i;* value at adress operator
   //&j=87998
   printf("the value at adress j is %d\n", *(&k));
    return 0;
    
 }
 //address sei usme kya store hai woh find kese ?
 //adress operator stores the adress of memmory locaction
 // value at adress operator stores the thing at   memmory locaction