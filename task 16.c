#include <stdio.h>
int pw(int,int);
void main()
{
    int n,r=0,c=0,t;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        c++;
        n/=10;
    }
    n=t;
    while(t)
    {
        r=r+pw(t%10,c);
        t/=10;
    }
    printf((n==r)?"Armstrong":"Not a Armstrong");
    
}
int pw(int a,int b)
{int p;
for(p=1;b;p*=a,b--);
return p;
}

