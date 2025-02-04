 #include <stdio.h>
 typedef struct complexNo {
    int a;
    int b;
 } complex;
 void display(complex c){
    printf("The value of complex number is %d and i%d",c.a,c.b);
 }
 int main(){
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part\n");
        scanf("%d",&carr[i].a);
        printf("Enter the imaginary part\n");
        scanf("%d",&carr[i].b);
        display(carr[i]);
        
    }
    
    return 0;
 }