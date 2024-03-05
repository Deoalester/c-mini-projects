#include <stdio.h>
void sort(int m,int*p);
int main()
{
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;scanf("%d",&a[i++]));
    //for(i=0;i<n;printf("%d\n",a[i++]));
    sort(n,a);
    for(i=0;i<n;printf("%d ",a[i++]));
    return 0;
}
void sort(int m,int*p)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(*(p+i)>*(p+j))
            {
                *(p+i)=*(p+i)+*(p+j)-(*(p+j)=*(p+i));
            }
        }
    }
}





