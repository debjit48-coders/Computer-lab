// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c,x;
    printf("enter 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c)
        x=a;
        else 
        x=c;
    }
    else{
        if(b>c)
        x=b;
        else
        x=c;
    }
    printf("the greatest number is %d",x);
    return 0;
}