#include <stdio.h>

int main() {
    float p,r,t;
    printf("enter principal amount:");
    scanf("%f",&p);
    printf("Enter rate:");
    scanf("%f",&r);
    printf("Enter time:");
    scanf("%f",&t);
    printf("%f",(p*r*t)/100.0);
    return 0;
}