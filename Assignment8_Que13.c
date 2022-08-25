#include<stdio.h>
int main()
{
    int i,j,n,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   k=64,l=64+n;
        for(j=1;j<=(2*n)-1;j++)
        {
            if(j>n-(i-1)&&j<n+(i-1))
                {
                    printf(" ");
                    if(j>n)
                        l--;
                }
            else if(j<=n-(i-1))
            {
                k++;
                printf("%c",k);
            }
            else if(j>=n+(i-1))
            {
                l--;
                printf("%c",l);
            }
        }
        printf("\n");
    }
    return 0;
}
