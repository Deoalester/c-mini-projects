#include <stdio.h>

void main()
{
    int d,n,a,res=0,p=1;
    scanf("%d %d",&n,&a);
    while(n)
    {
        d=n%10;
        if(d!=a)
        {
            res=d*p+res;
            p=p*10;
        }
        n/=10;
    }
    printf("%d",res);
}
