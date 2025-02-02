#include <stdio.h>

int main(){
    char str[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%c",&str[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%c",str[i]);
    }
    printf(" %s",str);

    
    
    return 0;
}