#include <stdio.h>

// Function to count the number of positive integers in an array
int counter(int a[], int n) {
    int no_of_positive = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            no_of_positive++;
        }
    }
    return no_of_positive; // Return after the loop completes
}

int main() {
    int arr[6];
    printf("Enter 6 integers:\n");

    // Input array elements
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]); // Removed the trailing space
    }

    // Output the count of positive integers
    printf("The number of positive integers is %d\n", counter(arr, 6));

    return 0;
}
