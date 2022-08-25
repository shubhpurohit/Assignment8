#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+(i-1);j++)
        {
            if(j<=n-i)
                printf(" ");
            else if(j>=n-(i-1) && j<=n+(i-1))
                printf("*");
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=2*n-i;j++)
        {
            if(j>=i&&j<=2*n-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
return 0;
}

