
#include <stdio.h>

int main() {
    float fa,ce;
    printf("enter fahrenheit:");
    scanf("%f",&fa);
    printf("%f c\n",(fa-32)*5/9);
    printf("enter celcius:");
    scanf("%f",&ce);
    printf("%f F",(1.8*ce)+32.0);

    return 0;
}