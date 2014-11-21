#include<stdio.h>
using namespace std;
unsigned long long int asum(long int b[],long int c[],long int n,long int m)
{
    if(m<=n)
        return b[m-1];
    unsigned long long int a[m];
    for(long int i=0;i<n;i++)
        a[i]=b[i];
    for(long int i=n-1;i<m-1;i++)
    {
        a[i+1]=0;
        for(long int j=0;j<n;j++)
        {
            a[i+1]+=c[j]*a[i-j];
        }
    }
    a[m-1]%=1000000000;
    return a[m-1];
}
int main()
{
    int t;
    long int m,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%ld",&n);
        long int b[n],c[n];
        for(long int j=0;j<n;j++)
        {
            scanf("%ld",&b[j]);
        }
        for(long int j=0;j<n;j++)
        {
            scanf("%ld",&c[j]);
        }
        scanf("%ld",&m);
        printf("%ld\n",asum(b,c,n,m));
    }
    return 0;
}
