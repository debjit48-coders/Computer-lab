// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    float p,r,t;
    printf("Enter the principal amount:");
    scanf("%f",&p);
    printf("Enter the rate amount:");
    scanf("%f",&r);
    printf("Enter the time amount:");
    scanf("%f",&t);
    float base = (1+r/100) ;
    float exponent = t ;
    float A = pow(base, exponent);
    float z = p*A;
    printf("%f",(z-p));

    return 0;
}

