#include <stdio.h>
float avg(int,int,int);
int main(){
    int x,y,z;
    printf("Enter 3 numbers of which you want average");
    scanf("%d %d %d",&x,&y,&z);
    printf("The avaeage of numbers %d,%d,%d is %f",x,y,z,avg(x,y,z));
    return 0;
}
float avg(a,b,c){
    float average=(a+b+c)/3.0 ;
    return average;
}