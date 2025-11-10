// Sum of matrix
#include<stdio.h>
int main()
{
    int ar,ac;
    printf("\nEnter row and coloumn no for A:");
    scanf("%d %d",&ar,&ac);
    int a[ar][ac];
    printf("\nEnter data of A: ");
    for (int i=0;i<ar;i++)
    {
        for (int j=0;j<ac;j++)
            scanf("%d",&a[i][j]); 
    }
    int br,bc;
    printf("\nEnter row and coloumn no for B: ");
    scanf("%d %d",&br,&bc);
    if(!(ar==br && ac==bc))
    {
        printf("Invalid adition f0rmat");
        return 0;
    } 
    int b[br][bc];
    printf("\nEnter data of B: ");
    for (int i=0;i<br;i++)
    {
        for (int j=0;j<bc;j++)
            scanf("%d",&b[i][j]); 
    }
    int s[ar][ac];
    for(int i=0;i<ar;i++)
    {
        for(int j=0;j<ac;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
            printf("%d  ",s[i][j]);
        }
        printf("\n");
    }
}