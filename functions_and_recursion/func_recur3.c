#include <stdio.h>
float forceCalc(float);
int main(){
    float m;
    printf("enter the mass of block in kilograms");
    scanf("%f", &m);
    printf("the force applied due to gravity is %f newtons",forceCalc(m));
    return 0;
}
float forceCalc(float a){
    float force;
    force=a*9.8;
    return force;
}