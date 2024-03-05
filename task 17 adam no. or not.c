#include <stdio.h>
int rev(int);
void main()
{
    int n;
    scanf("%d",&n);
    printf((rev(n*n)==rev(n)*rev(n))?"adam number":"not an adam number");
    
}
int rev(int a)
{
int r=0;
while(a){r=r*10+a%10;a/=10;}
return r;
}


