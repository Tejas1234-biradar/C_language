#include <stdio.h>
#include<string.h>
struct employee
{
int data;
float salary;
char name[10];
};

int main(){
    struct employee e1;
    strcpy(e1.name,"Tejas");
    e1.data=100;
    e1.salary=54.88;
    printf("%s %d %f",e1.name,e1.data,e1.salary);
    return 0;
}