#include <stdio.h>

int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;printf("\n"),i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==1)
            {
                if(k==1) printf("%-2d ",k++);
                 else printf("%2d ",k++);
            }
            else
            printf("%2d ",k--);
        }
        if(i%2==1)
        k+=n-1;
        else
        k+=n+1;
    }
}



