#include <stdio.h>

int main()
{
    int i=0,n;
    scanf("%d",&n);
    while(i<n)
    {
        i++;
        if(i%5==0)
        {
            continue;
        }
        printf("%d",i);
    }
}