#include <stdio.h>
int strlen(char* src){
    int length=0;
    while(*src!='\0'){
    length++;
    *src++;
    }
    return length;
}
void strCopy(char* dest,char* src){
    while(*src!='\0'){
        *dest=*src;
        *dest++;
        *src++;
    }
    *dest='\0';
}
int main(){
    char str1[100],str2[100];
    char *src=&str1[0];
    char *dest=&str2[0];
    int choice;
    while (1)
    {
        printf("Enter your choice between 1-3\n");
        printf("1)Display the length of string\n");
        printf("2)Copy a given string\n");
        printf("3)exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter source string\n");
            scanf("%s",src);
            printf("the length of string is %d\n",strlen(src));
            break;
            
        case 2:
            printf("Enter source string\n");
            scanf("%s",src);
            strCopy(dest,src);
            printf("%s",dest);
            break;
            
        case 3:
            return 0;
        default:
            printf("please enter a number between 1-3");
        
        }
    }
    
    return 0;
}