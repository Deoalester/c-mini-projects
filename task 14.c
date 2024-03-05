#include <stdio.h>

int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;printf("\n"),i++)
    {
        for(j=i;j<n;printf(" "),j++);
        for(j=i;j>=1;printf("%d ",j%2),j--);
    }
}