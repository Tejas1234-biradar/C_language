#include <stdio.h>
#include<string.h>

int main(){
    char st[]="HArry";
    char str[]="Whatsup";
    char target[39];
    strcpy(target,st);
    strcat(st,str);
    puts(st);//first string is added
    puts(target);
    printf("%d ",strlen(st));
    return 0;
    strcmp("hey","abey");//should print positive since 1st word is late
}