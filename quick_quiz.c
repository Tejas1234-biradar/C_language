#include <stdio.h>
#include<math.h>

int main(){
    int side,area;
    printf("please enter the side of triangle");
    scanf("%d",&side);
    area=pow(side,2);
    printf("area of square is \n%d",area);
    return 0;
}