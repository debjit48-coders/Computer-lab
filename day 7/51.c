#include <stdio.h>

int main() {
    int i, j, k;
    char ch = 'A';

    
    int n = 4;

    for (i = 1; i <= n; i++) {
        
        for (j = i; j < n; j++) {
            printf("  ");  

        
        for (k = 1; k <= i; k++) {
            printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}
