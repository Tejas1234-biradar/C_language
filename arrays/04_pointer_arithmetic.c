#include <stdio.h>

int main(){
    //pointer arithmetic using int pointer
    // int a =5;
    // int* ptr=&a;
    // printf("the aress of a is %u is \n ",&a);
    // printf("the adress of a is %u is \n ",ptr);
    // ptr++;//incrememnt by 4; jitne bhi byte is architecture mei leh rha hei utnsei increment hoga
    // printf("the value of a is %u  \n ",ptr);
    //pointer arithmetic by using char pointer
    // char a ='S';
    // char* ptr=&a;
    //  printf("the aress of a is %u is \n ",&a);
    //  printf("the adress of a is %u is \n ",ptr);
    //  ptr++;//incrememnt by 1 since char takes 1 byte; jitne bhi byte is architecture mei leh rha hei utnsei increment hoga
    //  printf("the value of a is %u  \n ",ptr);
//pointer srithmetic using float pointer
float a =3.1428;
float b=12.10;
    float* ptr2=&b;
    float* ptr=&a;
    // ptr+ptr2;
    int ptr1=ptr-ptr2;
     printf("the aress of a is %u is \n ",&a);
     printf("the adress of a is %u is \n ",ptr);
     ptr;//incrememnt by 1 since char takes 1 byte; jitne bhi byte is architecture mei leh rha hei utnsei increment hoga
     printf("the value of additon %u  \n ",ptr1);

    return 0;
}