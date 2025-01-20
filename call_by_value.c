#include <stdio.h>
int sum(int,int);
int sum(int a,int b){
    return a+b;//ye function x and y ko change nahi kr skta
}
int main(){
    printf("The sum of 1 and 6 is %d\n",sum(1,6));
    return 0;
}// 1 aur 6 a and b mei copy hojayenge