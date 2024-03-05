#include <stdio.h>

int main()
{
    int n,a,sum=0;
    scanf("%d",&n);
    top:
    scanf("%d",&a);
    if(a%10==6)
    {
        sum+=a;
    }
        n--;
    
        if (n )
        goto top;
        printf("%d",sum);
        return 0;
    
}
