#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   k=0;
        for(j=1;j<=2*n-i;j++)
            {if(j<i)
                printf(" ");
            else if(j<=n)
            {
                k++;
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

