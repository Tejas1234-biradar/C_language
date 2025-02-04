// // to take info from file we use getc and to put file we use putC
#include <stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("harry.txt","w");
    fputc('c',ptr);
    return 0;
}