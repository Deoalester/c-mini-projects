#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;)
    {
        printf("%d",i++);
        if(i>10)
        {
            break;
        }
    }
}

