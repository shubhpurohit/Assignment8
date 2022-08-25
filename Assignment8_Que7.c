#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=n*2;j++)
        {
            if((i+j)>(n+1)&&(j-i)<n)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
