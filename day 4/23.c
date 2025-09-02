// Online C compiler to run C program online
#include <stdio.h>
#include <ctype.h>
int main() {
    char a;
    printf("enter  character:");
    scanf("%c",&a);
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    printf("vowels");
   else if(isalpha(a))
    printf("consonant");
    else
    printf("not a alphabet");
    return 0;
}