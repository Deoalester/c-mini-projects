
#include <stdio.h>

int main()
{
    int n,a[100],i,t,j;
    scanf("%d",&n);
    for(i=1;i<=n;scanf("%d",&a[i++]));
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        printf("%d ",a[i]);
    }
}


