// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char x;
    printf(" a coin has been tossed h/t");
    scanf("%c",&x);
    if(x=='h')
    printf("head");
    else if(x=='t')
    printf("tail");
    else
    printf("please enter h or t");
    
    return 0;
}