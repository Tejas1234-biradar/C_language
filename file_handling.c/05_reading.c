#include <stdio.h>
int main(){
    char ch;
    FILE *ptr;
    ptr=fopen("harry.txt","a");
    while (1)
    {
        ch=fgetc(ptr);
        printf("%s",ch);
        if (ch==EOF)
        {
            printf("ENd of file reacehr");;
            break;
        }
        
    }
    return 0;
}