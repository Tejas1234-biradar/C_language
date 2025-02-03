#include <stdio.h>
#include<string.h>
struct employee
{
int data;
float salary;
char name[10];
};

int main(){
    struct employee e1,e2,e3;
    printf("Enter the name of employee ");
    scanf("%s %s %s",e1.name,e2.name,e3.name);
    printf("Enter the data of employee ");
    scanf("%d %d %d",e1.data,e2.data,e3.data);
    printf("Enter the salary of employee ");
    scanf("%f %f %f",e1.salary,e2.salary,e3.salary);
    printf("%s %d %f",e1.name,e1.data,e1.salary);
    printf("%s %d %f",e2.name,e2.data,e2.salary);
    printf("%s %d %f",e3.name,e3.data,e3.salary);
 
    return 0;
}