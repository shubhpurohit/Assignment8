#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==n||j==1||i==j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
