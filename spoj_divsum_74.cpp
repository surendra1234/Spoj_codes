#include<stdio.h>
#include<cmath>
using namespace std;
int divsum(int n)
{
    if(n==1)
        return 0;
    int sum=1,sqt=(int)sqrt(n*1.0);
    for(int i=2;i<=sqt;i++)
    {
        if(n%i==0)
        {
            sum+=i+(n/i);
        }
    }
    if(sqt*sqt==n)
        sum-=sqt;
    return sum;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        printf("%d\n",divsum(m));
    }
    return 0;
}
