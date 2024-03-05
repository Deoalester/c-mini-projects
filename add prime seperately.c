#include <stdio.h>

int main()
{
    int n,ps=0,ns=0,a;
    scanf("%d",&n);
    for(;n;n/=10)
    {
        a=n%10;
        if(a==2||a==3||a==5||a==7) ps+=a;
        else
        ns+=a;
    }
    printf("%d",(ps>ns)? ps-ns:ns-ps);
}