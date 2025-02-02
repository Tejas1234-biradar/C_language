#include <stdio.h>
int strlen(char st[]){
    char* count=st;
    int counter=0;
   while (*count!='\0')
   {
    counter++;
    count++;
   }
   return counter;
   
    
}
int main(){
    char st[6]="Harry";
    printf("lenght of string is %d\n",strlen(st));
    return 0;
}