
#include <stdio.h>

int check(int a);
void main()
{
    int n;
    scanf("%d",&n);
    printf((check(n)==1)?"odd":"even");
}
int check(int a)
{
    if(a==1||a==0)
    return a;
    else
    return check(a-2);
}

