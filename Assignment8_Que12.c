#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=64;
        for(j=1;j<=2*n-i;j++)
        {
            if(j<i)
                printf(" ");
            else if(j<=n)
            {
                k++;
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
