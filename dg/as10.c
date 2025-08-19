#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the value a:");
    scanf("%d",&a);
    printf("Enter the value b:");
    scanf("%d",&b);
    printf("before swapping: %d,%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping: %d,%d",a,b);

    return 0;
}