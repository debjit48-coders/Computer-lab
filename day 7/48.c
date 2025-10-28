#include <stdio.h>

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return reversed;
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nReversed numbers in the array are:\n");
    for (i = 0; i < n; i++) {
        int rev = reverseNumber(arr[i]);
        printf("%d → %d\n", arr[i], rev);
    }

    return 0;
}
