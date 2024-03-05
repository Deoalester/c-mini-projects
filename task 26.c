#include<stdio.h>
struct std
{
    char a[10];
    int r,m1,m2,m3,t;//r=rollno m1,m2,m3=marks t=average
}s[10];
int main()
{
    int n,i,x,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s %d%d%d%d",s[i].a,&s[i].r,&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].t=s[i].m1+s[i].m2+s[i].m3;
    }
    for(i=1;i<=n;i++)
    {
       
        for(j=i+1,x=n;j<=n;j++)
        {
            if(s[i].t>s[j].t)
            x--;
        }
        printf("%s %d\n",s[i].a,x);
    }
}

