#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=0;
        for(j=1;j<=n+(i-1);j++)
        {
            if(j<=n-i)
                printf(" ");
            else if(j>=n-i-1 && j<=n)
                {k++;
                printf("%d",k);
                }
            else
            {
                k--;
                printf("%d",k);
            }

        }
        printf("\n");
    }
    return 0;

}
