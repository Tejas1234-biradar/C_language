#include <stdio.h>
 typedef struct complexNo{
int a;
int b;
};complexNo;
int main(){
    
    struct  complexNo x1={1,2};
    printf("THe complex number id %d+%di\n",x1.a,x1.b); 
   return 0;
}