#include <stdio.h> 
int sum(int,int);//function prototype tells teh compiler about a function that will be defined later
int sum(a,b){//function defination main body of function
    return a+b;
}
int goodMorning();
int goodAfternoon();
int goodNight();
int change(int);

//void functions takes no parameters and returns no value
int main(){
    
    int s;
    int b=22;
    change(b);//here b value will not change to 77
    printf("\n%d\n",b);
    int a1,b1;
    goodMorning();
    goodAfternoon();
    goodNight();
    printf("put your numbers\n");
    scanf("%d %d",&a1,&b1);
    // void sum(a1,b1);
    // sum=sum(a1,b1);
    printf("answer is \n %d",sum(a1,b1));//function call instructs the compiler to execute the functions's body 
    return 0;
}
int goodMorning(){
    printf("oha\n");
    return 0;
}
int goodAfternoon(){
    printf("Konbahnwa\n");
    return 0;
}
int goodNight(){
    printf("Oyasumi\n");
    return 0;
}
int change(a){
    a=77;
    return 0;
}