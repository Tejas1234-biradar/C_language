#include <stdio.h>

int main(){
    int i=6;
    int* j=&i;
    int** k=&j;//adress ka bhi adress store kr rha hei
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*(&i));
    printf("The value of i is %d\n",*j);
    printf("the value of i is %d\n",**(&j));//*(&j)=&i then *(&i)=i
    printf("the adress of is %p\n",j);
    printf("The adress of adress of j is %p\n",k);
    return 0;
}//***&&& * sei & cut jata hai