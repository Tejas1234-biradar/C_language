#include <stdio.h>
// void strcpy(char st[],char copy[]){
//     char* count=st;
//    int i=0;
//     char* ptr=copy;
    
//  for (int i = 0; i<6; i++)
//  {
//     copy[i]=st[i];
//  }
 
 
   
    
// }
// int main(){
//     char st[6]="Harry";
//     char copy[30];
//     printf("The copied string is %s\n",copy);
//     return 0;#include <stdio.h>

// Custom strcpy function
void strcpy(char st[], char copy[]) {
    for (int i = 0; i < 6; i++) {
        copy[i] = st[i];  // Copy characters from st to copy
    }
    copy[6] = '\0';  // Null-terminate the copied string
}

int main() {
    char st[6] = "Harry";  // Original string
    char copy[30];  // Copy array with enough space

    strcpy(st, copy);  // Copy st to copy
    printf("The copied string is %s\n", copy);  // Print the copied string

    return 0;
}

