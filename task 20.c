#include <stdio.h>
int rev(int n)
{
    int r;
    for(r=0;n;r=r*10+n%10,n/=10);
    return r;
}
int main()
{
    int n,a[100],i,j;
    scanf("%d",&n);
    for(i=1;i<=n;scanf("%d",&a[i++]));
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(rev(a[i])>rev(a[j]))
            a[i]=a[i]+a[j]-(a[j]=a[i]);
        }
        printf("%d ",a[i]);
    }
}


