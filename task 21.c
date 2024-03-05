#include <stdio.h>
int main()
{
    int a[100][100],i,j,s=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j||i+j==n-1)
            s+=a[i][j];
        }
    }
    printf("%d",s);
    
}
