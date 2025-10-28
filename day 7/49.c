#include <stdio.h>

int main() {
    int n = 4; // number of rows
    int i, j, space;

    for (i = 1; i <= n; i++) {
        // Print left numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print spaces
        space = 2 * (n - i);
        for (j = 1; j <= space; j++) {
            printf(" ");
        }

        // Print right numbers in reverse
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
