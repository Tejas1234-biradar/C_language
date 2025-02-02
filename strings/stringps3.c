#include <stdio.h>
char* slice(char st[],int m,int n){
  int i=0;
  char* ptr1=&st[m];
  char* ptr2=&st[n];
  *ptr2='\0';
   return st;
   
    
}
int main(){
    char st[]="Harry Bhai";
    printf("the spliced string is %s\n",slice(st,1,6));
    return 0;
}