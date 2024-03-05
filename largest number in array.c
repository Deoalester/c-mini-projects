#include <stdio.h>

int main()
{
    int n,a[100],i,b;
    scanf("%d %d",&n,&a[1]);
    b=a[1];
    for(i=2;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(b<a[i])
        b=a[i];
    }
    printf("%d",b);
}