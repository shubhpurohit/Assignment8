
#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=64;
        for(j=1;j<=n+(i-1);j++)
        {
            if(j<=n-i)
                printf(" ");
            else if(j<=n)
                {k++;
                printf("%c",k);
                }
            else
            {
                k--;
                printf("%c",k);
            }

        }
        printf("\n");
    }
    return 0;

}
