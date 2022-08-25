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
return 0;
}
