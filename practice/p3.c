#include <stdio.h>
int power(int base, int exp);
int isPrime(int num);
void displayPrimes(int start, int end);
int decimalToBinary(int num);

int main()
{
    int choice, num, base, exp, start, end;
    while (1)
    {
        printf("\n---MENU---\n");
        printf("1)Calculate the power\n ");
        printf("2)Display the primeNumbers between a given interval\n");
        printf("3)Convert from binary to decimal\n");
        printf("4)Exit\n");
        printf("Choose your life choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the base of number=\n");
            scanf("%d", &base);
            printf("Enter the exponent=\n");
            scanf("%d", &exp);
            printf("The power is %d^%d=%d", base, exp, power(base, exp));
            break;
        case 2:
            printf("Enter the start");
            scanf("%d", &start);
            printf("ENter the end");
            scanf("%d", &end);
            printf("The prime numbers between %d and %d are ", start, end);
            displayPrimes(start,end);
            break;
        case 3:
            printf("Enter the number you want to convert in binary");
            scanf("%d", &num);
            printf("the number %d from decimal to binary is \n",num );
            decimalToBinary(num);
            break;
        case 4:
            return 0;
        default:
            break;
        }
    }

    return 0;
}
int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    return base * power(base, exp - 1);
}
int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i < num; i++)
    {
        if (num % 2 == 0)
        {
            return 0;
        }
        return 1;
    }
}
void displayPrimes(int start, int end)
{
    for (int num = start; num < end; num++)
    {
        if (isPrime(num))
        {
            printf("\t%d\t", num);
        }
    }
    printf("\n");
}
int decimalToBinary(int num){
    if(num>1){
        decimalToBinary(num/2);
    }
    printf("%d",num%2);
}