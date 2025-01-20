#include <stdio.h>
float c2f(float);
int main(){
    float centi;
    printf("Enter the temperature in centigradre");
    scanf("%f",&centi);
    printf("The temperature in farenheight is %f",c2f(centi));
    return 0;
}
float c2f(float a){
    float faren;
   
    faren=(a*(9/5))+32;
    return faren;
}