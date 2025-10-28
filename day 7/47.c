#include <stdio.h>


int isPalindrome(int num) {
    int original = num, reversed = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return (original == reversed);
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

    
    printf("\nPalindrome numbers in the array are:\n");
    int found = 0;
    for (i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found)
        printf("No palindrome numbers found.");

    printf("\n");
    return 0;
}


