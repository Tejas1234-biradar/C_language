#include <stdio.h>
 typedef struct complexNo{
int a;
int b;
}complexNo;
void display(complexNo c){
    printf("The value of complex number is %d +%di\n",c.a,c.b);
}
int main(){
    
    struct  complexNo x1[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the the real part");
        scanf("%d",&x1.a);
    }
    
   return 0;
}