#include<stdio.h>
using namespace std;
void fact(int a[],int count,int n)
{
    if(n>1)
    {
    int p,q,r=0,s;
    q=n-1;
    for(int i=0;i<count;i++)
    {
        s=a[i];
        a[i]=((s*q)+r)%10;
        r=(s*q+r)/10;
        if(i==count-1)
        {
            while(r>0)
            {
                i++;
                a[i]=r%10;
                r/=10;
                count=i+1;
            }
        }
    }
    fact(a,count,n-1);
    }
    else
    {
        for(int i=count-1;i>=0;i--)
        {
            printf("%d",a[i]);
        }
    }
}
int main()
{
    int cases,count,p;
    scanf("%d",&cases);
    int a[cases],x,k=cases;
    for(int i=0;i<cases;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<cases;i++)
    {
        k--;
        count=0;
        p=a[i];
        while(p>0)
        {
            p/=10;
            count++;
        }
        p=a[i];
        int b[200]={0};
        for(int j=0;j<count;j++)
        {
            b[j]=a[i]%10;
            a[i]/=10;
        }
        fact(b,count,p);
        if(k!=0)
            printf("\n");
    }
    return 0;
}
