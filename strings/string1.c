#include <stdio.h>

int main(){
    //strings is a 1d arrayb terminated by null character
    char s[]="hey";//null character already p[resenyt]
    char st[]={'a','b','c','\0'};
    for (int i = 0; i < 3; i++)
    {
        printf("CHaracetr is %c \n",st[i]);
    }
    
    printf("First character is %c\n",st[0]);

    return 0;
}