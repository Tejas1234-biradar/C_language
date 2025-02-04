#include <stdio.h>
#include <math.h>

int main() {
    int n, r, sum = 0, temp;
    
    // Taking input
    printf("Enter the number: ");
    scanf("%d", &n);
    
    temp = n; // Store the original number for comparison

    int num = n; // Temporary variable to manipulate the number
    int digits = 0;

    // Counting the number of digits
    while (num > 0) {
        num /= 10;
        digits++;
    }

    num = temp; // Reset num to the original number

    // Calculating the Armstrong sum
    while (num > 0) {
        r = num % 10; // Get the last digit
        sum += pow(r, digits); 
        num /= 10; 
    }

   
    if (temp == sum) {
        printf("The number is an Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }

    return 0;
}